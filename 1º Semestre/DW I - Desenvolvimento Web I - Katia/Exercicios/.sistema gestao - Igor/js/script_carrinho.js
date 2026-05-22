function adicionarproduto(nome, preco) {
  const produto = { nome, preco };
  const compra = JSON.parse(localStorage.getItem("carrinho")) || [];
  compra.push(produto);
  localStorage.setItem("carrinho", JSON.stringify(compra));
  alert("Produto adicionado ao carrinho!");
}

function limparcarrinho() {
  localStorage.removeItem("carrinho");
  document.getElementById("carrinho").innerHTML = "";
  alert("Carrinho vazio!");
}

function mostrarcarrinho() {
  const compra = JSON.parse(localStorage.getItem("carrinho")) || [];
  const container = document.getElementById("carrinho");
  container.innerHTML = "";
  let total = 0;
  compra.forEach((produto, index) => {
    total = total + produto.preco;
    const item = document.createElement("div");
    item.innerHTML = `<p>${produto.nome} - R$ ${produto.preco}
    <button onclick="removerproduto(${index})">Remover</button>
    </p>
    `;
    container.appendChild(item);
  });
  const totalElement = document.createElement("h3");
  totalElement.textContent = `Total: R$ ${total.toFixed(2)}`;
  container.appendChild("totalElement");
}

function removerproduto(index) {
  const carrinho = JSON.parse(localStorage.getItem("carrinho")) || [];
  carrinho.splice(index, 1);
  localStorage.setItem("carrinho", JSON.stringify(carrinho));
  mostrarcarrinho();
}
document.addEventListener("click", function (event) {
  const carrinho = document.getElementById("carrinho");
  const botaoCarrinho = event.target.closet(
    "button[onclick='mostrarcarrinho()']",
  );
  if (!carrinho.contains(event.target) && !botaocarrinho) {
  }
});
