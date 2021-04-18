using System;
using System.Globalization;
namespace Dardo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            double distA, distB, distC, maior;

            Console.WriteLine("Digite as tres distancias:");
            distA = double.Parse(Console.ReadLine(), CI);
            distB = double.Parse(Console.ReadLine(), CI);
            distC = double.Parse(Console.ReadLine(), CI);

            if (distA > distB && distA > distC)
            {
                maior = distA;
            }
            else if (distB > distC)
            {
                maior = distB;
            }
            else
            {
                maior = distC;
            }

            Console.WriteLine("MAIOR DISTANCIA = " + maior.ToString("F2", CI));
        }
    }
}
