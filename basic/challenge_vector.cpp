#include <iostream>
#include <vector>

using namespace std;

int main()
{

    //declare 2 vectors ,vector1 and vector 2 of integers values respectively.
    vector<int> vect1, vect2;

    //add 10 and 20 to vector1 directly by pushback method.
    vect1.push_back(10);
    vect1.push_back(20);

    // display the elements of the vector using at method and its size by the size method.
    cout << "\n The first element in vector 1 is :- " << vect1.at(0);
    cout << "\n The second element in vector 1 is :- " << vect1.at(1);
    cout << "\nThe size of the vector1 is :- " << vect1.size() << "\n";

    //add 10 and 20 to vector2 directly by pushback method.
    vect2.push_back(10);
    vect2.push_back(20);

    // display the elements of the vector using at method and its size by the size method.
    cout << "\n The first element in vetor2 is :- " << vect2.at(0);
    cout << "\n The second element is vector2 :- " << vect2.at(1);
    cout << "\nThe size of the vector2 is :- " << vect2.size() << "\n";

    //declare a empty 2 dim vector.
    vector<vector<int>> vect2d;
    //change the vector 1 starting element to 1000
    vect1.at(0) = 1000;
    vect2d.push_back(vect1);
    //display the elements in the 2d array
    cout << "\n The elements in 2d dim :- " << vect2d.at(0).at(0) << "\n";

    //elements in the vector1
    cout << "\n The first element in vector 1 is :- " << vect1.at(0);
    cout << "\n The second element in vector 1 is :- " << vect1.at(1);
    cout << "\nThe size of the vector1 is :- " << vect1.size() << "\n";
    return 0;
}