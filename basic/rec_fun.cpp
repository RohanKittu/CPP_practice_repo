/* printing 10 number by recurression functions*/
#include <iostream>
using namespace std;

void print_num(int num);
int main(){
    int num{0};
    cout << "Enter how many number you want to print :- ";
    cin>>num;
    print_num(num);
    return 0;
}
void print_num(int num){
    if(num == 0){
        cout<< num << endl;
    }else{
        cout<< num << endl;
        print_num(num-1);
    }
}