#include<iostream>
using namespace std;

double factorial(int num){
  double fact = 1;
  for(int i=1;i<=num;i++){
      fact=fact*i;
  }
  return fact;
}

double ncr(int a,int b){
  if(b>a){
    return 0;
  }
  int c=a-b;
  double aFactorial=factorial(a);
  double bFactorial=factorial(b);
  double cFactorial=factorial(c);

  double ncrValue=aFactorial/(bFactorial*cFactorial);
  return ncrValue;

}

int main(){
    int n,r;
    cin>>n;
    cin>>r;
    cout<<"the ncr value is:"<< ncr(n,r)<<endl;
    return 0;
}