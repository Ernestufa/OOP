#include "timirbaev_product.h"
#include <format>

using namespace std;

void Timirbaev_Product::show_product(QPainter& painter, int& i) const
{
    int cellWidth = 100; int cellHeight = 50;
    QRect cellRect0(0, i * cellHeight, cellWidth, cellHeight);
    painter.drawText(cellRect0, Qt::AlignCenter, QString::fromLocal8Bit(name));
    QRect cellRect1(1 * cellWidth, i * cellHeight, cellWidth, cellHeight);
    painter.drawText(cellRect1, Qt::AlignCenter, QString::number(article));
    QRect cellRect2(2 * cellWidth, i * cellHeight, cellWidth, cellHeight);
    painter.drawText(cellRect2, Qt::AlignCenter, QString::fromLocal8Bit(type));
    QRect cellRect3(3 * cellWidth, i * cellHeight, cellWidth, cellHeight);
    painter.drawText(cellRect3, Qt::AlignCenter, QString::number(capacity));
    ++i;
}

void Timirbaev_Product::create_product(Ui::Timirbaev_Add_Dialog* ui) {
    name = ui->lineEdit->text().toLocal8Bit().constData();
    article = ui->lineEdit_2->text().toInt();
    type = ui->comboBox->currentText().toLocal8Bit().constData();
    capacity = ui->lineEdit_4->text().toInt();

}

void Timirbaev_Product::replace_product(Ui::Timirbaev_Dialog* ui) {
    if (!ui->lineEdit->text().isEmpty() && GetCorrectNumber(100000, 199999, ui->lineEdit_2->text().toLocal8Bit().constData()) && GetCorrectNumber(0, 1000000, ui->lineEdit_4->text().toLocal8Bit().constData())) {
        name = ui->lineEdit->text().toLocal8Bit().constData();
        ui->comboBox->setItemText(ui->comboBox->currentIndex(), QString::fromLocal8Bit(name));
        article = ui->lineEdit_2->text().toInt();
        type = ui->comboBox_2->currentText().toLocal8Bit().constData();
        capacity = ui->lineEdit_4->text().toInt();
    } else QMessageBox::warning(nullptr, "Ошибка!",  "Неверные данные! Повторите ввод");
}

void Timirbaev_Product::view_product(Ui::Timirbaev_Dialog* ui) const {
    ui->lineEdit->setText(QString::fromLocal8Bit(name));
    ui->lineEdit_2->setText(QString::number(article));
    ui->lineEdit_4->setText(QString::number(capacity));
    ui->comboBox_2->setCurrentText(QString::fromLocal8Bit(type));
    ui->comboBox_3->setVisible(false);
    ui->label_5->setVisible(false);
    ui->radioButton->setVisible(false);
    ui->radioButton_2->setVisible(false);
}

string Timirbaev_Product::GetName() {
    return name;
}
