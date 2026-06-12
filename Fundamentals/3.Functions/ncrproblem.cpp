#include<iostream>
using namespace std;

long long factorial(int value){
  long long fact = 1;
  for(int i = 1; i <= value; i++){
    fact *= i;
  }
  return fact;
}

void ncr(int n, int r){
  if(r > n){
    cout << 0 << endl;
    return;
  }

  int c = n - r;
  long long nFactorial = factorial(n);
  long long rFactorial = factorial(r);
  long long cFactorial = factorial(c);

  cout << cFactorial << endl;

  long long ncrValue = nFactorial / (rFactorial * cFactorial);
  cout << ncrValue << endl;
}

int main(){
  int n, r;
  cin >> n >> r;
  ncr(n, r);
  return 0;
}