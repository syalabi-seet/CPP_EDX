#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int stringLength(char* str)
{
    int i{0};
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}

int main()
{
    char str[20];
    cin.getline(str, 20);

    cout << stringLength(str) << endl;
    
    return 0;
}