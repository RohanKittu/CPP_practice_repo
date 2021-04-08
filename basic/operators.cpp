#include <iostream>
using namespace std;

int main(){
    /*
        various operators in cpp
        + 
        -
        *
        /
        % ,This will work only on integers.

        +,-,*,/ all these operators are overloaded for all types of data type int,float,double etc

        note :- for % it only works on int type data type.
    */
   /*
    operators basic applications , dollers to rupee conversions
   */
    const float one_doller_cost = 73.66;
    int amout_in_dollers = 0;
    cout<<"\nOne doller = "<<one_doller_cost<<"Rs. ";
    cout<<"\nEnter how many dollers you have :-";
    cin>>amout_in_dollers;
    cout<<"\nYour will get "<< amout_in_dollers*one_doller_cost <<"Rs. after conversion.\nThank you\n";
    return 0;
}