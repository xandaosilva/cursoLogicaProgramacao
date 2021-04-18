using System;

namespace Soma_vetores
{
    class Program
    {
        static void Main(string[] args)
        {
            int n;
            
            Console.Write("Quantos valores vai ter cada vetor? ");
            n = int.Parse(Console.ReadLine());

            int[] vetA = new int[n], vetB = new int[n], vetC = new int[n];

            Console.WriteLine("Digite os valores do vetor A:");
            for(int i = 0; i < n; i++)
            {
                vetA[i] = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("Digite os valores do vetor B:");
            for (int i = 0; i < n; i++)
            {
                vetB[i] = int.Parse(Console.ReadLine());
            }

            for (int i = 0; i < n; i++)
            {
                vetC[i] = vetA[i] + vetB[i];
            }

            Console.WriteLine("VETOR RESULTANTE:");
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine(vetC[i]);
            }
        }
    }
}
