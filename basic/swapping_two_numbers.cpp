#include <iostream>
using namespace std;

//passing argument by reference.
void swap(int &num1 , int &num2);
void swap(double &num1 , double &num2);

int main(){

    int n1{0};
    int n2{0};
    double n3{0};
    double n4{0};
    
    cout<<"Enter num1 :- ";
    cin>>n1;
    
    cout<<"Enter num2 :- ";
    cin>>n2;

    cout<<"Enter num3 :- ";
    cin>>n3;

    cout<<"Enter num4 :- ";
    cin>>n4;

    swap(n1,n2);
    swap(n3,n4);

    cout<<"Numbers after swap"<<endl<<"num1 :- "<< n1 << endl <<"num2 :- "<< n2 << endl;
    cout<<"Numbers after swap"<<endl<<"num3 :- "<< n3 << endl <<"num4 :- "<< n4 << endl;
    return 0;
}

void swap(int &num1 ,int &num2){
    int temp{0};
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void swap(double &num1 , double &num2){
    double temp{0};
    temp = num1;
    num1 = num2;
    num2 = temp;
}