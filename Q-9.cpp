// WAP to take date as an input in below given format and convert the date format and display the result as given below.
 #include<iostream>
 using namespace std;
 int main(){
    string date;
    cout<<"Enter date in DD/MM/YYYY format:";
    cin>>date;
 string day = date.substr(0,2);
 string month = date.substr(3,2);
 string year = date.substr(6,4);

cout<<"Day:"<<day<<",Month:"<<month<<",Year:"<<year<<endl;

return 0;
}
