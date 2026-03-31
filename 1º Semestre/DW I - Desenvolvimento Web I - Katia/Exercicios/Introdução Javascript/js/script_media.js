//seleciona o botao Calcular média pelo id
//const declaração variavel
//btncalcular é a variavel
//get elment é o metodo selecionar e colocar no btncalcular
//DOM - objeto do Html - dom 
const btncalcular = document.getElementById("btnCalcular");

//evento do click
//adicionar um evento de clique ao botao calcular
btncalcular.addEventListener("click", calcularMedia);

//criar a função responsavel por calcular a média
function calcularMedia(){
    //selecionar os campos de entrada e converter os valores para numero
    const n1 = Number(document.getElementById("nota1").value);// como se fosse leia valor do input
    const n2 = Number(document.getElementById("nota2").value);// getelementbyid é o objeto do input
    const n3 = Number(document.getElementById("nota3").value);
    const media = (n1 + n2 + n3) / 3;
    
    //seleciona a div resultado
    const divResultado = document.getElementById("resultado");

    //remove o conteudo antigo antes de inserir um novo
    divResultado.innerHTML="";
    
    //cria um novo elemento <p> para exibir a media
    const paragrafo = document.createElement("p");

    //define o texto do paragrafo com a media formatada
    //alteração de um texto no html. definir dentro do nó "p". p recebe o valor do texto 
    //toFixed(2) é tipo o %.2f do c "para ter só duas casas decimais"   
    paragrafo.innerText = `Média = ${media.toFixed(2)}`;//interpolar texto com variavel

    const situacao = document.createElement("p");
    if(media >= 5){
        situacao.innerText = "Aprovado!";
    } else {
        situacao.innerText = "Reprovado!";
    }

    //adiciona o paragrafo como filho da div resultado
    divResultado.appendChild(paragrafo);
    divResultado.appendChild(situacao);

}