#include <iostream>
using namespace std;

struct Employee
{
    int empid;
    int basicsalary;
    int pf;
    int med;
    float sales;

    int calc_NetSalary()
    {
        return (
            Employee::basicsalary -
            Employee::pf -
            Employee::med
        );
    }
    int calc_Bonus()
    {
        int bonusAmount;
        if (Employee::sales <= 10)
        {
            if (Employee::basicsalary <= 7000)
            {
                bonusAmount = 1500;
            }
            else if (Employee::basicsalary > 7000 && Employee::basicsalary <= 15000)
            {   
                bonusAmount = 2000;
            }
            else
            {
                bonusAmount = 2500;
            }
        }
        else
        {
            if (Employee::basicsalary <= 7000)
            {
                bonusAmount = 3000;
            }
            else if (Employee::basicsalary > 7000 && Employee::basicsalary <= 15000)
            {   
                bonusAmount = 4000;
            }
            else
            {
                bonusAmount = 4500;
            }
        }
        return bonusAmount;
    }
};

int main()
{
    Employee employee;

    cout << "Enter the employee id" << endl;
    cin >> employee.empid;

    cout << "Enter the basic salary" << endl;
    cin >> employee.basicsalary;

    cout << "Enter the PF amount" << endl;
    cin >> employee.pf;

    cout << "Enter the mediclaim amount" << endl;
    cin >> employee.med;

    cout << "Enter the sales percentage" << endl;
    cin >> employee.sales;

    if (
        employee.basicsalary < 0 ||
        employee.pf < 0 ||
        employee.med < 0 ||
        employee.sales < 0
    )
    {
        cout << "Unable to Calculate Salary" << endl;
        return 0;
    }

    cout 
        << "Total Salary with Bonus is $"
        << employee.calc_NetSalary() + employee.calc_Bonus()
        << endl;
        
    return 0;
}