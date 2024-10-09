#pragma once
#include "Timirbaev_Product.h"
#include "Timirbaev_Defect_Product.h"
#include "Timirbaev_Utils.h"
#include <vector>


class Timirbaev_Warehouse
{
private:
	std::vector<std::shared_ptr<Timirbaev_Product>> products;

public:
	void AddProduct(int article);
	void AddDefectProduct();
	void ViewProducts();
	/*void Save();
	void Dowloand();*/
	void DeleteProducts();

	~Timirbaev_Warehouse() { DeleteProducts(); /*std::cout << "Вызов деструктора Warehouse\n";*/ };
};