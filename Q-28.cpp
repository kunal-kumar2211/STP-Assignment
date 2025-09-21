//Write a program to count digits in a given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    int c=0;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=n;i>0;i=i/10){
        c++;
    }
    cout<<"Digit count:"<<c<<endl;

    return 0;
}