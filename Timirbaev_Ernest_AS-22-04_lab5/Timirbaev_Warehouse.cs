using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Timirbaev_Ernest_AS_22_04_lab5
{
    [Serializable]
    [XmlType("Timirbaev_Warehouse")]
    public class Timirbaev_Warehouse
    {
        List<Timirbaev_Product> products = new List<Timirbaev_Product>();
        //public Timirbaev_Warehouse() { }
        public void AddProduct()
        {
            Timirbaev_Product product = new Timirbaev_Product();
            product.create_product();
            products.Add(product);
            Console.WriteLine();
        }

        public void AddDefectProduct()
        {
            Timirbaev_Defect_Product defect_product = new Timirbaev_Defect_Product();
            defect_product.create_product();
            products.Add(defect_product);
            Console.WriteLine();
        }


        public void ViewProducts()
        {
            Console.WriteLine();
            if (products.Count > 0)
            {
                foreach (var product in products)
                {
                    product.show_product();
                    Console.WriteLine();
                }
            }
            else
            {
                Console.WriteLine("Товаров нет");
                Console.WriteLine();
            }
        }


        public void DeleteProducts()
        {
            products.Clear();
            Console.WriteLine("Товары удалены");
            Console.WriteLine();
        }


        public void Save()
        {
            Console.WriteLine();
            if (products.Count > 0)
            {
                try
                {
                    Console.Write("Введите название файла: "); string fileName = Console.ReadLine() + ".xml";
                    XmlSerializer serializer = new XmlSerializer(typeof(List<Timirbaev_Product>));

                    using (FileStream file = new FileStream(fileName, FileMode.Create))
                    {
                        serializer.Serialize(file, products);
                    }

                    Console.WriteLine("Cохранено");
                    Console.WriteLine();
                }
                catch
                {
                    Console.WriteLine("Ошибка сохранения!");
                    Console.WriteLine();
                }
            }
            else
            {
                Console.WriteLine("Товаров нет");
                Console.WriteLine();
            }
        }


        public void Dowloand()
        {
            Console.WriteLine();
            try
            {
                Console.Write("Введите название файла: "); string fileName = Console.ReadLine() + ".xml";
                XmlSerializer serializer = new XmlSerializer(typeof(List<Timirbaev_Product>));

                using (FileStream file = new FileStream(fileName, FileMode.Open))
                {
                    products = (List<Timirbaev_Product>)serializer.Deserialize(file);
                }

                Console.WriteLine("Загружено");
                Console.WriteLine();
            }
            catch
            {
                Console.WriteLine("Ошибка загрузки!");
                Console.WriteLine();
            }
        }
    }
}