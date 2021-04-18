using System;
using System.Globalization;
namespace Media_pares
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int n, quantidadePares;
            double soma, mediaPares;

            Console.Write("Quantos elementos vai ter o vetor? ");
            n = int.Parse(Console.ReadLine());

            int[] vet = new int[n];

            for(int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
            }

            quantidadePares = 0;
            soma = 0;
            for(int i = 0; i < n; i++)
            {
                if (vet[i] % 2 == 0)
                {
                    soma = soma + vet[i];
                    quantidadePares++;
                }
            }

            if (quantidadePares == 0)
            {
                Console.WriteLine("NENHUM NUMERO PAR");
            }
            else
            {
                mediaPares = soma / quantidadePares;
                Console.WriteLine("MEDIA DOS PARES = " + mediaPares.ToString("F1", CI));
            }
        }
    }
}
