#include <iostream>

//vector
#include <vector>

//library for knowing the type of the variable
//ddd
#include <typeinfo>
using namespace std;
/*
array is the datastructure where all the same type datatype data gets stored in a sequence manner in the RAM
An array is an fixed size memory.we can not define the size dynamically.
*/
int main()
{
    //declaring an single dimension array
    int first_array[5] = {0, 1, 2, 3, 4};

    //printing an array
    cout << "\n array address of first element in the array :- " << first_array;

    //array indexing
    cout << "\n 1st element :- " << first_array[0];
    cout << "\n 2nd element :- " << first_array[1];
    cout << "\n 3rd element :- " << first_array[2];
    cout << "\n 4th element :- " << first_array[3];
    cout << "\n 5th element :- " << first_array[4];

    //assiging  a value to an array element
    first_array[0] = 10;
    cout << "\n 1st element after assignmet :- " << first_array[0] << "\n";

    //creating a charactor array
    char name[] = {'r', 'o', 'h', 'a', 'n'};

    // declaring multi dim array
    int m[2][2] = {1, 2, 3, 4};

    return 0;
}