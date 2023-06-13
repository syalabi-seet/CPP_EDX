#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inmate_name;
    cout << "Inmate's name : ";
    getline(cin, inmate_name);

    string father_name;
    cout << "Inmate's father's name : ";
    getline(cin, father_name);

    string result_str = inmate_name + " " + father_name;
    for (int i = 0; i < result_str.size(); i++)
    {
        if (((int(result_str[i]) >= 'A') && (int(result_str[i]) <='Z')) || (result_str[i] == ' ')) // Uppercase
        {
            continue;
        }
        else if ((int(result_str[i]) >= 'a') && (int(result_str[i]) <='z')) // Lowercase
        {
            result_str[i] = char(int(result_str[i]) - 32);
        }
        else
        {
            cout << "INVALID NAME" << endl;
            return 0;
        }
    }

    cout << result_str << endl;

    return 0;
}