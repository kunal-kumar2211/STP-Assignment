//Develop a program that takes four numbers as input and prints the largest among them.

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter 1st integer:";
    cin>>a;
    cout<<"Enter 2nd integer:";
    cin>>b;
    cout<<"Enter 3rd integer:";
    cin>>c;
    cout<<"Enter 4th integer:";
    cin>>d;
    int e;
    if(a>b && a>c && a>d){
        e=a;
    }else if(b>c && b>d){
        e=b;
    }else if(c>d){
        e=c;
    }else{
        e=d;
    }
    
    cout<<"Largest no is "<<e<<endl;

    return 0;
}