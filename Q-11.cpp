// Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

#include<iostream>
using namespace std;
int main(){
    char a,b,c;
    cout<<"Enter the 1st character:";
    cin>>a;
     cout<<"Enter the 2nd character:";
    cin>>b;
     cout<<"Enter the 3rd character:";
    cin>>c;
int n1= int(a);
int n2= int(b);
int n3= int(c);
cout<<"Given Character:"<<a<<" ->ASCII code:"<<n1<<endl;
cout<<"Given Character:"<<b<<" ->ASCII code:"<<n2<<endl;
cout<<"Given Character:"<<c<<" ->ASCII code:"<<n3<<endl;
return 0;

}