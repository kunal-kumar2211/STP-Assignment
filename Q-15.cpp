// Create a program that takes the lengths of three sides of a triangle as input and determines whether the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the lengths of three sides of a triangle:";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"It is an equilateral triangle.";
    } else if (a==b && b!=c)
    {
        cout<<"It is an isosceles triangle.";
    } else {
        cout<<"It is a scalene triangle.";
    }
    
    return 0;

}