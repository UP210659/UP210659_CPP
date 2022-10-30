/*(contador=contador+1;) es lo mismo que (contador ++;) (contador +1;) ((++contador;)
    (contador=contador+3;(contador+=3;))
     (mult=mult*4;(mult*=4;))
     para restar (contador --)
     (contador+=3;) esto es contador más lo que tu quieras, en este caso es contador mas el resultado del otro contador  
*/
#include <iostream>
using namespace std;
int main ()
{
    int contador;
    //Inicialización del contador, inicia en 1
    contador = 1;
    while(contador <=15){
        //Imprime el valor del contador
        cout << "El contador es: " <<contador << endl;

        //Incremento del contador, si no se incrementa el ciclo se mantiene indefinidamente 
        contador++;
    }
    //Al ser una función debe retornar un valor, en este caso 0
    return 0;

}
    
    