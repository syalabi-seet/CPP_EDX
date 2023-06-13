#include <iostream>
#include <string>
using namespace std;


int main()
{
    string email;
    cin >> email;

    int at_idx = -1;
    int dot_idx = -1;
    for (int i = 0; i < email.length(); i++)
    {
        char c = email[i];
        if (c == '.')
        {
            dot_idx = i;
        }
        else if (c == '@')
        {
            at_idx = i;
        }
    }

    if (dot_idx > at_idx)
    {
        cout << "Valid email Id" << endl;
    }
    else 
    {
        cout << "Invalid email Id" << endl; 
    }
    return 0;
}