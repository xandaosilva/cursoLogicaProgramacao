using System;
using System.Globalization;
namespace Media_ponderada
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int n;
            double a, b, c, media;

            Console.Write("Quantos casos voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for(int i = 0; i < n; i++) 
            {
                media = 0;
                Console.WriteLine("Digite tres numeros:");
                a = double.Parse(Console.ReadLine(), CI);
                b = double.Parse(Console.ReadLine(), CI);
                c = double.Parse(Console.ReadLine(), CI);

                media = ((a * 2) + (b * 3) + (c * 5))/10;

                Console.WriteLine("MEDIA = " + media.ToString("F1", CI));
            }

        }
    }
}
