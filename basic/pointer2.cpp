#include <iostream>
using namespace std;

int main(){
    int x{20};
    int *ptr{nullptr};
    cout<< "The size of the variable : "<< sizeof x;
    cout<< endl << "The size of the address : "<< sizeof &x << endl;
    //the ptr is pointing to this address.
    ptr = &x;
    cout<<"The address of x contains :- "<<&x<<endl;
    cout<<"The ptr contains :- "<<ptr<<endl;
    cout<<"The value of *ptr points to :- "<<*ptr<<endl;
    cout<<"The size of ptr :- "<< sizeof ptr<<endl;
    return 0;
}