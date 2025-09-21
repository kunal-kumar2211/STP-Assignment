// Write a program that takes three numbers as input and finds the middle (second largest) number.

#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the 1st number:";
    cin>>n1;
     cout<<"Enter the 2nd number:";
    cin>>n2;
     cout<<"Enter the 3rd number:";
    cin>>n3;
    int sec;
    if (n1>n2 && n1>n3)
    { if(n2>n3)
        sec=n2;
        else
        sec=n3;
    } else if (n2>n1 && n2>n3)
    {
        if (n1>n3)
       sec=n1;
       else
        sec=n3;
    } else{
         if (n1>n2)
         sec=n1;
         else
         sec=n2;
    }
    cout<<"Second largest number is "<<sec<<endl;
    
    return 0;

}