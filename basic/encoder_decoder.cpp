#include <iostream>
#include <string>
using namespace std;

int main()
{
    string message{};
    string encript_message;
    string letters{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789 ?,.:;'"};
    string letter_code{"@()!#$%^&*_-+=0987654321:;>.<,?/}]{[AbQwZzPpGYgyHhJjLKTlkt~`MmfOoaBCc"};

    cout << "Enter your message :- ";
    getline(cin, message);
    cout << "-----------------------------------------------------" << endl;
    for (char charactor : message)
    {
        if (letters.find(charactor) > letters.length())
        {
            encript_message = encript_message + charactor;
        }
        else
        {
            encript_message = encript_message + letter_code.at(letters.find(charactor));
        }
    }
    message = message.erase(0, message.length());
    cout << "Message encripterd :- " << encript_message << "\nMessage sent" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Message recived" << endl;
    //encripted message charactor
    unsigned int index = 0;
    for (auto charactor : encript_message)
    {
        //charactor from database
        for (auto charactor2 : letter_code)
        {
            if (charactor2 == charactor)
            {
                message = message + letters.at(index);
                index += 1;
                break;
            }
            index += 1;
        }
        if (index > letters.length())
        {
            message = message + charactor;
        }
        index = 0;
    }
    cout << "Message decoded" << endl;
    cout << message << endl;
    cout << "-----------------------------------------------------" << endl;
    return 0;
}
