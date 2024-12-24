using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices.ComTypes;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Timirbaev_Ernest_AS_22_04_lab5
{
    [Serializable]
    [XmlInclude(typeof(Timirbaev_Defect_Product))]
    public class Timirbaev_Product
    {
        public string name { get; set; }
        public int article { get; set; }
        public string type { get; set; }
        public int capacity { get; set; }
        public virtual void create_product()
        {
            while (true)
            {
                Console.Write("Введите название товара: ");
                name = Console.ReadLine();
                if (string.IsNullOrEmpty(name)) Console.WriteLine("Ошибка!");
                else break;
            }

            Console.WriteLine();
            Console.WriteLine("Выберите тип товара");
            Console.WriteLine("1. Пищевая продукция");
            Console.WriteLine("2. Техника");
            Console.WriteLine("3. Химия");
            Console.WriteLine("4. Одежда");
            Console.WriteLine("5. Другое");
            Console.Write("Введите номер от 1 до 5: ");

            switch (Timirbaev_Utils.GetCorrectNumber(1, 5))
            {
                case 1:
                    type = "Пищевая продукция";
                    break;
                case 2:
                    type = "Техника";
                    break;
                case 3:
                    type = "Химия";
                    break;
                case 4:
                    type = "Одежда";
                    break;
                case 5:
                    type = "Другое";
                    break;
            }

            Console.WriteLine();
            Console.Write("Введите количество товара: ");
            capacity = Timirbaev_Utils.GetCorrectNumber(0, 10000);
        }


        public virtual void show_product()
        {
            Console.WriteLine($"Название: {name}");
            Console.WriteLine($"Артикул: {article}");
            Console.WriteLine($"Тип товара: {type}");
            Console.WriteLine($"Количество: {capacity}");
        }
    }
}
