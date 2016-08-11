#include "wg0.h"
#include "ui_wg0.h"

WG0::WG0(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WG0)
{
    ui->setupUi(this);

    QObject::connect(ui->buttonWG1, &QPushButton::clicked, this, &WG0::clickWG1);
    QObject::connect(ui->buttonWG2, &QPushButton::clicked, this, &WG0::clickWG2);
}

WG0::~WG0()
{
    delete ui;
}

void WG0::clickWG1()
{
    emit choose("wg1");
}

void WG0::clickWG2()
{
    emit choose("wg2");
}
