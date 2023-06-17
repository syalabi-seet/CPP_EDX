#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter the number of eggs" << endl;
    cin >> n;

    float weight[n];
    int ideal = 0;
    int nonIdeal = 0;
    int faulty = 0;
    cout << "Enter the weight of the eggs(in grams)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        if (weight[i] < 50)
        {
            faulty++;            
        }
        else if (weight[i] > 70)
        {
            nonIdeal++;
        }
        else
        {
            ideal++;
        }
    }

    if (faulty > 4)
    {
        cout << "The box  contains more than four faulty eggs" << endl;
        return 0;
    }

    cout << "Count of eggs with ideal weight=" << ideal << endl;
    cout << "Count of eggs with non-ideal weight=" << nonIdeal << endl;
    cout << "Count of eggs with faulty weight=" << faulty << endl;
    return 0;
}