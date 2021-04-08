/*
    finding factorial of number by recurression function.
*/
#include <iostream>
using namespace std;

unsigned long long factorial(long long number);

int main(){
    int num{3};
    cout<<"the factorial is :- " <<factorial(num) << endl;
    return 0;
}

unsigned long long factorial(long long number){
    if(number == 0){
        return 1;
    }
    return number * factorial(number-1);
}