#include "price_app.h"
#include "./ui_price_app.h"

void EURDG(double EUR, double & DG, double price){
    DG = EUR/price;
}

void DGEUR(double DG, double & EUR, double price){
    EUR = DG*price;
}

Price_app::Price_app(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Price_app)
{
    ui->setupUi(this);
}

Price_app::~Price_app()
{
    delete ui;
}


void Price_app::on_btnPrice_clicked()
{
    double price = ui->linePrice->text().toDouble();
    QString out = QString::number(price);
    ui->listPrice->insertItem(0, out);

}


void Price_app::on_btnEURDG_clicked()
{
    double EUR = ui->lineEURin->text().toDouble();
    double price = ui->linePrice->text().toDouble();
    double DG = 0;
    EURDG(EUR, DG, price);
    QString out = QString::number(DG);
    ui->lineDGout->setText(out);
}


void Price_app::on_btnDGEUR_clicked()
{
    double DG = ui->lineDGin->text().toDouble();
    double price = ui->linePrice->text().toDouble();
    double EUR = 0;
    DGEUR(DG, EUR, price);
    QString out = QString::number(EUR);
    ui->lineEURout->setText(out);
}

