//Write a program to print first N term of the Fibonacci series
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n terms:";
    cin>>n;
    int a=0,b=1;
   if(n==1){
    cout<<a;
   }else if(n==2){
    cout<<b;
   }else{
    for(int i=3;i<=n;i++){
        int c= a+b;
        a=b;
        b=c;
    }
      cout<<b;
   }
    return 0;
}