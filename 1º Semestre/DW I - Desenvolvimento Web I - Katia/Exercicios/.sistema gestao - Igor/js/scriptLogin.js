function login(e) {
  e.preventDefault();
  const usuario = document.getElementById("user").value;
  const senha = document.getElementById("pass").value;

  // recuperando o usuário do localStorage

  const dados = JSON.parse(localStorage.getItem("usuario"));

  if (!dados) {
    alert("Nenhum usuario cadastrado!");
    return;
  }
  if (usuario === dados.usuario && senha === dados.senha) {
    if (dados.tipo === "admin") window.location.href = "home_admin.html";
    else window.location.href = "home_cliente.html";
  } else {
    alert("usuario ou senha invalidos!");
  }
}
