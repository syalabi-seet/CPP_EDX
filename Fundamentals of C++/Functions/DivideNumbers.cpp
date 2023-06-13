#include <iostream>
using namespace std;

int divideNumbers(int num)
{
    int array[2];
    int i{0};
    while (num)
    {
        array[i++] = num % 10;
        num /= 10;
    }

    return array[1] / array[0];
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << divideNumbers(num) << endl;
    return 0;
}