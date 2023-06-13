#include <iostream>
using namespace std;

int main()
{
    int size_of_array;

    cout << "Enter the size of an array:" << endl;
    cin >> size_of_array;

    // Guard clause
    if (size_of_array <= 0)
    {
        cout << "Invalid array size" << endl;
        return 0; // Early exit
    }

    int elements[size_of_array];
    int element;
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < size_of_array; i++)
    {
        cin >> elements[i];
    }

    int print_count{0};
    for (int element: elements)
    {
        if (element > 0 && element < 10)
        {
            if (element % 2 == 0)
            {
                cout << element;
                print_count++;
            }
        }
    }

    if (print_count == 0)
    {
        cout << "Single digit even number is not found in the array" << endl;
    }

    return 0;
}