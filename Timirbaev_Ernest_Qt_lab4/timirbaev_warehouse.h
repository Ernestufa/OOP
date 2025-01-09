#ifndef TIMIRBAEV_WAREHOUSE_H
#define TIMIRBAEV_WAREHOUSE_H

#pragma once
#include "timirbaev_product.h"
#include "timirbaev_defect_product.h"
#include "Timirbaev_Utils.h"
#include <vector>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/export.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/version.hpp>
#include <boost/serialization/split_member.hpp>
#include <boost/serialization/shared_ptr.hpp>

#include <QFileDialog>

class Timirbaev_Warehouse
{
private:
    std::vector<std::shared_ptr<Timirbaev_Product>> products;

public:
    void AddProduct(Ui::Timirbaev_Add_Dialog* ui);
    void AddDefectProduct(Ui::Timirbaev_Add_Dialog* ui);
    void Save();
    bool Dowloand();
    void DeleteProducts();
    std::vector<std::shared_ptr<Timirbaev_Product>>& GetProducts();

    ~Timirbaev_Warehouse() {};
};

#endif // TIMIRBAEV_WAREHOUSE_H
