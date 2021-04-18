using System;
using System.Globalization;
namespace Troco_verificado
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            double precoUnitario, dinheiro, troco, valorTotal;
            int quantidade;

            Console.Write("Preço unitário do produto: ");
            precoUnitario = double.Parse(Console.ReadLine(), CI);
            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            dinheiro = double.Parse(Console.ReadLine(), CI);

            valorTotal = precoUnitario * quantidade;

            if (dinheiro > valorTotal)
            {
                troco = dinheiro - valorTotal;
                Console.WriteLine("TROCO = " + troco.ToString("F2", CI));
            }
            else
            {
                troco = valorTotal - dinheiro;
                Console.WriteLine("DINHEIRO INSUFICIENTE. FALTAM " + troco.ToString("F2", CI) + " REAIS");
            }
        }
    }
}
