function login(e){
    e.preventDefault();//evita o carregamento padrao .. que clica mostra e some rapidinho
    const usuario = document.getElementById("user").value;
    const senha = document.getElementById("pass").value;
    //recuperando o usuario do localStorage
    const dados = JSON.parse(localStorage.getItem("usuario"));
    if (!dados) {
        alert("Nenhum usuário cadastrado!");
        return;
    }
    if (usuario===dados.usuario && senha === dados.senha) {
        if (dados.tipo ==="admin") window.location.href = "home_admin.html";    
        else window.location.href = "home_cliente.html";
    } else{
        alert("Usuario ou senha invalidos!");
    }
}

//colocar no console para teste:
/*
const usuario = {usuario: 'bruno', senha: '12345', tipo: 'admin'};
localStorage.setItem('usuario', JSON.stringify(usuario));
*/