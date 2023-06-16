#include <iostream>
using namespace std;

int calculateScore(int sixers, int fours, int singles)
{
    return (
        (sixers * 6) +
        (fours * 4) +
        singles
    );
}
int calculateScore(int whiteCoins, int blackCoins, bool red)
{
    int score = (whiteCoins * 2) + blackCoins;
    return (red) ? (score + 5) : score;
}
int calculateScore(int goals ,int fouls)
{
    return goals - fouls;
}

int main()
{   
    int six, four, single, white, black, goals, fouls;
    bool red;
    cout << "CRICKET:" << endl;
    cout << "Enter number of sixers : ";
    cin >> six;
    cout << "Enter number of fours : ";
    cin >> four;
    cout << "Enter number of singles : ";
    cin >> single;
    cout << "CALCULATED SCORE : " << calculateScore(six, four, single) << endl;

    cout << "CARROM:" << endl;
    cout << "Enter number of white coins pocket : ";
    cin >> white;
    cout << "Enter number of black coins pocket : ";
    cin >> black;
    cout << "Red Pocket(0/1): ";
    cin >> red;
    cout << "CALCULATED SCORE : " << calculateScore(white, black, red) << endl;

    cout << "BASKETBALL:" << endl;
    cout << "Enter number of goals : ";
    cin >> goals;
    cout << "Enter number of fouls : ";
    cin >> fouls;
    cout << "CALCULATED SCORE : " << calculateScore(goals, fouls) << endl;
    return 0;
}