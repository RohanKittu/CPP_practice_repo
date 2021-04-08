#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> temperatures{2.4, 6.7, 80.0, 10.0};
    vector<int> vec{1, 2, 3, 4, 5, 6};

    unsigned int result{0};
    cout << vec.size() << endl;
    if (vec.size() > 1)
    {
        for (unsigned int index = 0; index < vec.size() - 1; index++)
        {
            for (unsigned int index2 = index + 1; index2 <= vec.size() - 1; index2++)
            {
                result += vec.at(index) * vec.at(index2);
            }
        }
    }
    cout << result << endl;
    return 0;
}
