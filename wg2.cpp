#include "wg2.h"
#include "ui_wg2.h"

WG2::WG2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WG2)
{
    ui->setupUi(this);
}

WG2::~WG2()
{
    delete ui;
}
