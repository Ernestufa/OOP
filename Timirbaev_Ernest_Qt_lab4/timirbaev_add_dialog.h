#ifndef TIMIRBAEV_ADD_DIALOG_H
#define TIMIRBAEV_ADD_DIALOG_H

#include <QDialog>
#include "timirbaev_warehouse.h"

namespace Ui {
class Timirbaev_Add_Dialog;
}

class Timirbaev_Add_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Timirbaev_Add_Dialog(QWidget *parent, Timirbaev_Warehouse* warehouse, bool flag);
    ~Timirbaev_Add_Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Timirbaev_Add_Dialog* ui;
    bool flag;
    Timirbaev_Warehouse* ptr_warehouse = nullptr;
};

#endif // TIMIRBAEV_ADD_DIALOG_H
