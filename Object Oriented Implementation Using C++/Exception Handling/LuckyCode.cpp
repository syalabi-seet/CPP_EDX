#include <iostream>
#include <string>
using namespace std;

bool findMiddle(int num)
{
    //Implement your Code here
    string numStr = to_string(num);
    if (numStr.size() % 2 == 0)
    {
        return false;
    }

    int midIndex = (numStr.size() - 1) / 2;
    if (numStr[midIndex] == '5' || numStr[midIndex] == '7')
    {
        return true;
    }
    return false;
}
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    try
    {
        //Implement your Code here
        if (findMiddle(num))
        {
            cout << num << " is a lucky code" << endl;
        }
        else 
        {
            throw runtime_error("Not a lucky code");
        }       
        
    }
    catch(exception &e)
    {
        cerr << e.what() <<endl;
    }
}