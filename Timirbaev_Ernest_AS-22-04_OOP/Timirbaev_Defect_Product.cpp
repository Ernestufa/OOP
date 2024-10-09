#include "Timirbaev_Defect_Product.h"
#include <format>


using namespace std;


void Timirbaev_Defect_Product::create_product(istream& in)
{
    Timirbaev_Product::create_product(in);
    cout << endl << "�������� ��� �����\n"
        << "1. ����������\n"
        << "2. �������������\n"
        << "3. �����������\n"
        << "4. ������\n"
        << endl << "������� ����� �� 1 �� 4: ";

    switch (GetCorrectNumber(1, 4)) {
    case 1: {
        type_of_defect = "����������";
        break;
    }
    case 2: {
        type_of_defect = "�������������";
        break;
    }
    case 3: {
        type_of_defect = "�����������";
        break;
    }
    case 4: {
        type_of_defect = "������";
        break; }
    }
    cout << "������� ����� (0) ��� ������������� (1): "; isDisposal = GetCorrectNumber(0, 1);
}


void Timirbaev_Defect_Product::show_product(ostream& out)
{
    Timirbaev_Product::show_product(out);
    out << format("{:^20} {:^20} ", type_of_defect, isDisposal);
}