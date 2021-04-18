using System;
using System.Globalization;
namespace Coordenadas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            double x, y;
            String coordenada;

            Console.Write("Valor de X: ");
            x = double.Parse(Console.ReadLine(), CI);
            Console.Write("Valor de Y: ");
            y = double.Parse(Console.ReadLine(), CI);

            coordenada = retornarCoordenada(x, y);

            Console.WriteLine(coordenada);
        }

        public static String retornarCoordenada(double x, double y)
        {
            String coordenada;

            if (x == 0 && y == 0)
            {
                coordenada = "Origem";
            }
            else if (x == 0)
            {
                coordenada = "Eixo Y";
            }
            else if (y == 0)
            {
                coordenada = "Eixo X";
            }
            else if (x > 0 && y > 0)
            {
                coordenada = "Q1";
            }
            else if (x < 0 && y > 0)
            {
                coordenada = "Q2";
            }
            else if (x < 0 && y < 0)
            {
                coordenada = "Q3";
            }
            else
            {
                coordenada = "Q4";
            }

            return coordenada;
        }
    }
}
