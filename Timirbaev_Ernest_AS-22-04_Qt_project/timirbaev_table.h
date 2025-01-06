#ifndef TIMIRBAEV_TABLE_H
#define TIMIRBAEV_TABLE_H

#include <QWidget>
#include "timirbaev_warehouse.h"

class Timirbaev_Table : public QWidget
{
    Q_OBJECT
private:
    std::vector<std::shared_ptr<Timirbaev_Product>> products;
public:
    Timirbaev_Table(QWidget *parent, const std::vector<std::shared_ptr<Timirbaev_Product>>& products);
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // TIMIRBAEV_TABLE_H
