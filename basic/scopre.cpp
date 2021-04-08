#include <iostream>
using namespace std;

//global varaible
int num = 0;
void global_varaible_init(int x);
void local_variable_init(int x);
void static_variable_init(int x);
int main()
{
    int num{20};
    cout << "printing num in the main function :- " << num;
    {
        int num{10};
        cout << "printing num in scope of the main function :- " << num;
    }
    global_varaible_init(23);
    local_variable_init(24);
    static_variable_init(56);
    return 0;
}
void global_varaible_init(int x)
{
    num += x;
    cout << "global num increament by x :- " << num;
}
void local_variable_init(int x)
{
    int num = x;
    cout << "\nInit local num in global fuction :- " << num;
}
void static_variable_init(int x)
{
    //the static num variable will change only first time call of the function call.
    static int num{90};
    num += x;
    cout << "\n the static num :- " << num;
}