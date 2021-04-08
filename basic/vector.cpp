//for input output operations
#include<iostream>
//for vector operations
#include<vector>
//#include <bits/stdc++.h> 
//for checking the type of the variable.
#include <typeinfo>
using namespace  std;

int main(){
    /*
        vectors in cpp (vectors are objects in cpp)
        Its a standerd cpp library ,where we can dynamically allocate the size of memory space which the datastructure requires.
    */
    // declaring an vector.
    vector <int> vo(10) ; 
    //init the vector
    vo = {1,2,3,4,5,6,7,8,9,10};
    //accessing vectors elements by index
    vo[0] = 10;
    vo.push_back(12);

    //accessing vector element by at function
    cout<<"\n The element inside the vector showing by using at function is :- "<<vo.at(0)<<"\n";

    cout<<"\n The element inside the vector is :- "<<vo[0]<<"\n";

    cout<<"\n The size of the vector :- "<<vo.size();



    /*
        Knowing the type of the variable
    */
    float variable = 10;
    int arr[10];
    cout << "\nThe type of the variable is :- " << typeid(variable).name() << endl;
    return 0;
}