const btnCalcular = document.getElementById("btnCalcular");
const btnLimpar = document.getElementById("btnLimpar");
const resultado = document.getElementById("resultado");
btnCalcular.addEventListener("click", CalcularImc);
btnLimpar.addEventListener("click", Limpar);

function CalcularImc(){
    const peso = Number(document.getElementById("peso").value);
    const altura = Number(document.getElementById("altura").value);
    const imc = peso / (altura * altura); 
    const paragrafo_imc = document.createElement("p");
    resultado.innerHTML="";
    paragrafo_imc.innerText = `IMC = ${imc.toFixed(2)}`;
    resultado.appendChild(paragrafo_imc); //inserir o resultado dentro da div
    classificarImc(imc);
    }

    function classificarImc(valor){
        const paragrafo_classificacao = document.createElement("p");
        if(valor < 18.5) paragrafo_classificacao.innerText="Abaixo do peso!";
        if(valor >= 18.5 && valor < 25) paragrafo_classificacao.innerText="Peso normal!";
        if(valor > 25) paragrafo_classificacao.innerText="Sobrepeso!";
        resultado.appendChild(paragrafo_classificacao); 
    }
    function Limpar(){
        resultado.innerHTML="";
        peso.value="";
        altura.value="";

    }
