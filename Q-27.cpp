// Write a program to calculate factorial of a number 

#include<iostream>
using namespace std;
int main(){
    int n;
    int multi=1;
    cout<<"Enter the number for factorial:";
    cin>>n;
    for(int i=1;i<=n;i++){
        multi= multi* i;
    }
cout<<"Factorial of given number:"<<multi<<endl;
    return 0;
}