#ifndef TIMIRBAEV_PRODUCT_H
#define TIMIRBAEV_PRODUCT_H

#pragma once
#include "Timirbaev_Utils.h"
#include "ui_timirbaev_add_dialog.h"
#include "ui_timirbaev_dialog.h"
#include <fstream>
#include <QPainter>
#include <QDebug>
#include <QMessageBox>

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

    virtual void create_product(Ui::Timirbaev_Add_Dialog* ui);
    virtual void replace_product(Ui::Timirbaev_Dialog* ui);
    virtual void view_product(Ui::Timirbaev_Dialog* ui) const;
    virtual void show_product(QPainter& painter, int& i) const;

    std::string GetName();
};
#endif // TIMIRBAEV_PRODUCT_H
