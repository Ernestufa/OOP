#pragma once
#include "Timirbaev_Product.h"


class Timirbaev_Defect_Product : public Timirbaev_Product {
private:
	std::string type_of_defect;
	bool isDisposal;

public:
	Timirbaev_Defect_Product() {}
	~Timirbaev_Defect_Product() {};

	void create_product(std::istream& in) override;
	void show_product(std::ostream& out) override;
};