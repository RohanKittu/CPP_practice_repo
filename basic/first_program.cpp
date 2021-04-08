/*
    My first program of cpp

    To run cpp programm 
    compile :
    g++ -std=c++11 your_file.cpp -o main

    To run binary file :-
    ./main    
*/
//this library contains the cin cout and other file handling commands in cpp

// int argc,char **argv command line arguments
#include <iostream>
//using namespace std;
int main()
{
    //variable declaration
    int fav_num, dummy;
    //input output functions.
    std::cout << "Enter your fav number :- ";
    std::cin >> fav_num;
    std::cout << fav_num << " yes this is my fav number\n";
    std::cout << "yes really this is my fav number"
              << "\n";

    /*variables */
    int y = 10;
    unsigned int z = 30;
    // you can find the size of any variable which is stored in RAM.THIS is the advantage of playing with the low level language.
    // the size of the variable to confined to the complier and the system we work ,so every time we need to check the size.
    std::cout << "size of int :- " << sizeof(int) << "bytes \n";
    std::cout << "size of unsigned int:- " << sizeof(unsigned int) << "bytes \n";
    std::cout << "size of float :- " << sizeof(float) << "bytes \n";
    std::cout << "size of float :- " << sizeof(float) << "bytes \n";
    std::cout << "size of double :- " << sizeof(double) << "bytes \n";
    std::cout << "size of char :- " << sizeof(char) << "bytes\n";
    std::cout << "size of an variable :- " << sizeof y << "bytes \n";

    /*constant*/

    return 0;
}

// to compile cpp file we use "g++ file_name.cpp"
// to run the compiled file we use "./a.out"
