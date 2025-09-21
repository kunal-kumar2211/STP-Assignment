// Write a program to calculate simple interest.
#include<iostream>
using namespace std;
int main(){
	double amt,rate,time;
	cout<<"Enter the Amount:";
	cin>>amt;
	cout<<"Enter the Rate:";
	cin>>rate;
	cout<<"Enter the Time:";
	cin>>time;
	double SI= amt+rate+time/100;
	cout<<"Simple interest is : "<<SI;
	return 0;
}
