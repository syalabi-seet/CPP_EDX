#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_string;

    cin >> input_string;

    int first_digit = input_string.front() - '0';
    int last_digit = input_string.back() - '0';

    cout << first_digit * last_digit << endl;
    
    return 0;
}