using System;

namespace Tabuada
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, resposta;

            Console.Write("Deseja a tabuada para qual valor? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= 10; i++)
            {
                resposta = n * i;
                Console.WriteLine(n + " X " + i + " = " + resposta);
            }
        }
    }
}
