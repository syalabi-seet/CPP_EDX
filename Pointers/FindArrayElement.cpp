#include <iostream>
using namespace std;

int findArrayElement(int* p, int element, int size)
{
    int *left = p;
    int *right = p + size - 1;

    
    return 0;
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

    int searchElement;
    cout << "Enter the element to search:" << endl;
    cin >> searchElement;

    cout << findArrayElement(array, searchElement, size) << endl;
    return 0;
}