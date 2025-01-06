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
}

Timirbaev_Ernest_MainWindow::~Timirbaev_Ernest_MainWindow()
{
    delete ui;
}

void Timirbaev_Ernest_MainWindow::on_action_triggered()
{
    bool flag = warehouse.Dowloand();
    products = warehouse.GetProducts();
    if (flag) {
        Timirbaev_Table *table = new Timirbaev_Table(nullptr, products);
        ui->scrollArea->setWidget(table);
        ui->scrollArea->setWidgetResizable(true);
        ui->scrollArea->setVisible(true);
    }
}

void Timirbaev_Ernest_MainWindow::on_action_3_triggered()
{
    ui->scrollArea->setVisible(false);
    warehouse.DeleteProducts();
    products.clear();
}


void Timirbaev_Ernest_MainWindow::on_action_2_triggered()
{
    warehouse.Save();
}

