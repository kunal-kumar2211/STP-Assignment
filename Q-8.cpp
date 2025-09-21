// Write a program to input three characters from the user and 
//display characters with their corresponding ASCII codes.
#include<iostream>
using namespace std;
int main(){
    char a,b,c;
    cout<<"Enter the 3 character: ";
    cin>>a>>b>>c;
    cout<<"ASCII code of given 3 character is:"<<int(a)<<" "<<int(b)<<" "<<int(c)<<" ";
    return 0;
}
