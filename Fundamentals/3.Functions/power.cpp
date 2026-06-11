#include <iostream>
using namespace std;

int power(int a, int b){
    int value = 1;
    for(int i=1; i<=b; i++){
         value = value * a;
    }
    return value;
}

int main(){
    int x,y;
     cout<<"Enter the base value:"<<endl;
    cin>>x;
     cout<<"Enter the power:"<<endl;
     cin>>y;

     cout<<"the value is:"<<power(x,y)<<endl;


return 0;
}