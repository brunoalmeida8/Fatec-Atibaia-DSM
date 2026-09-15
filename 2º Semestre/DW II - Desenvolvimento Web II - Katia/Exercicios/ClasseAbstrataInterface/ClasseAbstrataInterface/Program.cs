// See https://aka.ms/new-console-template for more information
using ClasseAbstrataInterface;

Console.WriteLine("Hello, World!");

Triangulo forma = new Triangulo();

Console.WriteLine("Informe a altura do triangulo");
forma.Lado = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Informe a altura do triangulo");
forma.Largura = Convert.ToDouble(Console.ReadLine());
forma.calcularArea();

Console.WriteLine("\n\n");
Quadrado quadradinho = new Quadrado();
Console.WriteLine("Informe o lado do quadrado");
quadradinho.Lado = Convert.ToDouble(Console.ReadLine());
quadradinho.calcularArea();

Console.WriteLine("\n\n");
Circulo circulo = new Circulo();
Console.WriteLine("Informe o raio do circulo");
circulo.Lado = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("Escreva sobre o circulo");
string dados = Console.ReadLine();
circulo.cadastrarDados(dados);
circulo.calcularArea();
Console.WriteLine(circulo.calcularPerimetro());
