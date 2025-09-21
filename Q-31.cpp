//Write a program to reverse a given number 
#include<iostream>
using namespace std;
int main(){
    int n,a;
    int rev=0;
    cout<<"Enter the number:";
    cin>>n;
    while (n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    cout<<"Reverse of given number is: "<<rev<<endl;

    return 0;
    
}