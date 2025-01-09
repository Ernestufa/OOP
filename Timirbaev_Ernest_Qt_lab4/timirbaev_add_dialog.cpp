#include "timirbaev_add_dialog.h"
#include "ui_timirbaev_add_dialog.h"

using namespace std;

Timirbaev_Add_Dialog::Timirbaev_Add_Dialog(QWidget *parent, Timirbaev_Warehouse* warehouse, bool flag)
    : QDialog(parent)
    , ui(new Ui::Timirbaev_Add_Dialog)
{
    ui->setupUi(this);
    ptr_warehouse = warehouse;
    this->flag = flag;
    if (flag) {
        ui->label_5->setVisible(false);
        ui->comboBox_2->setVisible(false);
        ui->radioButton->setVisible(false);
        ui->radioButton_2->setVisible(false);
    }
}

Timirbaev_Add_Dialog::~Timirbaev_Add_Dialog()
{
    delete ui;
}

void Timirbaev_Add_Dialog::on_pushButton_clicked()
{
    if (!ui->lineEdit->text().isEmpty() && GetCorrectNumber(100000, 199999, ui->lineEdit_2->text().toLocal8Bit().constData()) && GetCorrectNumber(0, 1000000, ui->lineEdit_4->text().toLocal8Bit().constData())) {
        if (flag) ptr_warehouse->AddProduct(ui);
        else ptr_warehouse->AddDefectProduct(ui);
        close();
    }
    else QMessageBox::warning(nullptr, "Ошибка!",  "Неверные данные! Повторите ввод");
}
