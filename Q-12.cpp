//Create a program that takes a person's age as input and classifies them into different age groups (e.g. child,teenager,adult,senior). 

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age<=12){
        cout<<"Child";
    } else if(age<=19 && age>=13){
        cout<<"Teenager";
    } else if(age<=35 && age>=20){
        cout<<"Adult";
    } else{
        cout<<"Senior";
    }
    return 0;

}