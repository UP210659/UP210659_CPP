/* Unidad 2. Use of if else
Author: ELDR
Date:00/09/2020
Description: Show the if else
*/
//Library for managing screen inputs and outputs
#include <iostream>
//Using the namespace to avoid the std::
using namespace std;
//integer main function
int main ()
{
    int numero;
    int dato;

    cout << "Ingresa un numero entero: ";
    cin >> numero;
    if (numero==dato){
        cout << "El numero es igual a dato " << endl;
    }
    else {
        cout << "El numero es diferente de dato" << endl;
    }
    //Exercise: use the different comparisons ==,!=,<,>,<=,>=
    return 0;
}