#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    string name;
    int scores[5];
};

int main()
{
    int numberOfTrainees;
    cin >> numberOfTrainees;

    int lowestMarks{1000};
    string omitName;
    Employee employees[numberOfTrainees];
    for (int i = 0; i < numberOfTrainees; i++)
    {
        cin >> employees[i].name;

        int totalMarks{0}; 
        for (int j = 0; j < 5; j++)
        {
            cin >> employees[i].scores[j];
            totalMarks += employees[i].scores[j];
        }
        if (totalMarks < lowestMarks)
        {
            lowestMarks = totalMarks;
            omitName = employees[i].name;
        }
    }

    if (numberOfTrainees == 1)
    {
        cout << "Only one person has taken up the test" << endl;
        return 0;
    }

    cout << "The list of Employees who have scored highest marks" << endl;
    for (Employee employee: employees)
    {
        if (employee.name != omitName)
        {
            cout << employee.name << endl;
        }
    }

    return 0;
}