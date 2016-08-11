#include "console.h"
#include <iostream>

Console::Console(QObject *parent) : QObject(parent)
{
}

void Console::execute()
{
    qmainwindow = new MainWindow();
    wg0 = new WG0;
    wg1 = new WG1;
    wg2 = new WG2;

    QObject::connect(wg0, SIGNAL(choose(std::string)), this, SLOT(setCentralWidget(std::string)));
    QObject::connect(wg1, SIGNAL(back()), this, SLOT(setCentralWidget()));
    QObject::connect(wg2, SIGNAL(back()), this, SLOT(setCentralWidget()));

    qmainwindow->setFixedSize(QSize(400, 320));
    qmainwindow->setCentralWidget(wg0);
    qmainwindow->show();
}

void Console::setCentralWidget(std::string widgetName)
{
    for (auto ch: widgetName) ch = tolower(ch);
    qmainwindow->takeCentralWidget();

    if (widgetName == "main") qmainwindow->setCentralWidget(wg0);
    if (widgetName == "wg1") qmainwindow->setCentralWidget(wg1);
    if (widgetName == "wg2") qmainwindow->setCentralWidget(wg2);
}
