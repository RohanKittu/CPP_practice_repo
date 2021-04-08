/*
    cpp strings. 
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    /*
        string name{"rohan"};
    string name_emp{"gudi gudi"};
    name = "purna sai";
    // string concat in c++ string
    cout << name + "" + name_emp << endl;
    */
    //init cpp string
    //note st1 is the object of string class
    string st1;
    string st2{"Apple"};
    string st3{"Banana"};
    string st4{"Kiwi"};
    string st5{"apple"};
    string st6{st2};
    string st7{st2, 0, 3};
    string st8(10, 'X');

    cout << "\n The outputs of above variable :- " << endl;
    cout << "st1 :- " << st1 << endl;
    cout << "st2 :- " << st2 << endl;
    cout << "st3 :- " << st3 << endl;
    cout << "st4 :- " << st4 << endl;
    cout << "st5 :- " << st5 << endl;
    cout << "st6 :- " << st6 << endl;
    cout << "st7 :- " << st7 << endl;
    cout << "st8 :- " << st8 << endl;

    //finding the lenght of the string
    cout << "st1 lenght :- " << st1.length() << endl;
    cout << "st2 lenght :- " << st2.length() << endl;
    cout << "st3 lenght :- " << st3.length() << endl;
    cout << "st4 lenght :- " << st4.length() << endl;
    cout << "st5 lenght :- " << st5.length() << endl;
    cout << "st6 lenght :- " << st6.length() << endl;
    cout << "st7 lenght :- " << st7.length() << endl;
    cout << "st8 lenght :- " << st8.length() << endl;

    //string comparasions
    bool check;
    cout << (st2 == st2) << endl;
    cout << (st2 != st2) << endl;
    cout << (st3 > st2) << endl;
    cout << (st4 < st2) << endl;
    cout << (st4 >= st3) << endl;
    cout << (st2 == "apple") << endl;

    // string assignment
    /* note :-

        charactors are declared in ' '
        strings are declared in " "

     */

    string s1 = "crank";
    cout << "s1 :- " << s1 << endl;
    st1 = s1;
    cout << "st1 after assignmet :- " << st1 << endl;
    st1.at(0) = 'a';
    cout << "s1 after replacemnt of charactor :- " << st1 << endl;
    st1[0] = 'b';
    cout << "s1 after replacemnt of charactor :- " << st1 << endl;

    // string concat operations
    string sq1 = "string";
    string sq2 = "concat";

    cout << "string 1 is :- " << sq1 << endl;
    cout << "string 2 is :- " << sq2 << endl;
    cout << "string after concat is :- " << sq1 + " " + sq2 << endl;

    // looping the string
    //looping by index
    string sub_st = "hello world";
    cout << "looping by index" << endl;
    for (size_t index{0}; index < sub_st.length(); index++)
    {
        cout << sub_st.at(index) << endl;
    }
    cout << "looping by advance looping" << endl;
    for (auto charactor : sub_st)
    {
        cout << charactor << endl;
    }

    //sub string
    string sw = "the world is beautiful";
    cout << sw.substr(0, 3) << endl;

    //erasing the strings and sub string
    sw = "This is a test";
    cout << sw.erase(0, 4) << endl;

    //reading then sentence from the user
    string sentence{};
    cout << "\nPlease enter the sentence :- ";
    getline(cin, sentence);
    cout << "your entered sentence is :- " << sentence << endl;

    // finding the sub string
    string word{};
    cout << "Enter the word which you want to find :- ";
    cin >> word;

    string sentences = "The India is great country";

    cout << "The position of the word is :- " << sentences.find(word) << endl;
    return 0;
}