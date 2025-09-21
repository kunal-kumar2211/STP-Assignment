// Write a program to calculate sum of squares of first N natural numbers 

#include<iostream>
using namespace std;
int main(){
    int n,s;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
   
    for(int i=1;i<=n;i++){
        s =i* i;
        sum += s;
    }
     cout<<"Sum of square of First "<<n<<" natural number are: "<<sum<<endl;
    return 0;
}