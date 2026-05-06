using System;
using System.Text.RegularExpressions;
using ClassLibrary1;
class Program
{
    static void Main()
    {
        Algerbras[] objects = new Algerbras[2];

        for (int i = 0; i < 2; i++)
        {
            objects[i] = new Algerbras();
            Console.WriteLine("Введіть a, b, c, d:");
            double a = double.Parse(Console.ReadLine());
            double b = double.Parse(Console.ReadLine());
            double c = double.Parse(Console.ReadLine());
            double d = double.Parse(Console.ReadLine());
            objects[i].SetValues(a, b, c, d);
        }

        for (int i = 0; i < 2; i++)
        {
            try
            {
                Console.WriteLine("Результат: " + objects[i].Result());
            }
            catch (Exception ex)
            {
                Console.WriteLine("Помилка: " + ex.Message);
            }
        }
    }
}