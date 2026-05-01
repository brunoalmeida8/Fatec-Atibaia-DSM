function converterRomano() {
  const numero = parseInt(document.getElementById("numero").value);
  const resultado = document.getElementById("romano");

  if (isNaN(numero) || numero < 1 || numero >= 4000) {
    resultado.innerHTML = "<p>Digite um número entre 1 e 3999.</p>";
    return;
  }

  const milhares = ["", "M", "MM", "MMM"];
  const centenas = ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"];
  const dezenas = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"];
  const unidades = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"];

  let m = Math.floor(numero / 1000);
  let c = Math.floor((numero % 1000) / 100);
  let d = Math.floor(((numero % 1000) % 100) / 10);
  let u = Math.floor(numero % 10);

  const n = milhares[m] + centenas[c] + dezenas[d] + unidades[u];
  resultado.innerHTML = `<p>${numero} em romano é ${n}</p>`;
}
