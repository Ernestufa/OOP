#ifndef TIMIRBAEV_DEFECT_PRODUCT_H
#define TIMIRBAEV_DEFECT_PRODUCT_H

#pragma once
#include "timirbaev_product.h"
#include <boost/serialization/base_object.hpp>


class Timirbaev_Defect_Product : public Timirbaev_Product {
private:
    std::string type_of_defect;
    bool isDisposal;

public:
    Timirbaev_Defect_Product() {}
    ~Timirbaev_Defect_Product() {};

    template<class Archive>
    void serialize(Archive& ar, const unsigned int version) {
        ar& boost::serialization::base_object<Timirbaev_Product>(*this);
        ar& type_of_defect;
        ar& isDisposal;
    }

    void create_product(Ui::Timirbaev_Add_Dialog* ui) override;
    void replace_product(Ui::Timirbaev_Dialog* ui) override;
    void view_product(Ui::Timirbaev_Dialog* ui) const override;
    void show_product(QPainter& painter, int& i) const override;
};
#endif // TIMIRBAEV_DEFECT_PRODUCT_H
