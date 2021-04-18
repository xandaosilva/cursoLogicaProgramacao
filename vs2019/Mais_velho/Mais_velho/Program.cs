using System;

namespace Mais_velho
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, maisVelho, posicao;

            Console.Write("Quantas pessoas voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            int[] idades = new int[n];
            string[] nomes = new string[n];

            for(int i = 0; i < n; i++)
            {
                Console.WriteLine("Dados da " + (i + 1) + "ª pessoa:");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idades[i] = int.Parse(Console.ReadLine());
            }

            maisVelho = idades[0];
            posicao = 0;
            for (int i = 1; i < n; i++)
            {
                if(idades[i] > maisVelho)
                {
                    maisVelho = idades[i];
                    posicao = i;
                }
            }

            Console.WriteLine("PESSOA MAIS VELHA: " + nomes[posicao]);
        }
    }
}
