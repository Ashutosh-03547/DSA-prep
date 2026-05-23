#include <iostream>
using namespace std;
 int main(){
    int i,j,num;
    cout<<"Enter the number:";
    cin>>num;
    for(i=2;i<=num;i++){
        if(i!=2){
            if(i%2!=0){
                cout<<i<<endl;
             }
        }
        else{
            cout<<i<<endl;
        }
        
    }


    return 0;
 }