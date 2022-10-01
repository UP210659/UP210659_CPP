const texto = document.getElementById('logo');
const letras = texto.innerText.split("");

console.log(letras)
texto.innerText = '';

letras.forEach((letra) => {
    let caracter = letra === ' ' ? '&nbsp;' : letra;

    texto.innerHTML = texto.innerHTML + `
       <div>
           <span>${caracter}</span>
           <span class="segunda-linea">${caracter}</span> 
       </div>
    `;
});

texto.addEventListener('mouseenter', () => {
    let cuenta = 0;

    const intervalo = setInterval(() => {
        if(cuenta < texto.children.legth){
            texto.children[cuenta].classList.add("animacion");
            cuenta += 1;
        } else {
            clearInterval(intervalo);
        }
           
    }, 30);
});