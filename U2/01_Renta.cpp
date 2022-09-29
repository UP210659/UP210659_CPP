
/* 
Date: 22/09/2022 
Author: ELDR
Email: UP210659@alumnos.upa.edu.mx
Description: Rent discounts.
*/
/* Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes:
Renta	Tipo                 impositivo
Menos de $10,000	             5%
Entre $10,000 y $20,000	         15%
Entre $20,000 y $35,000	         20%
Entre $35,000 y $60,000	         30%
Más de $60,000	                 45%
Escribir un programa que pregunte al usuario su renta anual y muestre por 
pantalla el tipo impositivo que le corresponde.
*/
#include <iostream>
using namespace std;
/// @brief 
/// @return 
int main ()
{

    float impuesto;
    float porcentaje;
    float renta;

    cout <<"¿What is your annual rent?:"<< endl;
    cin >> renta;
    if (renta > 0)
    {
        if(renta < 10000)
        {
            porcentaje =.05;
            impuesto = renta*.05;
        }
        else if((renta >=10000)&&(renta < 20000))
        {
            porcentaje =.15;
            impuesto = renta*.15;
        }
        else if((renta >=20000)&&(renta < 35000))
        {
            porcentaje =.20;
            impuesto = renta*.20;
        }
        else if((renta >= 35000)&&(renta < 60000))
        {
            porcentaje =.30;
            impuesto = renta*.30;
        }
        else if (renta >= 60000)
        {
            porcentaje =.45;
            impuesto = renta*.45;
        }
        //print all data
        cout << endl << "Your annual rent is: $" <<renta << endl;
        cout << "Your tax is " << (porcentaje)*100 << "%: $" << impuesto << endl; 
        cout << "Total amount to pay is: $" << renta+impuesto << endl;
        cout << "$ " << renta << "      " << (porcentaje) *100 << "%             $ " << impuesto << "         $ " << porcentaje << endl;
    }
    else
    {
        cout << "Your value is invalid" << endl;
    }

    return 0; 

}

