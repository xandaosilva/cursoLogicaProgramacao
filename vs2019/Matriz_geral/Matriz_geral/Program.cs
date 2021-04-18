﻿using System;
using System.Globalization;
namespace Matriz_geral
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int n, linha, coluna;
            double soma;

            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            double[,] mat = new double[n, n];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = double.Parse(Console.ReadLine(), CI);
                }
            }

            soma = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(mat[i, j] > 0)
                    {
                        soma = soma + mat[i, j];
                    }
                }
            }

            Console.WriteLine("\nSOMA DOS POSITIVOS: " + soma.ToString("F1", CI) + "\n");

            Console.Write("Escolha uma linha: ");
            linha = int.Parse(Console.ReadLine());
            Console.Write("LINHA ESCOLHIDA: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(mat[linha,i].ToString("F1", CI) + " ");
            }

            Console.Write("\n\nEscolha uma coluna: ");
            coluna = int.Parse(Console.ReadLine());
            Console.Write("COLUNA ESCOLHIDA: ");
            for (int i = 0; i < n; i++)
            {
                Console.Write(mat[i,coluna].ToString("F1", CI) + " ");
            }

            Console.Write("\n\nDIAGONAL PRINCIPAL: ");
            for(int i = 0; i < n; i++){
                Console.Write(mat[i,i].ToString("F1", CI) + " ");
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (mat[i, j] < 0)
                    {
                        mat[i, j] = Math.Pow(mat[i,j], 2);
                    }
                }
            }

            Console.WriteLine("\n\nMATRIZ ALTERADA:");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    Console.Write(mat[i,j].ToString("F1", CI) + " ");
                }
                Console.WriteLine();
            }
        }
    }
}
