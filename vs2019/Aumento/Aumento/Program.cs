﻿using System;
using System.Globalization;
namespace Aumento
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            double salario, aumento, novoSalario;
            int porcentagem;

            Console.Write("Digite o salario da pessoa: ");
            salario = double.Parse(Console.ReadLine(), CI);

            if (salario <= 1000.00)
            {
                porcentagem = 20;
            }
            else if (salario <= 3000.00)
            {
                porcentagem = 15;
            }
            else if (salario <= 8000.00)
            {
                porcentagem = 10;
            }
            else
            {
                porcentagem = 5;
            }

            aumento = salario * porcentagem / 100.0;
            novoSalario = salario + aumento;

            Console.WriteLine("Novo salario = R$" + novoSalario.ToString("F2", CI));
            Console.WriteLine("Aumento = R$" + aumento.ToString("F2", CI));
            Console.WriteLine("Porcentagem = " + porcentagem + "%");
        }
    }
}
