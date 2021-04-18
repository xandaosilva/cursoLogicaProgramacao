using System;

namespace Numeros_pares
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, quantidadePares;

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            int[] vet = new int[n];

            for(int i = 0; i < n; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
            }

            quantidadePares = 0;
            Console.WriteLine();
            Console.WriteLine("NUMEROS PARES: ");
            for(int i = 0; i < n; i++)
            {
                if (vet[i] % 2 == 0)
                {
                    Console.Write(vet[i] + " ");
                    quantidadePares++;
                }
            }

            Console.WriteLine();
            Console.WriteLine();
            Console.WriteLine("QUANTIDADE DE PARES = " + quantidadePares);
        }
    }
}
