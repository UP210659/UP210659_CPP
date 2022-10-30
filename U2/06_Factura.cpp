/* Unidad 2. Use Do While
Author: ELDR
Date:05/10/2022
Description:Make an invoice for products sold
exercise 6:
ingrese la cantidad vendida
ingrese el precio del articulo
finalizando la factura...
la cuenta total es de:
*/
#include <iostream>
using namespace std;
int main()
{
    int quanty =1;
    float price, total = 0, amount;
    
    cout << "Welcome, please input the amount and price of your products. To end the program, type a 0\n\n";
    do
    {
        cout << "Producto" <<quanty << "\nAmount: ";
        cin >> amount;
          if( amount <= 0){
            cout << "\n Invalid amount";
            quanty++;
            break;
          } 
            
        
        cout << "Price:$ ";
        cin >> price;
        if(price < 0)
        {
            cout <<"\n Invalid amount";
            quanty++;
            break;
        }
        quanty++;
        total += (price * amount);

    } while (price != 0);
    cout << "\n has a total of " << quanty -2 <<" different products. ";
    cout << "\n Total is: $ " <<total <<"\n";

    return 0;
}