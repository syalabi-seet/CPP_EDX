#include <iostream>
#include<string.h>
using namespace std;

bool eligibilityForSchool(int age) 
{
    //Implement the code here 
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

int main() 
{
    //Fill the code here
    int age;
    cout << "Enter the age" << endl;
    cin >> age;

    try 
    {
        //Implement the code here 
        if (eligibilityForSchool(age))
        {
            cout << "Eligible for Admission" << endl;
        }
        else
        {
            throw ("Not eligible for Admission");
        }
        
    } catch (const char* msg) 
    {
        cerr << msg << endl;
    }
}
