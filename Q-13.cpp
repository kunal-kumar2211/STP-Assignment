// Develop a program that takes a student's score (0-100) as input and prints the corresponding grade (e.g.A,B,C,D,F)based on a grading scale.

#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade: A";
    } else if(marks>=75 && marks<90){
        cout<<"Grade: B";
    } else if(marks>=60 && marks<75){
        cout<<"Grade: C";
    } else if(marks>=45 && marks<60){
        cout<<"Grade: D";
    } else if(marks>=33 && marks<45){
        cout<<"Grade: E";
    } else {
        cout<<"Grade: F";
    }

    return 0;
}