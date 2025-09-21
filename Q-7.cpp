// Write a program to input an ASCII code from the user and 
//print its corresponding character.
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the ASCII code: ";
	cin>>a;
	cout<<"Character of ASCII code is: "<<char(a);
	return 0;
}
