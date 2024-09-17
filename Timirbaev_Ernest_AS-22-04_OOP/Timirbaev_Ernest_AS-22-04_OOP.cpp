#include <Windows.h>
#include "Timirbaev_Utils.h"
#include "Timirbaev_Warehouse.h"
#include <time.h>


using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    
    Timirbaev_Warehouse products;

    while (true) {
        cout << endl << "Выбор команды\n"
            << "1. Добавить товар\n"
            << "2. Информация о товаре\n"
            << "3. Загрузить из файла\n"
            << "4. Сохранить в файл\n"
            << "5. Очистить список\n"
            << "0. Выход\n"
            << endl << "Введите номер от 0 до 5: ";

        switch (GetCorrectNumber(0, 5)) {
        case 0: {
            exit(0);
            break;
        }
        case 1: {
            products.AddProduct(rand());
            break;
        }
        case 2: {
            products.ViewProducts();
            break;
        }
        case 3: {
            products.Dowloand();
            break;
        }
        case 4: {
            products.Save();
            break;
        }
        case 5: {
            products.DeleteProducts();
            break;
        }
        default: {cout << "Ошибка! Введите номер от 0 до 5" << endl; }
        }
    }
}