function salvar(){
    const dados = {
        "nome": document.getElementById("nome").value,
        "idade": document.getElementById("idade").value,
        "altura": document.getElementById("altura").value
    };
    // convertendo de objeto para JSON (texto)
    const valor = JSON.stringify(dados);
    // salvando na localStorage
    localStorage.setItem("pessoa", valor); // set para colocar o valor na localstorage - relacionado ao strigfy. o oposto é o get.
}