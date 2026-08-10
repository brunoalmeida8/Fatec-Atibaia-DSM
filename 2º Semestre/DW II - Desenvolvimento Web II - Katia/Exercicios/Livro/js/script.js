function adicionar(nome, preco) {
    const objeto = { nome, preco };
    const carrinho = JSON.parse(localStorage.getItem("carrinho"));
    carrinho.push(objeto);
    localStorage.setItem("carrinho", JSON.stringify(carrinho));
    alert("Produto adicionado ao carrinho!");
}

function mostrarCarrinho() {
    const carrinho = JSON.parse(localStorage.getItem("carrinho")) || [];
    container = document.getElementById("carrinho");
    container.innerHTML = "";
    let total = 0;
    carrinho.forEach((produto, index) => {
        total += produto.preco;
        const item = document.createElement("div");
        item.innerHTML = `
        <p>${produto.nome} - R$ ${produto.preco.toFixed(2)}
        <button onclick = "removerProduto(${index})>"Remover</button> </p>
        `
        container.appendChild(item);
    });
    const totalElement = document.createElement("h3");
    totalElement.textContent = `Tatal: R$ ${total.toFixed(2)}`;
    container.appendChild(totalElement);
    container.classList.remove("oculto");
    container.classList.add("visivel");
}

function removerProduto(index) {
    const carrinho = JSON.parse(localStorage.getItem("carrinho")) || [];
    carrinho.splice(index, 1);
    localStorage.setItem("carrinho", JSON.stringify(carrinho));
    mostrarCarrinho();
}

document.addEventListener("click", function(event){
    const carrinho = document.getElementById("carrinho");
    const botaoCarrinho = event.target.closest("button[onclick='mostraCarrinho()']");
    const remover = event.target.closest("button[onclick='removerProduto()']");
    if(!carrinho.contains(event.target) && !botaoCarrinho && !remover){
        carrinho.classList.remove("visivel");
        carrinho.classList.add("oculto");
    }
});