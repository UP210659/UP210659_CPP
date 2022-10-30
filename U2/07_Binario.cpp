#include<iostream>

using namespace std;

int main(){
     int num;
    string binary;

    do{

        cout<<"Input a decimal number \n";
        cin>>num;

        if(num > 0)
        {
            
            while(num > 0)
            {
            
                (num % 2 == 0)?binary = '0' + binary:binary = '1' + binary;
                num /= 2;
            }
            cout << "The number you've inputted is " << binary;//Output of the string
            cout << endl;
        }
        else if(num==0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<"try another number that is not 0"<<endl;
        }
   
    }while(num < 0);
    
    
    return 0;
 }