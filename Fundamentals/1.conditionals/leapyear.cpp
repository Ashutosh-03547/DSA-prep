#include<iostream>
using namespace std;

bool leapyear(int year){
    return(year%4==0 && year%100!=0) || (year%400==0);
}
int main(){
    int year;
    cout<<"enter the year:";
    cin>>year;
    cout<<(leapyear(year)? "Leap" : "Not leap")<<endl;
    return 0;
}