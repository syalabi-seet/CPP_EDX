#include <iostream>
#include <cstring>
using namespace std;

void swap(char* const x, char* const y)
{   
    char temp = *y;
    *y = *x;
    *x = temp;
}

char* reverseString (char* p)
{
    int stringLength = strlen(p);

    // Initialize left pointer to be start of string
    char *left = p;

    // Initialize right pointer to be end of string
    char *right = p + stringLength - 1; 
    
    while (left < right)
    {
        swap(left, right);
        left++;
        right--;
    }
    return p;
}

int main()
{
    char str[20];
    cout << "Enter the string" << endl;
    cin >> str;
    
    cout << "Reversed String" << endl;
    cout << reverseString(str) << endl;
    return 0;
}