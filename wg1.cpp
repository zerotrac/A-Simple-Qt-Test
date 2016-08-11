#include "wg1.h"
#include "ui_wg1.h"

WG1::WG1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WG1)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButton, &QPushButton::clicked, this, &WG1::slot_back);
}

WG1::~WG1()
{
    delete ui;
}

void WG1::slot_back()
{
    emit back();
}
