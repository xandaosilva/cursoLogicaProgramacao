using System;
namespace Cada_linha
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, maior;
            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] mat = new int[n, n];
            int[] vet = new int[n];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                }
            }

            for (int i = 0; i < n; i++)
            {
                maior = mat[i, 0];
                for (int j = 0; j < n; j++)
                {
                    if(mat[i, j] > maior)
                    {
                        maior = mat[i, j];
                    }
                }
                vet[i] = maior;
            }

            Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA:");
            for(int i = 0; i < n; i++)
            {
                Console.WriteLine(vet[i]);
            }
        }
    }
}
