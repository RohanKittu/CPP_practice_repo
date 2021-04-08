#include <iostream>
using namespace std;

int main()
{   
    int num_big_room = 0;
    int num_small_room = 0;
    const float tax_rate = 6.0;
    const long int cost_big_room= 300;
    const long int cost_samll_room = 250;
    cout<<"\n carpet cleaning service \n cost of cleaning per room given below \n --------------------------" ;
    cout<<"\n Big room :- "<< cost_big_room<<"rs"<< "\n Small room :- "<< cost_samll_room <<"\n --------------------------";


    cout<<"\n Enter the number of big size rooms you want service for :- ";
    cin>> num_big_room;
    cout<<"\n Enter the number of small size rooms you want service for :- ";
    cin>> num_small_room;

    cout<<"\n--------------------------\nThe service cost : "<< (num_big_room*cost_big_room)+(num_small_room*cost_samll_room) <<"rs\n";
    cout<<"Tax : "<< tax_rate << "%";
    cout<<"\nThe total cost is : "<< (num_big_room*cost_big_room)+(num_small_room*cost_samll_room)+(tax_rate/100)*(num_big_room*cost_big_room)+(num_small_room*cost_samll_room) <<"\n";
    return 0;
}