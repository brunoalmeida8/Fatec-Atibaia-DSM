//seleciona o botão Calcular média pelo id
const btncalcular = document.getElementById("btnCalcular"); // const = declaracao de uma variavel getelemntbyid - seleciona o botao calcular
//adicionar um evento de clique ao botão calcular
btncalcular.addEventListener("click", calcularMedia);
//função responsável por calcular a média
function calcularMedia(){
// selecionar os campos de entrada e converte os valores para número   
const n1 = Number(document.getElementById("nota1").value); // declare numérico. "Leia nota 1" - getElementbyid / .value (valor do imput)
const n2 = Number(document.getElementById("nota2").value); 
const n3 = Number(document.getElementById("nota3").value); 
const media = (n1 + n2 + n3) / 3;
// seleciona a div resultado
const divResultado = document.getElementById("resultado");
//remove o contéudo antigo antes de inserir o novo
divResultado.innerHTML="";
//cria um novo elemento <p> para exibir a média
const paragrafo = document.createElement("p");
// define o texto do parágrafo com a média formatada
paragrafo.innerText = `Média = ${media.toFixed(2)}` // utiliza crase O que está dentro do $ é uma variável. O valor que quero fixar (2), deixa duas casas decimais. 
const situacao = document.createElement("p");
if(media > 5 ) {
    situacao.innerText = "Aprovado!";
} else {
    situacao.innerText = "Reprovado!";
}
//adiviona o parágrafo como filho da div resultado
divResultado.appendChild(paragrafo);
divResultado.appendChild(situacao);
}