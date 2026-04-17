function mostrarTabuada(){
    event.preventDefault(); // evitar que traga o padrao dele
    const num = document.getElementById("numero").value; // o valor é constante não muda no decorrer do código, ela somente acrescenta um nó
    const resultadoDiv = document.getElementById("resultado");
    resultadoDiv.innerHTML="";
    if(num ===""){
        resultadoDiv.innerText = "<p>Digite um número.</p>";
        return; // para aqui e retorna ao HTML
    }
    let tabuada = "<ul>" // declaração de variável que pode alterar os valores no decorrer do código. ul - lista
    for (let i = 0; i <= 10; i++){ // i = i + 1 (contador)
        tabuada += `<li>${num} x ${i} = ${num * i}</li>`; // faz o incremento com o conteúdo após o = . A crase junto com o $ é para interpolar o conteúdo, número, texto, número etc
    }
    tabuada += "</ul>";
    resultadoDiv.innerHTML = tabuada;
}