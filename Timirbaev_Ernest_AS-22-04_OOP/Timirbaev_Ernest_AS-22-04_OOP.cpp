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
            << "2. Добавить бракованный товар\n"
            << "3. Информация о товаре\n"
            << "4. Загрузить из файла\n"
            << "5. Сохранить в файл\n"
            << "6. Очистить список\n"
            << "0. Выход\n"
            << endl << "Введите номер от 0 до 6: ";

        switch (GetCorrectNumber(0, 6)) {
        case 0: {
            exit(0);
            break;
        }
        case 1: {
            products.AddProduct(rand());
            break;
        }
        case 2: {
            products.AddDefectProduct();
            break;
        }
        case 3: {
            products.ViewProducts();
            break;
        }
        case 4: {
            //products.Dowloand();
            break;
        }
        case 5: {
            //products.Save();
            break;
        }
        case 6: {
            products.DeleteProducts();
            break; }
        }
    }
}