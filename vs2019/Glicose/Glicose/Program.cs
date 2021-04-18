using System;
using System.Globalization;
namespace Glicose
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            double glicose;
            string classificacao;

            Console.Write("Digite a medida da glicose: ");
            glicose = double.Parse(Console.ReadLine(), CI);

            if (glicose <= 100)
            {
                classificacao = "normal";
            }
            else if (glicose <= 140)
            {
                classificacao = "elevado";
            }
            else
            {
                classificacao = "diabetes";
            }

            Console.WriteLine("Classificacao: " + classificacao);
        }
    }
}
