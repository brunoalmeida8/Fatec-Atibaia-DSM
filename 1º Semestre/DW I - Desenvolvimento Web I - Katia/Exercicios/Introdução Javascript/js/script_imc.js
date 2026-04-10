//se deixar aqui ele le 0 pq ainda ta vazio ... ai o imc da NaN - vazio
//const peso = Number(document.getElementById("peso").value);
//const altura = Number(document.getElementById("altura").value);
const btnCalcular = document.getElementById("btnCalcular");
const btnLimpar = document.getElementById("btnLimpar");
const resultado = document.getElementById("resultado");
btnCalcular.addEventListener("click", CalcularIMC);
btnLimpar.addEventListener("click", Limpar);

function CalcularIMC(){
    const peso = Number(document.getElementById("peso").value);
    const altura = Number(document.getElementById("altura").value);
    const imc = peso / (altura * altura);
    const paragrafo_imc = document.createElement("p");
    resultado.innerHTML="";
    paragrafo_imc.innerText = `IMC = ${imc.toFixed(2)}`//innerText coloca o conteudo la dentro
    resultado.appendChild(paragrafo_imc);//inserir o paragrafo_imc dentro da div resultado
    classificarImc(imc);
}

function classificarImc(valor){
    const paragrafo_classificacao = document.createElement("p");
    //if(valor <=0 ) paragrafo_classificacao.innerText = "Valor inválido"
    if(valor < 18.5) paragrafo_classificacao.innerText="Abaixo do peso!";
    if(valor >= 18.5 && valor < 25) paragrafo_classificacao.innerText="Peso normal!";
    if(valor >= 25) paragrafo_classificacao.innerText="Sobrepeso!";
    resultado.appendChild(paragrafo_classificacao);
}

function Limpar() {
    resultado.innerHTML="";//apaga o resultado do imc (em baixo)
    const inputpeso=document.getElementById("peso");
    inputpeso.value="";//apaga o valor digitado la no input do peso
    const inputaltura=document.getElementById("altura");
    inputaltura.value="";
}
