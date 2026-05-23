#include<iostream>
using namespace std;
int main(){
    int i,num,factorial;
    cout<<"Enter the number:";
    cin>>num;
    factorial=1;
    for(i=2;i<=num;i++){
         factorial=i*factorial;
    }
    cout<<"Factorial is:"<<factorial<<endl;5
    return 0;
}