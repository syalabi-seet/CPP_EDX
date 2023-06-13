#include <iostream>
#include <string.h>
using namespace std;

struct DateOfBirth
{
    int date, month, year;
};

struct Student
{
    string name;
    int roll;
    DateOfBirth dob;
};

int main()
{
    Student student;

    cout << "Enter name: ";
    cin >> student.name;

    cout << "Enter roll number: ";
    cin >> student.roll;

    cout << "Enter Date of Birth [DD MM YY] format: ";
    cin >> student.dob.date;
    cin >> student.dob.month;
    cin >> student.dob.year;

    if (student.roll <= 0)
    {
        cout << "Invalid roll number" << endl;
        return 0;
    }

    if (
        (student.dob.date <= 0 || student.dob.date > 31) ||
        (student.dob.month <= 0 || student.dob.month > 12) ||
        (student.dob.year <= 0)
    )
    {
        cout << "Invalid date" << endl;
        return 0;
    }

    cout << "Name : " << student.name << endl;
    cout << "RollNo : " << student.roll << endl;
    cout 
        << "Date of birth : " 
        << student.dob.date 
        << "/"
        << student.dob.month
        << "/"
        << student.dob.year
        << endl;
    return 0;
}