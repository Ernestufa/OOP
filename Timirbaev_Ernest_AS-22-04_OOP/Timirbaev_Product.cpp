#include "Timirbaev_Product.h"
#include <format>


using namespace std;


Timirbaev_Product::Timirbaev_Product(int article) { this->article = article + 100000; }


void Timirbaev_Product::create_product(istream& in)
{
    while (true) {
        cout << "������� �������� ������: "; getline(in, name);
        if (name.empty()) cout << "������!" << endl;
        else break;
    }

    cout << endl << "�������� ��� ������\n"
        << "1. ������� ���������\n"
        << "2. �������\n"
        << "3. �����\n"
        << "4. ������� (������, ������ � ��.)\n"
        << "5. ������\n"
        << endl << "������� ����� �� 1 �� 5: ";

    switch (GetCorrectNumber(1, 5)) {
    case 1: {
        type = "������� ���������";
        break;
    }
    case 2: {
        type = "�������";
        break;
    }
    case 3: {
        type = "�����";
        break;
    }
    case 4: {
        type = "�������";
        break;
    }
    case 5: {
        type = "������";
        break; }
    }

    cout << "������� ���������� ������: "; capacity = GetCorrectNumber(0, 1000000);
}


void Timirbaev_Product::show_product(ostream& out)
{
    out << format(" {:^20} {:^20} {:^20} {:^20} ", article, name, type, capacity);
}


//ostream& operator << (ostream& cout, Timirbaev_Product& product)
//{
//    cout << format("|{:^20}|{:^20}|{:^20}|{:^20}|\n", product.article, product.name, product.type, product.capacity);
//    return cout;
//}


//istream& operator >> (istream& cin, Timirbaev_Product& product)
//{
//	while (true) {
//		cout << "������� �������� ������: "; getline(cin, product.name);
//		if (product.name.empty()) cout << "������!" << endl;
//		else break;
//	}
//	
//    cout << endl << "�������� ��� ������\n"
//        << "1. ������� ���������\n"
//        << "2. �������\n"
//        << "3. �����\n"
//        << "4. ������� (������, ������ � ��.)\n"
//        << "5. ������\n"
//        << endl << "������� ����� �� 1 �� 5: ";
//
//    switch (GetCorrectNumber(1, 5)) {
//    case 1: {
//        product.type = "������� ���������";
//        break;
//    }
//    case 2: {
//        product.type = "�������";
//        break;
//    }
//    case 3: {
//        product.type = "�����";
//        break;
//    }
//    case 4: {
//        product.type = "�������";
//        break;
//    }
//    case 5: {
//        product.type = "������";
//        break; }
//    }
//
//	cout << "������� ���������� ������: "; product.capacity = GetCorrectNumber(0, 1000000);
//    return cin;
//}



//ifstream& operator >> (ifstream& fin, Timirbaev_Product& product)
//{
//	if (fin.is_open()) {
//		fin >> ws;
//		fin >> product.name;
//		fin >> product.article;
//        fin >> product.type;
//		fin >> product.capacity;
//	}
//	return fin;
//}
//
//
//ofstream& operator << (ofstream& fout, Timirbaev_Product& product)
//{
//	if (fout.is_open()) {
//		fout << product.name << endl;
//		fout << product.article << endl;
//        fout << product.type << endl;
//		fout << product.capacity << endl;
//	}
//	return fout;
//}