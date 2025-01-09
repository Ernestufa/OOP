#include "timirbaev_defect_product.h"
#include <format>

using namespace std;

void Timirbaev_Defect_Product::create_product(Ui::Timirbaev_Add_Dialog* ui) {
    Timirbaev_Product::create_product(ui);
    type_of_defect = ui->comboBox_2->currentText().toLocal8Bit().constData();
    if (ui->radioButton->isChecked()) isDisposal = true;
    else isDisposal = false;
}

void Timirbaev_Defect_Product::show_product(QPainter& painter, int& i) const
{
    int y = i;
    Timirbaev_Product::show_product(painter, i);
    int cellWidth = 100; int cellHeight = 50;
    QRect cellRect4(4 * cellWidth, y * cellHeight, cellWidth, cellHeight);
    painter.drawText(cellRect4, Qt::AlignCenter, QString::fromLocal8Bit(type_of_defect));
    QRect cellRect5(5 * cellWidth, y * cellHeight, cellWidth, cellHeight);
    if (isDisposal) painter.drawText(cellRect5, Qt::AlignCenter, QString("утилизировать"));
    else painter.drawText(cellRect5, Qt::AlignCenter, QString("уценить"));
}

void Timirbaev_Defect_Product::view_product(Ui::Timirbaev_Dialog* ui) const {
    Timirbaev_Product::view_product(ui);
    if (isDisposal) ui->radioButton->setChecked(true);
    else ui->radioButton_2->setChecked(true);
    ui->comboBox_3->setCurrentText(QString::fromLocal8Bit(type_of_defect));
    ui->comboBox_3->setVisible(true);
    ui->label_5->setVisible(true);
    ui->radioButton->setVisible(true);
    ui->radioButton_2->setVisible(true);
}

void Timirbaev_Defect_Product::replace_product(Ui::Timirbaev_Dialog* ui) {
    Timirbaev_Product::replace_product(ui);
    if (ui->radioButton->isChecked()) isDisposal = true;
    else isDisposal = false;
    type_of_defect = ui->comboBox_3->currentText().toLocal8Bit().constData();
}
