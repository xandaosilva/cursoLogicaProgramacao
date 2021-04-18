using System;
using System.Globalization;
namespace Lanchonete
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double valorPagar = 0.00;
            int codigo, quantidade;

            Console.Write("Codigo do produto comprado: ");
            codigo = int.Parse(Console.ReadLine());
            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());

            switch (codigo)
            {
                case 1:
                    valorPagar = quantidade * 5.00;
                    break;
                case 2:
                    valorPagar = quantidade * 3.50;
                    break;
                case 3:
                    valorPagar = quantidade * 4.80;
                    break;
                case 4:
                    valorPagar = quantidade * 8.90;
                    break;
                case 5:
                    valorPagar = quantidade * 7.32;
                    break;
            }

            Console.WriteLine("Valor a pagar: R$" + valorPagar.ToString("F2", CI));
        }
    }
}
