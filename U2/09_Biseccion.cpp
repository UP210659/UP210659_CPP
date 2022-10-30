/* Unidad 2. Use While
Author: ELDR
Date:13/10/2022
Description:Make a bi
exercise 9:
*/


#include <iostream>
#include <cmath>//Complex operations
#include <iomanip>//Setting the number of decimals
using namespace std;

//---------------------ISSUE---------------------------

// Make a program that uses to biseccion method to get a root of a graph

//------------------ EXTRA FUNCTION ---------------------

float bisection(float num){
    //Equation y=x²+x-12
    return pow(num,2)+num-12;
}

//------------------ MAIN FUNCTION ---------------------

int main(){
    int counter=1;
    float a,b,c,ya,yb,yc;
    cout << "This graph is using the formula x²+x-12 \n";
    cout << "Give me the value of (a):";
    cin >> a;
    cout << "Give me the value of (b):";
    cin >> b;
    c = (a+b)/2;
    ya = bisection(a);
    yb = bisection(b);
    yc = bisection(c);
    if ((yb * ya < 0) || (ya * yc < 0) || (yc * yb < 0)){//Check to see if there is a root between the numbers before making anything
    cout << "| Exerc | A \t\t| B \t\t| C \t\t| f(A) \t\t| f(B) \t\t| f(C) \t\t| \n";//Table Header
    for (int i = 0; i < 100; i++)
    {
        cout << "-";
    }
    cout << "\n";
    cout << "| " << counter << "\t|" << fixed << setprecision(3) << a << "\t\t|" << b << "\t\t|" << c << "\t\t|" << ya << "\t\t|" << yb << "\t\t|" << yc << "\t\t|\n";
    for (int i = 0; i < 100; i++)
    {
        cout << "-";
    }
    cout << "\n";

        while (yc >= 0.01 || yc <= -0.01)
        {
            if ((yc > 0 && ya < 0) || (ya > 0 && yc < 0))//Set up b as the new limit (c) and then c would be the half of the previous value
            {
                b = c;
            }
            else
            {
                a = c;
            }
            if (a == b)//If point b ends being point b, the cycle would loop infinately, this prevents that
            {
                break;
            }
            
            c = (a+b)/2;
            ya = bisection(a);
            yb = bisection(b);
            yc = bisection(c);
            counter++;
            cout << "| " << counter << "\t|" << fixed << setprecision(3) << a << "\t\t|" << b << "\t\t|" << c << "\t\t|" << ya << "\t\t|" << yb << "\t\t|" << yc << "\t\t|\n";
            for (int i = 0; i < 100; i++)
            {
                cout << "-";
            }
            cout << "\n";
        }
    cout << "The root is approximately " << setprecision(1) <<  c <<"\n";
    }
    else //If yb and ya were both the same sign
    {
        cout << "There's no root between the numbers" <<"\n";
    }
    return 0;
}


