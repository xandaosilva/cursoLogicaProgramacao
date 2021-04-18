using System;

namespace Diagonal_negativos
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, negativos;

            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] mat = new int[n, n];

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "] :");
                    mat[i, j] = int.Parse(Console.ReadLine());
                }
            }

            Console.WriteLine("DIAGONAL PRINCIPAL:");
            for (int i = 0; i < n; i++)
            {
                Console.Write(mat[i,i] + " ");
            }

            negativos = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(mat[i, j] < 0)
                    {
                        negativos++;
                    }
                }
            }

            Console.WriteLine();
            Console.WriteLine("QUANTIDADE DE NEGATIVOS = " + negativos);
        }
    }
}
