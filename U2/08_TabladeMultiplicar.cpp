/* Unidad 2. Use for
Author: ELDR
Date:12/10/2022
Description:Make a multiplication table
exercise 8:
*/


#include <iostream>

using namespace std;

int main(){

    
    int limit, numero, resultado;

    
    cout << "What number do you want the table to be: " <<endl;
    cin >> numero;

    
    cout << "Enter the limit: " <<endl;
    cin >> limit; 

   
    for (int i = 0; i <= limit; i++)
    {
       for(int f = 1; f <= 48; f++)
    {
        cout << "-";     
    }
    cout<<endl;

    resultado=numero*i;
        cout << "| " << "\t" << i << "\tX" << "\t" << numero << "\t=" << "\t" << resultado << "\t" << "|" <<endl;
    }
    
    return 0; 
}