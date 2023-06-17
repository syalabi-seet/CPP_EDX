#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of assignments:" << endl;
    cin >> n;

    if (n > 10)
    {
        cout << "No. of assignments must not be more than 10" << endl;
        return 0;
    }

    int scores[n];
    float totalScore{0.0};
    cout << "Enter the scores:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
        totalScore += scores[i];
    }

    float averageScore = totalScore / n;

    cout << "The average score is " << averageScore << endl;

    if (averageScore >= 80)
    {
        cout << "Eligible for projects" << endl;
    }
    else
    {
        cout << "Not eligible for projects" << endl;
    }   
    
    return 0;
}