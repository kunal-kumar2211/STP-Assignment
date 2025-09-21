//the cost price and selling 
//price banana per dozen. Calculate the profit or loss earned 
//upon selling 25 bananas.
#include<iostream>
using namespace std;
int main(){
	double a=60;//cost price for dozen banana
	double b=80;//sell price for dozen banana
	double c= a/12;//cp for 1 banana
	double d= b/12;//sp for 1 banana
	double tcp= c*25;//total cp for 25 banana
	double tsp= d*25;//total sp for 25 banana
	double tp= tsp-tcp;
	cout<<"Total profit upon selling 25 banana is: "<<tp;
	return 0;
	
}
