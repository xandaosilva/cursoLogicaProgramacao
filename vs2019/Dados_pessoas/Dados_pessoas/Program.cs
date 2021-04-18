using System;
using System.Globalization;
namespace Dados_pessoas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int n, homens, mulheres;
            double maior, menor, somaAlturaMulheres,mediaAlturaMulheres;

            Console.Write("Quantas pessoas serao digitadas? ");
            n = int.Parse(Console.ReadLine());

            double[] alturas = new double[n];
            char[] generos = new char[n];

            for(int i = 0; i < n; i++)
            {
                Console.Write("Altura da " + (i + 1) + "ª pessoa: ");
                alturas[i] = double.Parse(Console.ReadLine(), CI);
                Console.Write("Genero da " + (i + 1) + "ª pessoa: ");
                generos[i] = char.Parse(Console.ReadLine());
            }

            maior = alturas[0];
            menor = alturas[0];
            for(int i = 1; i < n; i++)
            {
                if (alturas[i] > maior)
                {
                    maior = alturas[i];
                }

                if (alturas[i] < menor)
                {
                    menor = alturas[i];
                }
            }

            homens = 0;
            mulheres = 0;
            somaAlturaMulheres = 0;
            for (int i = 0; i < n; i++)
            {
                if (generos[i] == 'F')
                {
                    somaAlturaMulheres = somaAlturaMulheres + alturas[i];
                    mulheres++;
                }
                else
                {
                    homens++;
                }
            }

            mediaAlturaMulheres = somaAlturaMulheres / mulheres;

            Console.WriteLine("Menor altura = " + menor.ToString("F2", CI));
            Console.WriteLine("Maior altura = " + maior.ToString("F2", CI));
            Console.WriteLine("Media das alturas das mulheres = " + mediaAlturaMulheres.ToString("F2", CI));
            Console.WriteLine("Numero de homens = " + homens);
        }
    }
}
