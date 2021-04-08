#include <iostream>
#include <string>
using namespace std;

//passing vector to function
void print_charactors(vector <string>s1()){
    for (string str : s1){
        for (auto charactor : str){
            cout<< charactor << endl;
        }
        cout << endl;
    }
}
// note if we passing array as an argument ,the we should always pass its size to the function.
void print_charactors(char arr[],size_t size){
    for (int index = 0 ; index < size ; index++){
        cout << arr[index] << endl;
    }
}
int main(){
    vector <int>s1{1,2,3};
    //{"hello","world","how is everything going?"};
    char ar[]{'h','e','l','l','o'};

    cout<<"List of charactors in a string :"<<endl;
    print_charactors(s1);
    //cout<<"List of charactors in a string :"<<endl;
    //print_charactors(ar,5);
    return 0;
}