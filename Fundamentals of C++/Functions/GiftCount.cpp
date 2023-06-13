#include <iostream>
using namespace std;

int Pow(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    return base * Pow(base, power - 1);
}

int countGift(int age)
{
    if (age <= 0)
    {
        return -1;
    }

    int power = (age % 2 == 0) ? 3 : 2;    
    return Pow(age, power);
}

int main()
{
    int age;
    cout << "Enter the age:";
    cin >> age;
    cout << countGift(age) << endl;
    return 0;
}