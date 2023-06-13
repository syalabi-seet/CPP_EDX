#include <iostream>
using namespace std;

void swap(int* const x, int* const y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int* array, int size)
{
    for (int j = 0; j < size; j++)
    {
        cout << array[j] << endl;
    }
}

int* sortArray(int* ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        // Find minimum element in array
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[j] < ptr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swap the found minimum element with first element
        if (min_idx != i)
        {
            swap(ptr[min_idx], ptr[i]);
        }
    }
    return ptr;
}

int main()
{
    int array_size;
    cout << "Enter the size of the array" << endl;
    cin >> array_size;

    int array[array_size];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < array_size; i++)
    {
        cin >> array[i];
    }

    printArray(sortArray(array, array_size), array_size);
    return 0;
}