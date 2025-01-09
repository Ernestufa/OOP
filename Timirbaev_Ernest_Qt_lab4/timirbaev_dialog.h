#ifndef TIMIRBAEV_DIALOG_H
#define TIMIRBAEV_DIALOG_H

#include <QDialog>
#include "timirbaev_warehouse.h"
#include "timirbaev_add_dialog.h"

namespace Ui {
class Timirbaev_Dialog;
}

class Timirbaev_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Timirbaev_Dialog(QWidget *parent, Timirbaev_Warehouse& warehouse);
    ~Timirbaev_Dialog();

private slots:
    void on_pushButton_4_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_4_editingFinished();

    void on_radioButton_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_comboBox_2_activated(int index);

    void on_comboBox_3_activated(int index);

private:
    Ui::Timirbaev_Dialog* ui;
    Timirbaev_Warehouse* ptr_warehouse = nullptr;
    std::vector<std::shared_ptr<Timirbaev_Product>>* ptr_products = nullptr;
    Timirbaev_Add_Dialog* add_dialog = nullptr;
};

#endif // TIMIRBAEV_DIALOG_H
