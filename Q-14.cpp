// Write a program that reads two integers from the user and determines if the first integer is divisible by the second integer. 

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two integers:";
    cin>>a>>b;
    if(a%2==0){
        cout<<"It is divisible.";
    } else{
        cout<<"1st Integer:"<<" "<<a<<" ,2nd Integer:"<<" "<<b<<endl;
        }
        return 0;
}