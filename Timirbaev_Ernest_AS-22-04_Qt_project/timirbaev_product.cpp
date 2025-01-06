#include "timirbaev_product.h"
#include <format>


using namespace std;

// void Timirbaev_Product::create_product(istream& in)
// {
//     while (true) {
//         cout << "Введите название товара: "; getline(in, name);
//         if (name.empty()) cout << "Ошибка!" << endl;
//         else break;
//     }

//     cout << endl << "Выберите тип товара\n"
//          << "1. Пищевая продукция\n"
//          << "2. Техника\n"
//          << "3. Химия\n"
//          << "4. Одежда\n"
//          << "5. Другое\n"
//          << endl << "Введите номер от 1 до 5: ";

//     switch (GetCorrectNumber(1, 5)) {
//     case 1: {
//         type = "Пищевая продукция";
//         break;
//     }
//     case 2: {
//         type = "Техника";
//         break;
//     }
//     case 3: {
//         type = "Химия";
//         break;
//     }
//     case 4: {
//         type = "Одежда";
//         break;
//     }
//     case 5: {
//         type = "Другое";
//         break; }
//     }

//     cout << "Введите количество товара: "; capacity = GetCorrectNumber(0, 1000000);
// }

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
