#ifndef TIMIRBAEV_PRODUCT_H
#define TIMIRBAEV_PRODUCT_H

#pragma once
#include "Timirbaev_Utils.h"
#include <fstream>
#include <QPainter>


class Timirbaev_Product
{
private:
    std::string name;
    int article;
    std::string type;
    int capacity;

public:
    Timirbaev_Product() {
        article = rand() + 100000;
    };
    ~Timirbaev_Product() {};

    template<class Archive>
    void serialize(Archive& ar, const unsigned int version) {
        ar& name;
        ar& article;
        ar& type;
        ar& capacity;
    }

    // virtual void create_product(std::istream& in);
    virtual void show_product(QPainter& painter, int& i) const;
};
#endif // TIMIRBAEV_PRODUCT_H
