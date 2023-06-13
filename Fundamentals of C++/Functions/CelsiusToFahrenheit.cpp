#include <iostream>
using namespace std;

float celsiustoFahrenheitConversion(float num)
{
    return (num * 9 / 5) + 32;
}

int main()
{
    float num;
    cin >> num;
    cout << celsiustoFahrenheitConversion(num) << endl;
    return 0;
}