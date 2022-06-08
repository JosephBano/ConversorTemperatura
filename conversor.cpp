#include "conversor.h"
#include "ui_conversor.h"

conversor::conversor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::conversor)
{
    ui->setupUi(this);
    //Conectar el dial de Centigrados con el slot de esta clase
    connect(ui->inCentigrados, SIGNAL(valueChanged(int)), this, SLOT(cent2fahr(int)));
    connect(ui->InFahrenheit, SIGNAL(valueChanged(int)), this, SLOT(fahr2cent(int)));
}

conversor::~conversor()
{
    delete ui;
}

void conversor::cent2fahr(int grados)
{
    if (ui->inCentigrados->hasFocus()){
        int fahr = (grados * 9.0/5)+32;
        ui->InFahrenheit->setValue(fahr);
    }
}

void conversor::fahr2cent(int grados)
{
    if (ui->InFahrenheit->hasFocus()){
        int celc = (grados -32) * 5.0/9;
        ui->inCentigrados->setValue(celc);
    }
}




