#ifndef CONSOLE_H
#define CONSOLE_H

#include "mainwindow.h"
#include "wg0.h"
#include "wg1.h"
#include "wg2.h"

class Console : public QObject
{
    Q_OBJECT

public:
    explicit Console(QObject *parent = 0);

private:
    MainWindow* qmainwindow;
    WG0* wg0;
    WG1* wg1;
    WG2* wg2;

public:
    void execute();

private slots:
    void setCentralWidget(std::string widgetName = "main");
};

#endif // CONSOLE_H
