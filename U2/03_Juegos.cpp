/* Unidad 2. Use Do While
Author: ELDR
Date:02/10/2022
Description:Make a program that gives you the prices of a game room
exercise 3:
*/

#include <iostream>

using namespace std;

int main ()
{
    int edad, precio;
    cout << "Enter the age: ";
    cin >> edad;
    
    if(edad >= 0)
    {
        if (edad >= 0 && edad <4)
        {
           cout << "Entrance is free" << "\n";
        } 
    
    else if((edad >=4)&&(edad <= 18)){
        cout << "The amount to pay is $5 " << "\n";
    }
    else if(edad > 18){
        cout << "The amount to pay is $10 " << "\n";
    }
    }
      
    else {
        cout << "\nThe age you've inputted is invalid, try again.\n";
    }
return 0;
}
    
