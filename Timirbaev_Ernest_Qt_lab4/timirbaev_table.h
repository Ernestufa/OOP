#ifndef TIMIRBAEV_TABLE_H
#define TIMIRBAEV_TABLE_H

#include <QWidget>
#include "timirbaev_warehouse.h"

class Timirbaev_Table : public QWidget
{
    Q_OBJECT
private:
    Timirbaev_Warehouse* ptr_warehouse = nullptr;
    std::vector<std::shared_ptr<Timirbaev_Product>>* ptr_products = nullptr;
public:
    Timirbaev_Table(QWidget *parent, Timirbaev_Warehouse& warehouse);
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // TIMIRBAEV_TABLE_H
