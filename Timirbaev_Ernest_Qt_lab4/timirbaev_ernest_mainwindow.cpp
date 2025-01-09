#include "timirbaev_ernest_mainwindow.h"
#include "timirbaev_warehouse.h"
#include "./ui_timirbaev_ernest_mainwindow.h"

using namespace std;

Timirbaev_Ernest_MainWindow::Timirbaev_Ernest_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Timirbaev_Ernest_MainWindow)
{
    ui->setupUi(this);
    ui->scrollArea->setVisible(false);
    table = new Timirbaev_Table(nullptr, warehouse);
}

Timirbaev_Ernest_MainWindow::~Timirbaev_Ernest_MainWindow()
{
    delete ui;
    delete table;
    delete dialog;
}

void Timirbaev_Ernest_MainWindow::on_action_triggered()
{
    bool flag = warehouse.Dowloand();
    if (flag) {
        ui->scrollArea->setWidget(table);
        ui->scrollArea->setWidgetResizable(true);
        ui->scrollArea->setVisible(true);
    }
}

void Timirbaev_Ernest_MainWindow::on_action_3_triggered()
{
    ui->scrollArea->setVisible(false);
    warehouse.DeleteProducts();
}


void Timirbaev_Ernest_MainWindow::on_action_2_triggered()
{
    warehouse.Save();
}

void Timirbaev_Ernest_MainWindow::on_action_4_triggered()
{
    dialog = new Timirbaev_Dialog(nullptr, warehouse);
    dialog->setModal(true);
    dialog->exec();
    if (!warehouse.GetProducts().empty()) {
        ui->scrollArea->setWidget(table);
        ui->scrollArea->setWidgetResizable(true);
        ui->scrollArea->setVisible(true);
    }
}
