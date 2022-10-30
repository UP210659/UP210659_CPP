/* Unidad 2. Use de Do While
Author: ELDR
Date:03/10/2022
Description: get the highest and lowest temperatures
*/
#include <iostream>
using namespace std;

int main ()
{
    int counter = 1;
    float temperature, minTempe = 9999, maxTempe = -9999, average;
    float tempAcum = 0;
    do{
        cout <<"Give me the temperature: ";
        cin >> temperature;
        if(temperature >= maxTempe)
        {
            maxTempe = temperature;
        }
        if(temperature <= minTempe)
        {
            minTempe = temperature;
        }
        tempAcum += temperature;
        counter++;
    } while(counter <= 6);
    average = tempAcum / 6;
    cout << "The average of temperature today is: " << average << "C°\n lowest temperature " <<minTempe << " C° \n highest temperature " <<maxTempe <<" C°\n" <<endl;

 return 0;
}
