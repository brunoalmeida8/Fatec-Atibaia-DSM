using Projeto2;

Produto prod = new Produto();

Console.WriteLine("Informe o código");
prod.Codigo = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Informe o nome do produto");
prod.Nome = Console.ReadLine();
Console.WriteLine("Informe a categoria do produto");
prod.Categoria = Console.ReadLine();
Console.WriteLine("Informe o preço do produto");
prod.Preco = Convert.ToDouble(Console.ReadLine());

Console.WriteLine("\n\nValores do produto");
Console.WriteLine($"\nCódigo: {prod.Codigo}\nNome: {prod.Nome}\nCategoria: {prod.Categoria}" +
    $"\nPreço: {prod.Preco}");

Eletrodomestico liquidificador = new Eletrodomestico();

Console.WriteLine("Informe o código");
liquidificador.Codigo = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Informe o nome do liquidificador");
liquidificador.Nome = Console.ReadLine();
Console.WriteLine("Informe a categoria do liquidificador");
liquidificador.Categoria = Console.ReadLine();
Console.WriteLine("Informe o preço do liquidificador");
liquidificador.Preco = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Informe a tensão");
liquidificador.Tensao = (Console.ReadLine());
Console.WriteLine("Informe o modelo");
liquidificador.Modelo = (Console.ReadLine());

Console.WriteLine("\n\nValores do liquidificador");
Console.WriteLine($"\nCódigo: {liquidificador.Codigo}\nNome: {liquidificador.Nome}" +
    $"\nCategoria: {liquidificador.Categoria}\nPreço: {liquidificador.Preco}" +
    $"\nTensão: {liquidificador.Tensao}\nModelo: {liquidificador.Modelo}");