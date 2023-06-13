#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_str;
    cin >> input_str;

    char first_char = input_str.front();
    char last_char = input_str.back();

    input_str.front() = last_char;
    input_str.back() = first_char;

    cout << input_str << endl;

    return 0;
}