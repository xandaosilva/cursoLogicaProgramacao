﻿using System;
using System.Globalization;
namespace Divisao
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, numerador, denominador;
            double divisao;

            Console.Write("Quantos casos voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                Console.Write("Entre com o numerador: ");
                numerador = int.Parse(Console.ReadLine());
                Console.Write("Entre com o denominador: ");
                denominador = int.Parse(Console.ReadLine());

                if(denominador == 0)
                {
                    Console.WriteLine("DIVISAO IMPOSSIVEL");
                }
                else
                {
                    divisao = (double) numerador/denominador;
                    Console.WriteLine("DIVISAO = " + divisao.ToString("F2", CI));
                }
            }
        }
    }
}
