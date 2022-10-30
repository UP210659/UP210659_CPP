/* 
Date: 27/09/22
Author: ELDR
Email: up210659@alumnos.upa.edu.mx
Description: Employee
*/
/* In a certain company, its employees are evaluated at the end of each year.
The points that can be obtained in the evaluation start at 0.0 and can go up,
translating into better benefits. The points employees can earn
they can be 0.0, 0.4, 0.6 or more, but not intermediate values ​​between the mentioned figures. A
Below is a table with the levels corresponding to each score. The
The amount of money earned on each level is $2,400 multiplied by the player's score.
level
*/
/*
NIVEL         PUNTUACIÓN
Inaceptable       0.0
Aceptable         0.4
Meritotio         0.6 o más
*/
//-------- PREPROCESSOR DIRECTIVES -----------
#include <iostream>
using namespace std;
//---------- MAIN FUNCTION -------------
int main ()
{
    double puntuacion, bono=2400, beneficio;
    
    cout << "Enter the qualification of your employee: ";
    cin >> puntuacion;
   if((puntuacion == 0.0)||(puntuacion == 0.4)||(puntuacion >= 0.6))
   {
    if(puntuacion == 0.0){
    cout << "It is unacceptable: ";
    }  
   else if(puntuacion == 0.4){
   cout << "It is acceptable: ";
   }
   else if(puntuacion >= 0.6){
    cout << "It is meritorious: ";
   }
   cout << "\nHas an evaluation of: " << puntuacion << "\nThe employee will receive: " << (puntuacion*100) << "%:$" << (bono*puntuacion) << "\n";
   } 
   else {
    cout << "Try again, the punctuation entered is incorrect:\n ";
   }
   return 0;
}  