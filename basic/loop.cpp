#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int scores[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vo(10);
    for (int i = 0; i < 10; i++)
    {
        vo.push_back(i);
    }
    cout << "\n The vector size is :- " << vo.size();
    //enum key word
    // Defining enum Gender
    enum Gender
    {
        Male,
        Female
    };
    // Creating Gender type variable
    Gender gender = Male;

    //ranging for loop
    for (int score : scores)
        cout << score << endl;

    for (auto score : scores)
        cout << score << endl;
    return 0;
}