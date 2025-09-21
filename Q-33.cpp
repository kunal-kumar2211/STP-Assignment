//Write a program to find the Nth term of the Fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=1;
    cout<<"Enter the Nth term:";
    cin>>n;
    for(int i=0;i<=n;i++){
         cout<<"Nth term:"<<""<<a<<endl;
        int c= a+b;
        a=b;
        b=c;
    }
   
    return 0;
}