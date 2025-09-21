//Write a program to calculate sum of first N natural numbers 

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
   
    for(int i=1;i<=n;i++){
        sum += i;
    }
     cout<<"Sum of First "<<n<<" natural number are: "<<sum<<endl;
    return 0;
}