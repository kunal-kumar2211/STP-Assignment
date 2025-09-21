//Write a program to calculate LCM of two numbers.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    int ans;
    cout<<"Enter 1st number for LCM:";
    cin>>a;
    cout<<"Enter 2nd number for LCM:";
    cin>>b;
    for(int i=1;i>0;i++){
         if((i%a==0) && (i%b==0)){
         ans=i;
         break;
         }
    }
    cout<<"LCM of two given number is: "<<ans<<endl;

    return 0;
}