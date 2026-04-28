function converter(){
    let n = parseInt(document.getElementById("numero").value);
    const resultDiv = document.getElementById("resultado");
    if (n < 1 || n > 255) {
        resultDiv.innerHTML = "<p>Digite um numero entre 1 e 255</p>";//innerhtml é para o conteudo aparecer dentro da div
        return;
    }
    let binario = [];
    let i = 0;
    while (n > 1) {
        binario[i] = n % 2;
        n = Math.floor (n / 2);// resultado inteiro = desconsidera o q tiver depois da virgula; floor arredonda para baixo
        i = i + 1;
    }
    binario[i] = n;
    let res="";//ele concatena e nao soma os numeros ja que agora sao tratados como texto
    while(i >= 0) {
        res += binario[i];//concatenar 
        i = i -1;
    }
    resultDiv.innerHTML = `<p>${res}</p>`
}