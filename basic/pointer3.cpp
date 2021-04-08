#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int a{100};
    int b{200};
    int *ptr{nullptr};
    ptr = &a;

    cout<<"Before de referencing the pointer :- "<< *ptr << endl;
    *ptr = b;
    cout<<"after de referencing the pointer :- "<< *ptr << endl;

    //pointer for string objects.
    string s1{"hello world"};
    string s2{"This is the new world"};
    string *s{nullptr};
    s = &s1;
    cout<<"pointer sting pointing to ;- "<< *s << endl;
    s = &s2;
     cout<<"pointer sting pointing to ;- "<< *s << endl;

     //pointer with vectors 
     vector<string> x{"hello","rohan","what 's up","?"};
     vector<string> *vs{nullptr};
     vs = &x;
     
     cout<<"The first value in the vector : "<<(*vs).at(0)<<endl;

     for(auto x : *vs){
         cout << x << endl;
     }

    return 0;
}