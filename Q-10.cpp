// WAP to take time as an input in below given format and convert the time format and display the result as given below. 
//User Input date format – “HH:MM” 

#include<iostream>
using namespace std;
int main(){
    string time;
    cout<<"Enter time in HH:MM format:";
    cin>>time;
    string hour = time.substr(0,2);
    string minute = time.substr(3,2);
        cout<<"Hours:"<<hour<<",Minutes:"<<minute<<endl;

    return 0;
}