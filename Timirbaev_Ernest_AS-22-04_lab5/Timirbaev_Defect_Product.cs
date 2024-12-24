using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Timirbaev_Ernest_AS_22_04_lab5
{
    [Serializable]
    public class Timirbaev_Defect_Product : Timirbaev_Product
    {
        public string type_of_defect { get; set; }
        public bool isDisposal { get; set; }
        public override void create_product()
        {
            base.create_product();
            Console.WriteLine();
            Console.WriteLine("Выберите тип брака");
            Console.WriteLine("1. Деформация");
            Console.WriteLine("2. Неисправность");
            Console.WriteLine("3. Загрязнения");
            Console.WriteLine("4. Другое");
            Console.Write("Введите номер от 1 до 4: ");

            switch (Timirbaev_Utils.GetCorrectNumber(1, 4))
            {
                case 1:
                    type_of_defect = "Деформация";
                    break;
                case 2:
                    type_of_defect = "Неисправность";
                    break;
                case 3:
                    type_of_defect = "Загрязнения";
                    break;
                case 4:
                    type_of_defect = "Другое";
                    break;
            }
            Console.WriteLine();
            Console.Write("Уценить товар (0) или утилизировать (1): "); isDisposal = Convert.ToBoolean(Timirbaev_Utils.GetCorrectNumber(0, 1));
        }
        public override void show_product()
        {
            base.show_product();
            Console.WriteLine($"Тип брака: {type_of_defect}");
            if (isDisposal) Console.WriteLine("Заключение: утилизировать");
            else Console.WriteLine("Заключение: уценить");
        }
    }
}
