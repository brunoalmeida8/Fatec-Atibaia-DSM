function adicionarproduto(nome, preco){
    const produto = {nome, preco};
    const compra = JSON.parse(localStorage.getItem("carrinho")) || [];// || se nao existir ele cria
    compra.push(produto);
    localStorage.setItem("carrinho", JSON.localStorage(compra));
    alert("Produto adicionado");
}

function limparcarrinho(){
    localStorage.removeItem("carrinho");
    document.getElementById("carrinho").innerHTML="";//carregue vazio
    alert("Carrinho vazio!");
}

function mostrarcarrinho(){
    const compra = JSON.parse(localStorage.getItem("carrinho")) || [];
    const container = document.getElementById("carrinho");
    container.innerHTML="";
    let total=0;
    compra.forEach((produto, index) => {
        total = total + produto.preco;
        const item = document.createElement("div");
        item.innerHTML=`
            <p> ${produto.nome} - R$ ${produto.preco}
                <button onclick="removerproduto(${index})">Remover</button>
            </p>
        `;
        container.appendChild(item);
    });
    const totalElement = document.createElement("h3");
    totalElement.textContent = `Total: R$ ${total.toFixed(2)}`;
    container.appendChild("totalElement");
}