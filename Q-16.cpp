//Develop a program that converts a temperature from Fahrenheit to Celsius or vice versa based on user input.The user should specify the type of conversion.

#include<iostream>
using namespace std;
int main(){
    double celsius,fahrenheit;
    int select;
    cout<<"Select the conversion.\n";
    cout<<"1.Celsius to fahrenheit:\n";
    cout<<"2.Fahrenheit to celsius:\n";
    cin>>select;
    if(select==1){
        cout<<"Enter the temperature in celsius:";
        cin>>celsius;
        fahrenheit=(celsius*9/5)+32;
        cout<<"Temperature change in fahrenheit:"<<" "<<fahrenheit;
    } else if (select==2)
    {
        cout<<"Enter the temperature in fahrenheit:";
        cin>>fahrenheit;
        celsius=(fahrenheit-32)*5/9;
        cout<<"Temperature change in celsius:"<<" "<<celsius;
    } else{
        cout<<"Invalid selection.";
    }

    return 0;

}