using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace Timirbaev_Ernest_AS_22_04_lab5
{
    internal class Timirbaev_Utils
    {

        private static bool TryConvert<T>(string input, out T res) where T : IComparable<T>
        {
            try
            {
                res = (T)Convert.ChangeType(input, typeof(T));
                return true;
            }
            catch
            {
                res = default;
                return false;
            }
        }
        public static bool ValidityEnter<T>(ref T value, T low, T high) where T : IComparable<T>
        {
            string input = Console.ReadLine();

            bool isValid = TryConvert(input, out T parsedValue);

            if (isValid && parsedValue.CompareTo(low) >= 0 && parsedValue.CompareTo(high) <= 0)
            {
                value = parsedValue;
                return true;
            }

            return false;
        }
        public static T GetCorrectNumber<T>(T low, T high) where T : IComparable<T>
        {
            T x = default;
            while (!ValidityEnter(ref x, low, high))
            {
                Console.Write($"Введите число в диапазоне [{low}..{high}]: ");
            }
            return x;
        }
    }
}
