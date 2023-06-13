#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_str;
    cout << "Enter the SSN number:" << endl;
    cin >> input_str;

    int str_length = input_str.length();

    // Check length
    if (str_length != 10)
    {
        cout << "Invalid SSN number" << endl;
        return 0;
    }
    
    for (int i = 0; i < str_length; i++)
    {
        char c = input_str[i];
        if (i >= 5 && i <= 8) // Check digits
        {
            if (!(c >= '0' && c <= '9'))
            {
                cout << "Invalid SSN number" << endl;
                return 0;
            }
        }
        else
        {
            if (!(c >= 'A' && c <= 'Z')) // Check uppercase
            {
                cout << "Invalid SSN number" << endl;
                return 0;
            }
        }
    }

    cout << "Valid SSN number" << endl;
    return 0;
}