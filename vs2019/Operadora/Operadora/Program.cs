using System;
using System.Globalization;
namespace Operadora
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double valorPagar;
            int minutos;

            Console.Write("Digite a quantidade de minutos: ");
            minutos = int.Parse(Console.ReadLine(), CI);

            if (minutos <= 100)
            {
                valorPagar = 50;
            }
            else
            {
                valorPagar = 50 + ((minutos - 100) * 2);
            }

            Console.WriteLine("Valor a pagar: R$" + valorPagar.ToString("F2", CI));
        }
    }
}
