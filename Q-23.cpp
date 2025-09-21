// Write a program to calculate sum of first N even natural numbers 

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
   
    for(int i=1;i<=n/2;i++){
        sum += i;
    }
     cout<<" Sum of First "<<n<<" even natural number are: "<<sum<<endl;
    return 0;
}