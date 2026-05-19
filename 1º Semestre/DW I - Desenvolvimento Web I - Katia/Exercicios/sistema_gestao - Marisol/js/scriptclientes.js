let cpf = null;
document.addEventListener("DOMContentLoaded", () => { // Dom executa após carregar toda página
    carregarClientes();
    document.getElementById("cadastroForm")
        .addEventListener("submit", salvarOuAtualizarCliente);
});

function salvarOuAtualizarCliente(event){
    event.preventDefault(); // evita o comportamento de recarregar a página.
    let clientes = JSON.parse(localStorage.getItem(clientes)) || [];
    const valor = {
        cpf: document.getElementById("cpf").value,
        nome: document.getElementById("nome").value,
        endereco: document.getElementById("endereco").value,
        telefone: document.getElementById("telefone").value,
    };
    if(cpf){
        clientes = clientes.map(c => c.cpf === cpf ? valor : clientes
        );
        cpf=null;
        document.querySelector("button[type='submit']").innerText = "salvar";
        document.getElementById("cpf").disable=false;
    } else {
        if(clientes.some(c => c.cpf === valor.cpf)){
            alert("CPF já cadastrado!");
            return;
        }
        clientes.push(valor);
        
    }
    localStorage.setItem("clientes", JSON.stringify(clientes));
        document.getElementById("cadastroForm").reset();
        atualizarTabela();
}

function carregarClientes(){
    const clientes = JSON.parse(localStorage.getItem("clientes")) || [];
    clientes.forEach(adicionarClienteTabela);
}
function adicionarClienteTabela(cliente){
    const tabela = document.querySelector("#clientesTable tbody");
    const linha = tabela.insertRow();
    linha.innerHTML = `;
       <td>${cliente.cpf}</td>
       <td>${cliente.nome}</td>
       <td>${cliente.endereco}</td>
       <td>${cliente.telefone}</td>
       <td><button onclick = "editarCliente('${cliente.cpf}')">Editar</td>
       <td><button onclick = "removerCliente('${cliente.cpf}')">Excluir</td>
    `;
}
function editarCliente(cpf1){
    const clientes = JSON.parse(localStorage.getItem("clientes")) || [];
    const cliente = clientes.find(c => c.cpf === cpf1);
    document.getElementById("cpf").value = cliente.cpf;
    document.getElementById("nome").value = cliente.nome;
    document.getElementById("endereco").value = cliente.endereco;
    document.getElementById("telefone").value = cliente.telefone;
    document.getElementById("cpf").disable=true;
    document.querySelector("button[type='submit']").innerHTML = "Atualizar";
    cpf = cpf1;
}

function removerCliente (cpf){
    let clientes = JSON.parse (localStorage.getItem("clientes")) || [];
    clientes = clientes.filter(c => c.cpf != cpf);
    localStorage.setItem("clientes", JSON.stringify(clientes)); 
    atualizarTabela();
}

function atualizarTabela(){
    const tbody = document.querySelector("#clientesTable tbody"); 
    tbody.innerHTML = "";
    carregarClientes();
}