/* Unidad 2.
Author: ELDR
Date:28/09/2022
Description:pizzas
exercise 4:
*/

#include <iostream>

using namespace std;

int main()
{
    int ingredient = 0, index = -1, selector = 0;//Index is -1 so that if the user types 1, the actual value selected is in position 0 and so on and pizza type selector
    string extraingredient[5] = {"Pepper", "Tofu", "Pepperoni", "Ham", "Salmon"};//Extra ingredient selection list declared from position 0 to 4
    string pizzatype[2]={"Vegetarian", "Non-vegetarian"};//List of types of pizza to print out
    char response;//Vegetarian or not response
    cout << "Welcome customer to Bella Napoli Pizzeria!\nAll our pizzas have mozzarella and tomato\nWould you like a vegetarian pizza? (Y/N)\n";
    cin >> response;
    if (response == 'Y' || response == 'N' || response == 'y' || response == 'n')//Check if the user typed in a valid response
    {
        if (response == 'Y' || response == 'y')//Vegetarian options
        {
            do
            {
                cout << "Select an ingredient: \n 1. Pepper\n 2. Tofu\n";//Loop the ingredient selection until a valid response (vegetarian)
                cin >> ingredient;
            } while (ingredient < 1 || ingredient > 2);
        }
        else if (response == 'N' || response == 'n')//Non-vegetarian options
        {
            do
            {
                cout << "Select an ingredient: \n 1. Pepperoni\n 2. Ham\n 3. Salmon\n";//Loop the ingredient selection (meat)
                cin >> ingredient;
            } while (ingredient < 1 || ingredient > 3);
            index = 1;//Locate the ingredient on the "meat section"
            selector = 1;//Display a nonvegetarian pizza type
        }
        cout << "Your " << pizzatype[selector] << " pizza has the following ingredients:\n Mozarella \n Tomato\n " << extraingredient[ingredient + index] << endl;//Print out all the ingredients and print out the extra ingredient based on the value inputted by the user
    }
    else
    {
        cout << "You've inputted an invalid response, try again\n";
    }
    return 0;
}