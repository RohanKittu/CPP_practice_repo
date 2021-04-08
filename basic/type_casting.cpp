/*
    type casting between variables
*/
#include <iostream>
using namespace std;

int main()
{
    //example with out type casting
    int num1, num2, num3;
    int sum = 0;
    double average = 0.0;

    cout << "\nEnter 3 numbers with spaces : - ";
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;

    average = static_cast<double>(sum) / 3;

    cout << "\nThe sum is :- " << sum << "\n The average is :- " << average << "\n";

    return 0;
}
