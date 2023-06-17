#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of income sources:";
    cin >> n;

    int a[n];
    int c{0};
    cout << "Enter the income from various sources:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= 9950) 
        {
            c++;
        }
    }

    if (c == n)
    {
        cout << "Not liable to pay income tax" << endl;
    }
    else
    {
        cout << "No. of taxable income(s): " << n - c << endl;
    }
    
    return 0;
}