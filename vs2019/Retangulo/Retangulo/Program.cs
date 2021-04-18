using System;
using System.Globalization;

namespace Retangulo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            double baseRet, altura, area, perimetro, diagonal;
            
            Console.Write("Base do retangulo: ");
            baseRet = double.Parse(Console.ReadLine(), CI);
            Console.Write("Altura do retangulo:");
            altura = double.Parse(Console.ReadLine(), CI);

            area = baseRet * altura;
            perimetro = 2 * (baseRet + altura);
            diagonal = Math.Sqrt(Math.Pow(baseRet, 2) + Math.Pow(altura, 2));

            Console.WriteLine("AREA = " + area.ToString("F4",CI));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CI));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CI));
        }
    }
}
