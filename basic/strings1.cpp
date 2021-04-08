#include <iostream>
//this library is for strings
#include <cstring> // for string functions
#include <cctype>  //for ctype string functions
using namespace std;

int main()
{
    char first_name[30]{};
    char last_name[30]{};
    char full_name[30]{};
    char temp[50]{};
    //cout << "\nThe first name is :- " << first_name; //this will most likely will display garbage

    cout << "---------------------------------";

    cout << "\nEnter your first name :- ";
    cin >> first_name;

    cout << "\nEnter your last name :- ";
    cin >> last_name;

    cout << "---------------------------------";

    //finding the length of the string
    cout << "\nhello " << first_name << "The length of the string is " << strlen(first_name) << " charactors";
    cout << " and your last name is " << last_name << "The lenght of the string is " << strlen(last_name) << " charactors\n";

    //copy and concat of the string
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "\n Your full name after concat is :- " << full_name << endl;

    //reading lines of text.
    cout << "\nEnter the full name :- ";
    cin.getline(full_name, 50);

    cout << "\n full name you entered is :- " << full_name << endl;

    return 0;
}