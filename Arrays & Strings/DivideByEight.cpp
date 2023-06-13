#include <iostream>
#include <string>
using namespace std;

int main()
{
    int input_num;
    cin >> input_num;

    string input_str = to_string(input_num);
    cout << "Last three digits : " << input_str.substr(input_str.size() - 3) << endl;

    int divisor{8};
    if (input_num % divisor == 0)
    {
        cout << "Number is divisible by " << divisor << endl;
    }
    else
    {
        cout << "Number is not divisible by " << divisor << endl;
    }      
    return 0;
}