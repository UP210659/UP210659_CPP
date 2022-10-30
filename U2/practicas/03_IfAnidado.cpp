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
    int zapatosVendidos;
    int costoZapatos = 50;
    float montoTotal;
    float descuento;
    //The amount of shoes sold is requested
    cout << "Ingrese la cantidad de zapatos vendidos";
    cin >> zapatosVendidos;
    //The total amount is calculated to apply the discount
    montoTotal = zapatosVendidos*costoZapatos;

    //The applicable discount is calculated 
    if (zapatosVendidos <= 10)
    descuento = 0;
    else if (zapatosVendidos <= 20)
    descuento = 0.1;
    else if (zapatosVendidos <= 30)
    descuento = 0.2;
    else if (zapatosVendidos > 30)
    descuento = 0.3;
    //The total amount without discount is printed
    cout << "El momto total es: $" <<montoTotal << endl;
    //discount applies
    montoTotal -= montoTotal*descuento;

    //The result is printed
    cout << "El descuento aplicado fue de " << descuento*100 << "%" << endl;
    cout << "El monto final con descuento es de: $" << montoTotal << endl;

    /*Exercise: Perform a program in which 3 investors are considered, whoever has given more money
    will be the owner of the company, the second will be the manager and the last will be just an investor.
    Consider that two people cannot give the same amount of money. */

    //Being a function, it must return a value, in this case 0
    return 0;
    



}