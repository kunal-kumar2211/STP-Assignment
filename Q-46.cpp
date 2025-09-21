#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
        if(i==n/2 || j==n/2 || (i==0 && j>n/2)||(i==0 && j>n/2)||(j==n && i>n/2)||(i==4 && j<n/2)||(i<n/2 && j==0)){
            cout << "* ";
        } else{
            cout << "  ";
        }
    }
    cout<<endl;}
return 0;
}