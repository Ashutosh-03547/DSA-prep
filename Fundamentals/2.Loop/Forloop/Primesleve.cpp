#include <iostream>
#include <vector>
using namespace std;
 int main(){
     int p,i,j,num;
     cout<<"enter the number:";
     cin>>num;
     vector<bool> sleve(num+1,true);//vector is used to indicate the numeric value and bool is used to indicate the boolean value 
     sleve[0]=sleve[1]=false;// excluding 0,1 
     for(p=2;p*p<=num;p++){
        if(sleve[p]){
            for(j=p*p;j<=num;j+=p){
               sleve[j]=false;
            }
        }
     }

     for(i=2;i<=num;i++){
        if(sleve[i]){
            cout<<i<<endl;
        }
     }

    return 0;
    
 }