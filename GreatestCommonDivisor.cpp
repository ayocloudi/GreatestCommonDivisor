#include <iostream>
using namespace std;

int main() {
    int num;
    int num1;
    cout << "Enter an integer: ";
    cin >> num;//takes in an integer
    cout << "Enter another integer: ";
    cin >> num1;//takes in another integer
    //for loop which looks for the largest number which can be divided into both inputs.
       for(int i = num1; i >0; i--){
           if(num%i ==0 && num1%i==0)
           {
               cout <<"The largest divisor is " <<i;//prints out the largest divisor.
               break;//stops the loop once the number is found.
           }
       }
    return 0;
}