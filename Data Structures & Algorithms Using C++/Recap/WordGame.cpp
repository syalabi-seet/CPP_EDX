#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;

int main()
{
    char text[20];
    cout << "Enter the string:" << endl;
    cin >> text;

    if (strlen(text) % 2 != 0)
    {
        cout << text << " is a incorrect input" << endl;
        return 0;
    }

    unordered_map<char, int> m;
    for (int i = 0; i < strlen(text); i++)
    {
        m[text[i]]++;        
    }


    for (auto c: m)
    {
        if (c.second == 1)
        {   
            cout << text << " is not a valid string" << endl;
            return 0;
        }
    }

    cout << text << " is a valid string" << endl;
    return 0;
}