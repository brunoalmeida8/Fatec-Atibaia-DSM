// See https://aka.ms/new-console-template for more information


using Projeto1;

Carro fusca = new Carro();
fusca.cadastrar("Fusca", "VolksWagen", "azul", 1978);
Console.WriteLine(fusca.mostrar());

Pessoa alguem = new Pessoa("bruno almeida", "rua 1, nº 10", "meuemail@hotmail.com",
    new DateTime(2000,10,25, 00,00,00));

Console.WriteLine("\n\n" + alguem.mostrar());