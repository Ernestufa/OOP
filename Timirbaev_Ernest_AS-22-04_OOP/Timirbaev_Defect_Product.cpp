#include "Timirbaev_Defect_Product.h"
#include <format>


using namespace std;


void Timirbaev_Defect_Product::create_product(istream& in)
{
    Timirbaev_Product::create_product(in);
    cout << endl << "Выберите тип брака\n"
        << "1. Деформация\n"
        << "2. Неисправность\n"
        << "3. Загрязнения\n"
        << "4. Другое\n"
        << endl << "Введите номер от 1 до 4: ";

    switch (GetCorrectNumber(1, 4)) {
    case 1: {
        type_of_defect = "Деформация";
        break;
    }
    case 2: {
        type_of_defect = "Неисправность";
        break;
    }
    case 3: {
        type_of_defect = "Загрязнения";
        break;
    }
    case 4: {
        type_of_defect = "Другое";
        break; }
    }
    cout << "Уценить товар (0) или утилизировать (1): "; isDisposal = GetCorrectNumber(0, 1);
}


void Timirbaev_Defect_Product::show_product(ostream& out)
{
    Timirbaev_Product::show_product(out);
    out << format("{:^20} {:^20} ", type_of_defect, isDisposal);
}