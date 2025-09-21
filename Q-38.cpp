//Write a program to print all Prime numbers between two given numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    cout<<"Enter the number:\n";
    cin>>a>>b;
     for(int n=a;n<=b;n++){
        for( i= 2;i<=n;i++){
        if(n%i==0){
            break;
        }
    } if (i>n/2){
        cout<<n<<" ";
    }
}
return 0;
}