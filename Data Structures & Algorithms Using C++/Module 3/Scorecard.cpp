#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the no. of hurdles:";
    cin >> N;

    if (N > 0 && N <= 100)
    {
        int hurdles[N];
        for (int i = 0; i < N; i++)
        {
            cout << "Enter the hurdle height " << i+1 << ":";
            cin >> hurdles[i];
        }    

        cout << "Latest hurdle race scores are: ";
        for (int j = N - 5; j < N; j++)
        {
            cout << hurdles[j] << " ";
        }
    }
    else
    {
        cout << "Invalid no. of hurdles" << endl;
        return 0;
    }
    return 0;
}