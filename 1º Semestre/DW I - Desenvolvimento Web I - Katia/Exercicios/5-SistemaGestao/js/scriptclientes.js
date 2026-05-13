let cpf = null;
document.addEventListener("DOMContentLoaded", () => {
    carregarClientes();
    document.getElementById("cadastroForm")
        .addEventListener("submit", salvarOuAtualizarCliente);

});//executa apos carregar toda a pagina

function salvarOuAtualizarCliente(event){
    event.preventDeFault();
    let clientes = JSON.parse(localStorage.getItem("clientes")) || []; //vai buscar la no local storage e se nao existir clientes ele vai criar vazio
    const valor = {//esse objeto "valor" vai carregar os valores do campos
        cpf: document.getElementById("cpf").value,
        nome: document.getElementById("nome").value,
        endereco: document.getElementById("Endereco").value,
        telefone: document.getElementById("telefone").value
        
    }
    if(cpf) {
        clientes = clientes.map(c =>
        c.cpf === cpf ? valor :clientes
        );//vai caregar os valores do campo correspondente ao cpf
        cpf=null;
        document.querySelector("button[type'submit']").innerText = "Salvar"//alterar o texto do botao para salvar
        document.getElementById("cpf").disable=false;
    }else{
        if(clientes.some(c => c.cpf === valor.cpf)){
            alert("CPF ja cadastrado!");
            return;
        }//se nao estiver cadastrado
        clientes.push(valor);//ele vai escrever na lista
    }
    localStorage.setItem("clientes", JSON. stringify(clientes));//cadastra na local storage
    document.getElementById("cadastroForm").requestFullscreen();
    atualizarTabela();
}

function carregarClientes(){
    const clientes = JSON.parse(localStorage.getItem("clientes")) || [];
    clientes.forEach(adicionarClienteTabela);
}
function adicionarClienteTabela(cliente){
    const tabela = document.querySelector("#clientesTable tbody");//vai aplicar a mesma classe de css ...
    const linha = tabela.insertRow();
    linha.innerHTML = `
        <td>${cliente.cpf}</td>
        <td>${cliente.nome}</td>
        <td>${cliente.endereco}</td>
        <td>${cliente.endereco}</td>
        <td>${cliente.telefone}</td>
        <td><button onclick = "editarCliente('${cliente.cpf}')">Editar</td>
        <td><button onclick = "removerCliente('${cliente.cpf}')">Excluir</td>
    `;
}
function editarCliente(cpf1){
    const clientes = JSON.parse(localStorage.getItem("clientes")) || [];
    const cliente = clientes.find(c => c.cpf === cpf1);//vai procurar dentro da lista o cpf que ta vindo de... dentro da lista clientes
    document.getElementById("cpf").value = cliente.cpf;
    document.getElementById("nome").value = cliente.nome;
    document.getElementById("Endereco").value = cliente.endereco;
    document.getElementById("telefone").value = cliente.telefone;
    document.getElementById("cpf").disable=true;//nao deixa editar
    document.querySelector("button[type='submit']").innerHTML="Atualizar";//muda o botao cadastrar para atualizar
    cpf = cpf1;
}

function removerCliente(cpf){
    let clientes = JSON.parse(localStorage.getItem("clientes")) || [];
    clientes = clientes.filter(c => c.cpf != cpf);
    localStorage.setItem("clientes,", JSON.stringify(clientes));
    atualizarTabela();
}
function atualizarTabela(){
    const tbody = document.querySelector("#clientesTable tbody");
    tbody.innerHTML = "";
    carregarClientes();

}