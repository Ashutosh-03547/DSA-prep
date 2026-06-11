#include<iostream>
using namespace std;

void swapnum(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10;
    int y=20;
    cout<<"before swap:"<<x<<","<<y<<endl;
    swapnum(x,y);
    cout<<"after swap:"<<x<<","<<y<<endl;  
    return 0;
}