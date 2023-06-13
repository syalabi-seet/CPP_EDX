#include <iostream>
using namespace std;

int findArrayElement(int* p, int element, int size)
{
    // 
    int *left = p;
    while (left < (p + size))
    {
        if (*left == element)
        {
            return left - p;
        }
        left++;
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int array[size];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int element;
    cout << "Enter the element to search:" << endl;
    cin >> element;

    cout << findArrayElement(array, element, size) << endl;
    return 0;
}