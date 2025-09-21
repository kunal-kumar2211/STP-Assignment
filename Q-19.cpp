//Develop a program that takes a month (as an integer from 1 to 12) and a year as input,
//then prints the number of days in that month, considering leap years.

#include<iostream>
using namespace std;

int main(){
    int months,year;
    cout<<"Enter the month no:";
    cin>>months;
    cout<<"Enter the year:";
    cin>>year;
    int day;
if (months==1||months==3||months==5||months==7||months==8||months==10||months==12)
{
    day=31;
} else if (months==4||months==6||months==9||months==11)
{
    day=30;
} else if (months==2)
{
    if (year%4==0 && year%100!=0 || year%400==0)
        day=29;
    else
    day=28;
}else{
    cout<<"Invalid month.";
    return 0;
}cout<<"No of days in given month:"<<day<<endl;
    return 0;
}