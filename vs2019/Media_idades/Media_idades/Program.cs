using System;
using System.Globalization;
namespace Media_idades
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int idade, soma,quantidade;
            double media;

            Console.WriteLine("Digite as idades:");
            idade = int.Parse(Console.ReadLine());

            soma = 0;
            quantidade = 0;


            while (idade > 0)
            {
                soma = soma + idade;
                quantidade++;
                idade = int.Parse(Console.ReadLine());
            }

            if (quantidade == 0)
            {
                Console.WriteLine("IMPOSSIVEL CALCULAR");
            }
            else
            {
                media = (double)soma / quantidade;
                Console.WriteLine("MEDIA = " + media.ToString("F2", CI));
            }
        }
    }
}
