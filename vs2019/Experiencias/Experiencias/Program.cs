using System;
using System.Globalization;
namespace Experiencias
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int n, quantidade, coelhos , ratos, sapos, total;
            double pCoelhos, pRatos, pSapos;
            char tipo;

            Console.Write("Quantos casos de teste serao digitados? ");
            n = int.Parse(Console.ReadLine());

            coelhos = 0;
            ratos = 0;
            sapos = 0;
            for(int i = 0; i < n; i++)
            {
                Console.Write("Quantidade de cobaias: ");
                quantidade = int.Parse(Console.ReadLine());
                Console.Write("Tipo de cobaia: ");
                tipo = char.Parse(Console.ReadLine());

                if (tipo == 'C')
                {
                    coelhos = coelhos + quantidade;
                }
                else if (tipo == 'R')
                {
                    ratos = ratos + quantidade;
                }
                else
                {
                    sapos = sapos + quantidade;
                }
            }

            total = coelhos + ratos + sapos;
            pCoelhos = ((double) coelhos/total) * 100;
            pRatos = ((double) ratos/total) * 100;
            pSapos = ((double) sapos/total) * 100;

            Console.WriteLine();
            Console.WriteLine("RELATORIO FINAL:");
            Console.WriteLine("Total: " + total + " cobaias");
            Console.WriteLine("Total de coelhos: " + coelhos);
            Console.WriteLine("Total de ratos: " + ratos);
            Console.WriteLine("Total de sapos: " + sapos);
            Console.WriteLine("Percentual de coelhos: " + pCoelhos.ToString("F2", CI));
            Console.WriteLine("Percentual de ratos: " + pRatos.ToString("F2", CI));
            Console.WriteLine("Percentual de sapos: " + pSapos.ToString("F2", CI));
        }
    }
}
