using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Timirbaev_Ernest_AS_22_04_lab5
{
    public class Timirbaev_lab5
    {
        static void Main(string[] args)
        {
            Timirbaev_Warehouse products = new Timirbaev_Warehouse();
            while (true)
            {
                Console.WriteLine("Выбор команды");
                Console.WriteLine("1. Добавить товар");
                Console.WriteLine("2. Добавить бракованный товар");
                Console.WriteLine("3. Информация о товаре");
                Console.WriteLine("4. Загрузить из файла");
                Console.WriteLine("5. Сохранить в файл");
                Console.WriteLine("6. Очистить список");
                Console.WriteLine("0. Выход");
                Console.WriteLine();
                Console.Write("Введите номер от 0 до 6: ");

                switch (Timirbaev_Utils.GetCorrectNumber(0, 6))
                {
                    case 0:
                        return;
                    case 1:
                        products.AddProduct();
                        break;
                    case 2:
                        products.AddDefectProduct();
                        break;
                    case 3:
                        products.ViewProducts();
                        break;
                    case 4:
                        products.Dowloand();
                        break;
                    case 5:
                        products.Save();
                        break;
                    case 6:
                        products.DeleteProducts();
                        break;
                }
            }
        }
    }
}