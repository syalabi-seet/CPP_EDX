#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char box[5][10];

    strcpy(box[0], "bk101");

    for (int i=0; i < 5; i++)
    {
        cout << box[i] << endl;
    }   

    return 0;
}