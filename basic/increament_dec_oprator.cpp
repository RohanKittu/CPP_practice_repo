#include <iostream>
using namespace std;

int main()
{
    /*
        increament operator :- ++
        decreament operator :- --
        
        we can use this on pointes,integers and float points.

        note :-
        prefix notation : ++variable
        postfix notation : variable++

    */

    //example 1
    /*
    int result = 0;
    int counter = 10;

    cout << "Before incrementing";
    cout << "\n The result is : " << result;
    cout << "\n The counter is : " << counter << "\n";
    counter = counter + 1; //expected output 11
    counter++;             //expected output 12
    ++counter;             //expected output 13
    cout << "after incrementing incrementing";
    cout << "\n The result is : " << result;
    cout << "\n The counter is : " << counter << "\n";
    */

    //example 2
    int result = 0;
    int counter = 10;

    cout << "pre increment Before incrementing";
    cout << "\n The result is : " << result;
    cout << "\n The counter is : " << counter << "\n";

    //pre increment
    /*
        The below statement means
        result = counter+1
    */
    result = ++counter;
    cout << "after incrementing incrementing";
    cout << "\n The result is : " << result;
    cout << "\n The counter is : " << counter << "\n";

    //post increment
    /*
        The below statement means
        result = counter
        counter = counter+1
    */
    result = 0;
    counter = 10;
    cout << "post increment Before incrementing";
    cout << "\n The result is : " << result;
    cout << "\n The counter is : " << counter << "\n";

    //pre increment
    /*
        The below statement means
        result = counter+1
    */
    result = counter++;
    cout << "after incrementing incrementing";
    cout << "\n The result is : " << result;
    cout << "\n The counter is : " << counter << "\n";
    return 0;
}