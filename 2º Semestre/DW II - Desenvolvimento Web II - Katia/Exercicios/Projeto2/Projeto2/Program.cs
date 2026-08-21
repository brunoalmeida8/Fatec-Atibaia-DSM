// See https://aka.ms/new-console-template for more information
using Projeto2;
using System.Net.Http.Headers;

Console.WriteLine("Hello, World!");
Produto prod = new Produto();

Console.WriteLine("Informe o codigo do produto");
prod.Codigo = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Informe o nome do produto");
prod.Nome = Console.ReadLine();
Console.WriteLine("Informe a categoria do produto");
prod.Categoria = Console.ReadLine();
Console.WriteLine("Informe o preço do produto");
prod.Preco = Convert.ToDouble(Console.ReadLine());





Eletrodomestico liquidificador  = new Eletrodomestico();

Console.WriteLine("Informe o codigo do produto");
liquidificador.Codigo = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Informe o nome do produto");
pro duto.Nome = Console.ReadLine();
Console.WriteLine("Informe a categoria do produto");
produto.Categoria = Console.ReadLine();
Console.WriteLine("Informe o preço do produto");
produto.Preco = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Informe a tensão do produto");
produto.Tensao = (Console.ReadLine());
Console.WriteLine("Informe o modelo do produto");
produto.Modelo = (Console.ReadLine());


Console.WriteLine("\n\nValores do produto");
Console.WriteLine($"\nCodigo : {produto.Codigo}\nNome: {produto.Nome}" +
    $"\nCategoria: {produto.Categoria}\nPreço: {produto.Preco}" +
    $"\nTensão: {produto.Tensao}\nModelo{produto.Modelo}"


