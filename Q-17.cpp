//Write a program that takes a start year and an end year from the user and prints all the leap years in that range.

#include<iostream>
using namespace std;
int main(){
    int starting_year,ending_year;
    cout<<"Enter the starting yaer:";
    cin>>starting_year;
    cout<<"Enter the ending year:";
    cin>>ending_year;
    for (int i = starting_year; i < ending_year; i++)
    {
        if (i%4==0 && i%100!=0 || i%400==0)
        {
            cout<<"Leap years in that range:"<<i<<endl;
        }
    }
    return 0;
}