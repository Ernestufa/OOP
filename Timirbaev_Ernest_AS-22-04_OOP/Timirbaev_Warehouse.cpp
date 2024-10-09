#include "Timirbaev_Warehouse.h"
#include <filesystem>

using namespace std;


void Timirbaev_Warehouse::AddProduct(int article)
{
	shared_ptr<Timirbaev_Product> product = make_shared<Timirbaev_Product>(article);
	product -> create_product(cin);
	products.push_back(product);
}

void Timirbaev_Warehouse::AddDefectProduct()
{
	shared_ptr<Timirbaev_Defect_Product> defect_product = make_shared<Timirbaev_Defect_Product>();
	defect_product -> create_product(cin);
	products.push_back(defect_product);
}


void Timirbaev_Warehouse::ViewProducts()
{
	cout << endl << format(" {:^20} {:^20} {:^20} {:^20} {:^20} {:^20} \n", "Артикул", "Название", "Тип товара", "Кол-во", "Тип брака", "Утилизация");
	string stroka(127, '-');
	cout << stroka << endl;
	for (const auto& product : products) {
		product -> show_product(cout);
		cout << endl;
	}
}


void Timirbaev_Warehouse::DeleteProducts()
{
	//for (auto p : products) {
	//	delete p;
	//}
	products.clear();
}


//void Timirbaev_Warehouse::Save()
//{
//	if (products.size() != 0) {
//		cout << endl << "Введите имя файла: ";
//		string name;
//		getline(cin, name);
//		name.append(".txt");
//
//		ofstream file;
//		file.open(name, ios::out);
//		file << products.size() << endl;
//		for (auto product : products) {
//			file << *product;
//		}
//
//		file.close();
//		cout << "Файл сохранён!" << endl;
//	}
//	else cout << "Нет товаров!" << endl;
//}
//
//
//void Timirbaev_Warehouse::Dowloand()
//{
//	ifstream file;
//	string path = "C:/Users/timir/Documents/GitHub/OOP/Timirbaev_Ernest_AS-22-04_OOP";
//	vector<filesystem::directory_entry> names;
//	int count = 0;
//	for (auto& name : filesystem::directory_iterator(path)) {
//		if (name.path().extension() == ".txt") {
//			count++;
//			names.push_back(name);
//			cout << count << ". " << name.path().filename() << endl;
//		}
//	}
//	cout << endl << "Выберите файл: ";
//	int download = GetCorrectNumber(1, count);
//
//	DeleteProducts();
//	int products_count;
//
//	file.open(names[download - 1]);
//	file >> products_count;
//
//	while (products_count--)
//	{
//		Timirbaev_Product* product = new Timirbaev_Product;
//		file >> *product;
//		products.push_back(product);
//	}
//	cout << "Загрузка завершена!" << endl;
//	file.close();
//}