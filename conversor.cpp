#include "conversor.h"
#include "ui_conversor.h"

conversor::conversor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::conversor)
{
    ui->setupUi(this);
}

conversor::~conversor()
{
    delete ui;
}

