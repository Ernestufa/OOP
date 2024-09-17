#include "Timirbaev_Product.h"
#include <format>


using namespace std;


Timirbaev_Product::Timirbaev_Product(int article) { this->article = article + 100000; }


istream& operator >> (istream& cin, Timirbaev_Product& product)
{
	while (true) {
		cout << "¬ведите название товара: "; getline(cin, product.name);
		if (product.name.empty()) cout << "ќшибка!" << endl;
		else break;
	}
	cout << "¬ведите количество товара: "; product.capacity = GetCorrectNumber(0, 1000000);
    return cin;
}


ostream& operator << (ostream& cout, Timirbaev_Product& product)
{
	cout << format("|{:^20}|{:^20}|{:^20}|\n", product.article, product.name, product.capacity);
    return cout;
}


ifstream& operator >> (ifstream& fin, Timirbaev_Product& product)
{
	if (fin.is_open()) {
		fin >> ws;
		fin >> product.name;
		fin >> product.article;
		fin >> product.capacity;
	}
	return fin;
}


ofstream& operator << (ofstream& fout, Timirbaev_Product& product)
{
	if (fout.is_open()) {
		fout << product.name << endl;
		fout << product.article << endl;
		fout << product.capacity << endl;
	}
	return fout;
}