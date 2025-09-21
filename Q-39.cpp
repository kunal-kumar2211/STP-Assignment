//Write a program to find next Prime number of a given number
#include<iostream>
using namespace std;
int main(){
    int n,a,i;
    cout<<"Enter the prime number:";
    cin>>n;
     for(int i=n;i<=n+1;i++){
        for( i= 2;i<=n+1;i++){
        if(n+1%i==0){
            break;
        }
    } if (i>n+1/2){
        cout<<n<<" ";
    break;  
    }
}
return 0;
}