function adicionar(nome, preco){
    const objeto = {nome, preco};
    const carrinho = JSON.parse(localStorage.getItem("carrinho")) || [];
    carrinho.push(objeto);
    localStorage.setItem("carrinho", JSON.stringify(carrinho));
    alert("Produto adicionado ao carrinho!");
}