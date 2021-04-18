using System;
using System.Globalization;
namespace Pagamento
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            string nome;
            double valorPorHoras, pagamento;
            int horas;

            Console.Write("Nome: ");
            nome = Console.ReadLine();
            Console.Write("Valor por hora: ");
            valorPorHoras = double.Parse(Console.ReadLine(), CI);
            Console.Write("Horas trabalhadas: ");
            horas = int.Parse(Console.ReadLine());

            pagamento = valorPorHoras * horas;

            Console.WriteLine("O pagamento para " + nome + " deve ser " + pagamento.ToString("F2", CI));
        }
    }
}
