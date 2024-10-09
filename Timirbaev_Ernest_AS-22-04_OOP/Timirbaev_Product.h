#pragma once
#include "Timirbaev_Utils.h"
#include <fstream>


class Timirbaev_Product
{
private:
	std::string name;
	int article;
	std::string type;
	int capacity;

public:
	Timirbaev_Product() {};
	Timirbaev_Product(int article);

	virtual void create_product(std::istream& in);
	virtual void show_product(std::ostream& out);

	/*friend std::istream& operator >> (std::istream& cin, Timirbaev_Product& product);
	friend std::ostream& operator << (std::ostream& cout, Timirbaev_Product& product);*/
	friend std::ifstream& operator >> (std::ifstream& fin, Timirbaev_Product& product);
	friend std::ofstream& operator << (std::ofstream& fout, Timirbaev_Product& product);

	~Timirbaev_Product() { /*std::cout << std::endl << "Вызов деструктора Product\n";*/ };
};