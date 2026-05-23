// Corrected fizzbuzz implementation
#include<iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++) {
        if(i % 3 == 0 && i % 5 == 0) { // Check for "fizzbuzz" first
            cout << "fizzbuzz" << endl;
        }
        else if(i % 3 == 0) {
            cout << "fizz" << endl;
        }
        else if(i % 5 == 0) {
            cout << "buzz" << endl;
        }
        else {
            cout << i << endl; // Print the number if no condition matches
        }
    }
    return 0;
}
/*in the conditionals the order of conditions matter.
In conditional statements, the first matching condition is executed,the rest will move forward .
in the above, i%3 --> i%5 --> i % 3 == 0 && i % 5 == 0 , this order will not work as after first two ,
nothing will be left for the last condition*/
