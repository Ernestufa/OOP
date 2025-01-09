#include "timirbaev_table.h"
#include <algorithm>
#include <functional>
#include <QPainter>

using namespace std;

Timirbaev_Table::Timirbaev_Table(QWidget *parent, Timirbaev_Warehouse& warehouse) : QWidget(parent) {
    ptr_warehouse = &warehouse;
    ptr_products = &(*ptr_warehouse).GetProducts();
}

void Timirbaev_Table::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    int rows = (*ptr_products).size() + 1;
    int cols = 6;
    int cellWidth = 100;
    int cellHeight = 50;

    int tableWidth = cols * cellWidth;
    int tableHeight = rows * cellHeight;
    painter.drawLine(0, 1, tableWidth, 1);
    painter.drawLine(1, 0, 1, tableHeight);
    setMinimumSize(tableWidth, tableHeight);

    for (int i = 0; i <= rows; ++i) {
        int y = i * cellHeight;
        painter.drawLine(0, y, tableWidth, y); // Горизонтальные линии
    }

    for (int j = 0; j <= cols; ++j) {
        int x = j * cellWidth;
        painter.drawLine(x, 0, x, tableHeight); // Вертикальные линии
    }

    QRect col1(0, 0, cellWidth, cellHeight);
    painter.drawText(col1, Qt::AlignCenter, QString("Название"));
    QRect col2(1 * cellWidth, 0, cellWidth, cellHeight);
    painter.drawText(col2, Qt::AlignCenter, QString("Артикул"));
    QRect col3(2 * cellWidth, 0, cellWidth, cellHeight);
    painter.drawText(col3, Qt::AlignCenter, QString("Тип товара"));
    QRect col4(3 * cellWidth, 0, cellWidth, cellHeight);
    painter.drawText(col4, Qt::AlignCenter, QString("Кол-во"));
    QRect col5(4 * cellWidth, 0, cellWidth, cellHeight);
    painter.drawText(col5, Qt::AlignCenter, QString("Тип брака"));
    QRect col6(5 * cellWidth, 0, cellWidth, cellHeight);
    painter.drawText(col6, Qt::AlignCenter, QString("Утилизация"));

    // qDebug() << (*ptr_products).size();
    // (*ptr_warehouse).DeleteProducts();
    // qDebug() << (*ptr_products).size();
    int i = 1;

    //for_each((*ptr_products).begin(), (*ptr_products).end(), bind(&Timirbaev_Product::show_product, placeholders::_1, ref(painter), i));
    for_each((*ptr_products).begin(), (*ptr_products).end(), [&painter, &i](const shared_ptr<Timirbaev_Product>& product) { product->show_product(painter, i); });
}
