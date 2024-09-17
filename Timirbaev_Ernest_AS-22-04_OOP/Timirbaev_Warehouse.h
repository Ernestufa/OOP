#pragma once
#include "Timirbaev_Product.h"
#include "Timirbaev_Utils.h"
#include <vector>


class Timirbaev_Warehouse
{
private:
	std::vector<Timirbaev_Product*> products;

public:
	void AddProduct(int article);
	void ViewProducts();
	void Save();
	void Dowloand();
	void DeleteProducts();

	~Timirbaev_Warehouse() { DeleteProducts(); std::cout << "Вызов деструктора Warehouse\n"; };
};