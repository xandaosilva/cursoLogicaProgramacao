using System;
using System.Globalization;
namespace Alturas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, quantidadeAbaixo16;
            double somaAlturas, alturaMedia, percentualMenores;

            Console.Write("Quantas pessoas serao digitadas? ");
            n = int.Parse(Console.ReadLine());

            string[] nomes = new string[n];
            int[] idades = new int[n];
            double[] alturas = new double[n];


            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("Dados da " + (i + 1 )+ "ª  pessoa:");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idades[i] = int.Parse(Console.ReadLine());
                Console.Write("Altura: ");
                alturas[i] = double.Parse(Console.ReadLine(), CI);
            }

            quantidadeAbaixo16 = 0;
            somaAlturas = 0;
            for(int i = 0; i < n; i++)
            {
                if (idades[i] < 16)
                {
                    quantidadeAbaixo16++;
                }
                somaAlturas = somaAlturas + alturas[i];
            }

            alturaMedia = somaAlturas/n;
            percentualMenores = ((double) quantidadeAbaixo16 / n) * 100.0;

            Console.WriteLine();
            Console.WriteLine("Altura média: " + alturaMedia.ToString("F2", CI));
            Console.WriteLine("Pessoas com menos de 16 anos: " + percentualMenores.ToString("F1", CI) + "%");
            for (int i = 0; i < n; i++)
            {
                if (idades[i] < 16)
                {
                    Console.WriteLine(nomes[i]);
                }
            }
        }
    }
}
