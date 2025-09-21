//  Write a program to calculate average of three integers. 
//Numbers are given by the user

#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    cout<<"Enter the 1st number:";
    cin>>a;
    cout<<"Enter the 2nd number:";
    cin>>b;
    cout<<"Enter the 3rd number:";
    cin>>c;
    double avg = (a+b+c)/ 3;
    cout<<"Average of 3 number : "<<avg;

    return 0;

}
