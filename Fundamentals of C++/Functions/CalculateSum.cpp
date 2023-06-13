#include <iostream>
using namespace std;

// Recursive sum
int calculateSum(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return (num % 10) + calculateSum(num / 10);
}

int main()
{
    // Input number
    int num;
    cout << "Enter the number:";
    cin >> num;

    cout << calculateSum(num) << endl;
    return 0;
}