/*Unidad 1. Tipos de datos 
Date: 19/09/2022
Author: ELDR
Email:up210659@alumnos.upa.edu.mx
Description: Muestra los diferentes tipos de datos en C++
*/
//Libreria para el manejo de entradas y salidas de pantalla
#include <iostream> 
//Libreria para el uso de printf y scanf 
#include <stdio.h>
//Uso del namespace para evitar el std::
using namespace std;
//Funcion principal de tipo entero 
int main ()
{
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 64;
    
    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El número entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof (entero) << "bytes" << endl;
    cout << "El número del flotante es: " << flotante << endl;
    cout << "El tamaño del numero del flotante es: " << sizeof (flotante) << "bytes" << endl;
    cout << "El número grande es: " << grande << endl;
    cout << "El tamaño del número grande es: " << sizeof (grande) << "bytes" << endl;
    cout << "El número del caracter es: " << caracter << endl;
    cout << "El tamaño del caracter es: " << sizeof (caracter) << "bytes" << endl;

    cout << "=========================================" << endl;

    printf ("Usando printf\n");
    printf ("El número entero es: %i \n", entero);
    printf ("El número flotante es %3.1f\n", flotante);

    return 0;
} 