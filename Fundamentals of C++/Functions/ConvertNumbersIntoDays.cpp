#include <iostream>
using namespace std;

string convertToDays(int num)
{
    string str;
    switch (num)
    {
        case 1:
            str = "Monday";
            break;
        case 2:
            str = "Tuesday";
            break;
        case 3:
            str = "Wednesday";
            break;
        case 4:
            str = "Thursday";
            break;
        case 5:
            str = "Friday";
            break;
        case 6:
            str = "Saturday";
            break;
        case 7:
            str = "Sunday";
            break;     
        default:
            str = "Invalid";       
    }
    return str;
}

int main()
{
    int num;
    cin >> num;
    cout << convertToDays(num) << endl;
    return 0;
}