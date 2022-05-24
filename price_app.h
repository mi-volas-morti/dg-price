#ifndef PRICE_APP_H
#define PRICE_APP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Price_app; }
QT_END_NAMESPACE

class Price_app : public QMainWindow
{
    Q_OBJECT

public:
    Price_app(QWidget *parent = nullptr);
    ~Price_app();

private slots:
    void on_btnPrice_clicked();

    void on_btnEURDG_clicked();

    void on_btnDGEUR_clicked();

private:
    Ui::Price_app *ui;
};
#endif // PRICE_APP_H
