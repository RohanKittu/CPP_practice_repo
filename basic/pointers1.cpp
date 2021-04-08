#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
    Note :- 
    1) we should always initilize the pointers nullptr ,where it will be init to zero.
    2) dont confuse to the size of the pointer and what it is pointing to.
    3) The size fof the pointer for all the variables would be same, as pointer is just a variable.
    4) The size of the variable which holds the address is always 8 bytes.
*/
int main(){
    cout<<endl<<"-------------------------------------------------------------"<<endl;
    cout<<"pointer init testing"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    int *p;
    cout << "Pointer before init : "<< p << endl;
    p = nullptr;
    cout<< "value of p : "<< p;
    cout<< endl << "Address of p : "<< &p;
    cout<< endl << "size of p : "<< sizeof p << endl;
    cout<<"--------------------------------------------------------------------"<<endl<<endl<<endl;

    cout<<endl<<"-------------------------------------------------------------"<<endl;
    cout<<"proving all pointer variable will have same size"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    string *ptr1{nullptr};
    vector<string> *ptr2{nullptr};
    unsigned long long *ptr3{nullptr};
    double *ptr4{nullptr};

    cout << endl << "The size of pointer variable which is pointing to string : "<< sizeof ptr1;
    cout << endl << "The size of pointer variable which is pointing to vector : "<< sizeof ptr1;
    cout << endl << "The size of pointer variable which is pointing to long long : "<< sizeof ptr1;
    cout << endl << "The size of pointer variable which is pointing to double : "<< sizeof ptr1 << endl;
    
    return 0;
}