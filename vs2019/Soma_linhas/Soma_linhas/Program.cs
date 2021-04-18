using System;
using System.Globalization;
namespace Soma_linhas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int m, n;
            double somaLinha;

            Console.Write("Qual a quantidade de linhas da matriz? ");
            m = int.Parse(Console.ReadLine());
            Console.Write("Qual a quantidade de colunas da matriz? ");
            n = int.Parse(Console.ReadLine());

            double[] vet = new double[m];
            double[,] mat = new double[m, n];

            for (int i = 0; i < m; i++)
            {
                Console.WriteLine("Digite os elementos da " + (i + 1) + "ª linha: ");
                for(int j = 0; j < n; j++)
                {
                    mat[i, j] = double.Parse(Console.ReadLine(), CI);
                }
            }

            for (int i = 0; i < m; i++)
            {
                somaLinha = 0;
                for (int j = 0; j < n; j++)
                {
                    somaLinha = somaLinha + mat[i, j];
                }
                vet[i] = somaLinha;
            }

            Console.WriteLine("VETOR GERADO:");
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine(vet[i].ToString("F1", CI));
            }
        }
    }
}
