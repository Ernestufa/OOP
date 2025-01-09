#include "timirbaev_dialog.h"
#include "ui_timirbaev_dialog.h"

using namespace std;

Timirbaev_Dialog::Timirbaev_Dialog(QWidget *parent, Timirbaev_Warehouse& warehouse)
    : QDialog(parent)
    , ui(new Ui::Timirbaev_Dialog)
{
    ui->setupUi(this);
    ptr_warehouse = &warehouse;
    ptr_products = &(*ptr_warehouse).GetProducts();

    for (auto& product : (*ptr_products)) {
        ui->comboBox->addItem(QString::fromLocal8Bit(product->GetName()));
    }

    if (ptr_products->empty()) {
        ui->lineEdit->setEnabled(false);
        ui->lineEdit_2->setEnabled(false);
        ui->comboBox_2->setEnabled(false);
        ui->lineEdit_4->setEnabled(false);
        ui->comboBox_3->setEnabled(false);
        ui->radioButton->setEnabled(false);
        ui->radioButton_2->setEnabled(false);
    }
}

Timirbaev_Dialog::~Timirbaev_Dialog()
{
    delete ui;
    delete add_dialog;
}

void Timirbaev_Dialog::on_pushButton_clicked()
{
    add_dialog = new Timirbaev_Add_Dialog(nullptr, ptr_warehouse, true);
    add_dialog->setModal(true);
    add_dialog->exec();
    if (!ptr_products->empty())
        ui->comboBox->addItem(QString::fromLocal8Bit((*ptr_products)[ptr_products->size() - 1]->GetName()));
}

void Timirbaev_Dialog::on_pushButton_2_clicked()
{
    add_dialog = new Timirbaev_Add_Dialog(nullptr, ptr_warehouse, false);
    add_dialog->setModal(true);
    add_dialog->exec();
    if (!ptr_products->empty())
        ui->comboBox->addItem(QString::fromLocal8Bit((*ptr_products)[ptr_products->size() - 1]->GetName()));
}

void Timirbaev_Dialog::on_pushButton_3_clicked()
{
    if (!ptr_products->empty()) {
        int index = ui->comboBox->currentIndex();
        ptr_products->erase(ptr_products->begin() + index);
        ui->comboBox->removeItem(index);
        if (ui->comboBox->currentText().isEmpty()) {
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_4->clear();
            ui->radioButton->setChecked(false);
            ui->radioButton_2->setChecked(false);
        }
    } else QMessageBox::information(nullptr, "Информация", "Нет товаров!");
}

void Timirbaev_Dialog::on_pushButton_4_clicked()
{
    close();
}

void Timirbaev_Dialog::on_comboBox_currentIndexChanged(int index)
{
    if (!ptr_products->empty()) {
        (*ptr_products)[index]->view_product(ui);
        ui->lineEdit->setEnabled(true);
        ui->lineEdit_2->setEnabled(true);
        ui->comboBox_2->setEnabled(true);
        ui->lineEdit_4->setEnabled(true);
        ui->comboBox_3->setEnabled(true);
        ui->radioButton->setEnabled(true);
        ui->radioButton_2->setEnabled(true);
    } else {
        ui->lineEdit->setEnabled(false);
        ui->lineEdit_2->setEnabled(false);
        ui->comboBox_2->setEnabled(false);
        ui->lineEdit_4->setEnabled(false);
        ui->comboBox_3->setEnabled(false);
        ui->radioButton->setEnabled(false);
        ui->radioButton_2->setEnabled(false);
    }
}

void Timirbaev_Dialog::on_lineEdit_editingFinished()
{
    (*ptr_products)[ui->comboBox->currentIndex()]->replace_product(ui);
}

void Timirbaev_Dialog::on_lineEdit_2_editingFinished()
{
    (*ptr_products)[ui->comboBox->currentIndex()]->replace_product(ui);
}

void Timirbaev_Dialog::on_lineEdit_4_editingFinished()
{
    (*ptr_products)[ui->comboBox->currentIndex()]->replace_product(ui);
}

void Timirbaev_Dialog::on_radioButton_clicked(bool checked)
{
    (*ptr_products)[ui->comboBox->currentIndex()]->replace_product(ui);
}

void Timirbaev_Dialog::on_radioButton_2_clicked(bool checked)
{
    (*ptr_products)[ui->comboBox->currentIndex()]->replace_product(ui);
}

void Timirbaev_Dialog::on_comboBox_2_activated(int index)
{
    (*ptr_products)[ui->comboBox->currentIndex()]->replace_product(ui);
}

void Timirbaev_Dialog::on_comboBox_3_activated(int index)
{
    (*ptr_products)[ui->comboBox->currentIndex()]->replace_product(ui);
}
