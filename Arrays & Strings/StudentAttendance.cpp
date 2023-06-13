#include <iostream>
#include <string>
using namespace std;


int main()
{
    int number_of_students;
    cout << "Enter number of students" << endl;
    cin >> number_of_students;

    string student_numbers[number_of_students];
    string student_names[number_of_students];
    string student_genders[number_of_students];
    for (int i = 0; i < number_of_students; i++)
    {
        cout << "Enter roll number :";
        cin >> student_numbers[i];

        cout << "Enter name :";
        cin >> student_names[i];

        cout << "Enter gender :";
        cin >> student_genders[i];
    }

    string student_number;
    cout << "Enter the roll number of student to view :";
    cin >> student_number;

    int student_id;
    for (int j = 0; j < number_of_students; j++)
    {
        if (student_numbers[j] == student_number)
        {
            student_id = j;
        }
    }
    cout << student_names[student_id] << endl;
    cout << student_genders[student_id] << endl;
    return 0;
}