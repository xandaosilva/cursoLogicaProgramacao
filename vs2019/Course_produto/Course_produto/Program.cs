using System;
using System.Globalization;
namespace Course_produto
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            int adicionar, remover;

            Console.WriteLine("Entre os dados do produto:");
            Console.Write("Nome: ");
            string nome = Console.ReadLine();
            Console.Write("Preco: ");
            double preco = double.Parse(Console.ReadLine(), CI);
            Console.Write("Quantidade: ");
            int quantidade = int.Parse(Console.ReadLine());

            Produto p = new Produto(nome, preco, quantidade);

            Console.WriteLine("\nDados do Produto : " + p.ToString());
            Console.Write("\nDigite o numero de produtos a ser adicionado ao estoque: ");
            adicionar = int.Parse(Console.ReadLine());
            p.AdicionarProdutos(adicionar);
            Console.WriteLine("\nDados atualizados : " + p.ToString());

            Console.Write("\nDigite o numero de produtos a ser removido ao estoque: ");
            remover = int.Parse(Console.ReadLine());
            p.RemoverProdutos(remover);
            Console.WriteLine("\nDados atualizados : " + p.ToString());
        }
    }
}
