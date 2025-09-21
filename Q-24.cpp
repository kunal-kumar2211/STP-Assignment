//Write a program to calculate sum of first N odd natural numbers


#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
   
    for(int i=1;i<=n;i++){
        int odd=2*i - 1;
        sum += odd;
    }
     cout<<" Sum of First "<<n<<" odd natural number are: "<<sum<<endl;
    return 0;
}