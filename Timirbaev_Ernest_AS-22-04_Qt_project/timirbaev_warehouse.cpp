#include "timirbaev_warehouse.h"
#include <filesystem>
#include <fstream>

using namespace std;


BOOST_CLASS_EXPORT_GUID(Timirbaev_Product, "Timirbaev_Product")
BOOST_CLASS_EXPORT_GUID(Timirbaev_Defect_Product, "Timirbaev_Defect_Product")

void Timirbaev_Warehouse::DeleteProducts()
{
    products.clear();
}

vector<shared_ptr<Timirbaev_Product>>& Timirbaev_Warehouse::GetProducts() {
    return products;
}

void Timirbaev_Warehouse::Save()
{
    if (products.empty())
        QMessageBox::information(nullptr, "Информация", "Нет товаров!");
    else {
        QString filePath = QFileDialog::getOpenFileName(nullptr, "Выберите файл", QDir::homePath(), "Все файлы (*.*);;Текстовые файлы (*.txt)");

        if (!filePath.isEmpty()) {
            ofstream file(filePath.toStdString());
            if (!file.is_open()) {
                QMessageBox::information(nullptr, "Информация", "Ошибка при работе с файлом " + filePath);
            }
            try {
                boost::archive::text_oarchive output(file);
                output << products;
                QMessageBox::information(nullptr, "Информация", "Данные сохранены в файл " + filePath);
            }
            catch (const exception& e) {
                QMessageBox::information(nullptr, "Информация", "Ошибка при работе с файлом " + filePath);
            }
            file.close();
        }
        else {
            QMessageBox::information(nullptr, "Информация", "Файл не был выбран.");
        }
    }
}

bool Timirbaev_Warehouse::Dowloand()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Выберите файл", QDir::homePath(), "Все файлы (*.*);;Текстовые файлы (*.txt)");

    if (!filePath.isEmpty()) {
        ifstream file(filePath.toStdString());
        if (!file.is_open()) {
            QMessageBox::information(nullptr, "Информация", "Ошибка при работе с файлом " + filePath);
            return 0;
        }
        try {
            boost::archive::text_iarchive input(file);
            input >> products;
            QMessageBox::information(nullptr, "Информация", "Данные загружены из файла " + filePath);
            return 1;
        }
        catch (const exception& e) {
            QMessageBox::information(nullptr, "Информация", "Ошибка при работе с файлом " + filePath);
            return 0;
        }
        file.close();
    }
    else {
        QMessageBox::information(nullptr, "Информация", "Файл не был выбран.");
        return 0;
    }
}
