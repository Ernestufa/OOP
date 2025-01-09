#ifndef TIMIRBAEV_ERNEST_MAINWINDOW_H
#define TIMIRBAEV_ERNEST_MAINWINDOW_H

#include <QMainWindow>
#include <QScrollArea>
#include "timirbaev_table.h"
#include "timirbaev_dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Timirbaev_Ernest_MainWindow;
}
QT_END_NAMESPACE

class Timirbaev_Ernest_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Timirbaev_Ernest_MainWindow(QWidget *parent = nullptr);
    ~Timirbaev_Ernest_MainWindow();

private slots:
    void on_action_triggered();

    void on_action_3_triggered();

    void on_action_2_triggered();

    void on_action_4_triggered();

private:
    Timirbaev_Warehouse warehouse;
    Ui::Timirbaev_Ernest_MainWindow* ui;
    Timirbaev_Table* table = nullptr;
    Timirbaev_Dialog* dialog = nullptr;
};
#endif // TIMIRBAEV_ERNEST_MAINWINDOW_H
