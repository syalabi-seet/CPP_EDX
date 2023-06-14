#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    public:
        int getEmployeeId()
        {
            return Employee::employeeId;
        }
        string getEmployeeName()
        {
            return Employee::employeeName;
        }
        double getSalary()
        {
            return Employee::salary;
        }
        double getNetSalary()
        {
            return Employee::netSalary;
        }
        void setEmployeeId(int id)
        {
            Employee::employeeId = id;
        }
        void setEmployeeName(string name)
        {
            Employee::employeeName = name;
        }
        void setSalary(double salary)
        {
            Employee::salary = salary;
        }
        void setNetSalary(double pf)
        {
            calculateNetSalary(pf);
        }
        void calculateNetSalary(int pfpercentage)
        {
            Employee::netSalary = Employee::salary - (Employee::salary * pfpercentage) / 100;
        }
};

int main()
{
    int id;
    string name;
    double sal;
    float pf;
    cout << "Enter Id:" <<endl;
    cin >> id;
    cout << "Enter Name:" << endl;
    cin >> name;
    cout << "Enter salary:" << endl;
    cin >>sal;
    cout <<"Enter PF percentage:" << endl;
    cin >> pf;

    Employee employee;
    employee.setEmployeeId(id);
    employee.setEmployeeName(name);
    employee.setSalary(sal);
    employee.setNetSalary(pf);

    cout << "Id:" << employee.getEmployeeId() << endl;
    cout << "Name:" << employee.getEmployeeName() << endl;
    cout << "Salary:" << employee.getSalary() << endl;
    cout << "Net Salary:" << employee.getNetSalary() << endl;
    return 0;
}