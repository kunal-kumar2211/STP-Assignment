//Write a program to print all Prime numbers under 100..

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"All prime number between 1 to 100 is: "<<endl;
    for(n=1;n<=100;n++){
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