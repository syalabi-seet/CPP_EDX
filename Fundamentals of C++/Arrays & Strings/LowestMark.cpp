#include <iostream>
using namespace std;

int main()
{
    bool mark_violation{false};
    
    // Get inputs
    int number_of_semesters;
    cout << "Enter number of semesters:" << endl;
    cin >> number_of_semesters;

    int min_marks[number_of_semesters]; // Highest marks possible
    for (int semester_id = 0; semester_id < number_of_semesters; semester_id++)
    {
        int number_of_subjects;
        cout << "Enter number of subjects in semester " << semester_id + 1 << ":" << endl;
        cin >> number_of_subjects;

        int min_mark{100};
        cout << "Marks obtained in semester " << semester_id + 1 << ":" << endl;
        for (int subject_id = 0; subject_id < number_of_subjects; subject_id++)
        {
            int marks;
            cin >> marks;  
            if (marks >= 0 && marks <= 100)
            {
                if (marks < min_mark)
                {
                    min_mark = marks;
                }
            }
            else
            {
                mark_violation = true;
            }
        }
        min_marks[semester_id] = min_mark;
    }

    if (mark_violation == true)
    {
        cout << "You have entered invalid mark" << endl;
        return 0;
    }

    for (int i = 0; i < number_of_semesters; i++)
    {
        cout << "Minimum mark in semester " << i+1 << ":" << min_marks[i] << endl;
    }

    return 0;
}