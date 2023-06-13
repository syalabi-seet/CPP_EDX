#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, int> mapping = {
    {'A', 1},
    {'B', 2},
    {'C', 3},
    {'D', 4},
    {'E', 5},
    {'F', 8},
    {'G', 3},
    {'H', 5},
    {'I', 1},
    {'J', 1},
    {'K', 2},
    {'L', 3},
    {'M', 4},
    {'N', 5},
    {'O', 7},
    {'P', 8},
    {'Q', 1},
    {'R', 2},
    {'S', 3},
    {'T', 4},
    {'U', 6},
    {'V', 6},
    {'W', 6},
    {'X', 5},
    {'Y', 1},
    {'Z', 7}
};

int main()
{
    string name;
    cout << "Enter your name:" << endl;
    getline(cin, name);

    int lucky_number{0};
    for (char k: name)
    {
        if ((int(k) >= int('A')) && (int(k) <= 'Z'))
        {
            lucky_number += mapping.at(k);
        }
        else
        {
            cout << "Invalid name" << endl;
            return 0;
        }
    }

    cout << "Your lucky number is:" << lucky_number << endl;
    return 0;
}