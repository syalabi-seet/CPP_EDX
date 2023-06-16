#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    private:
        static int count;
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;

    public:
        void setEmployeeId(int id){ this->employeeId = id; }
        int getEmployeeId(){ return this->employeeId; }
        void setEmployeeName(string name){ this->employeeName = name; }
        string getEmployeeName(){ return this->employeeName; }
        void setSalary(double sal){ this->salary = sal; }
        double getSalary(){ return this->salary; }
        void setNetSalary(double netSal){ this->netSalary = netSal; }
        double getNetSalary(){ return this->netSalary; } 
        void calculateNetSalary(int pfpercentage);
        void getEmployeeDetails();
        static int generateEmployeeId();
        void display();
};

int Employee::count{100};

int Employee::generateEmployeeId(){
    return count++;
}

void Employee::calculateNetSalary(int pfpercentage){
    double netSal;
    netSal = this->salary * (1 - (pfpercentage / 100.0));    
    setNetSalary(netSal);
}

void Employee::getEmployeeDetails(){
    string name;
    double sal;
    cout << "Enter Name:" << endl;
    cin >> name;
    cout << "Enter salary (In dollars):" << endl;
    cin >> sal;

    setEmployeeName(name);
    setSalary(sal);
}

void Employee::display(){
    cout << "Id: " << getEmployeeId() << endl;
    cout << "Name: " << getEmployeeName() << endl;
    cout << "Net Salary (In dollars): " << getNetSalary() << endl;
}

int main(){
    Employee employee;
    employee.getEmployeeDetails();
    
    int pfpercentage;
    cout << "Enter PF percentage:" << endl;
    cin >> pfpercentage;

    int employeeId = Employee::generateEmployeeId();
    employee.setEmployeeId(employeeId); 

    employee.calculateNetSalary(pfpercentage);

    employee.display();
    return 0;
}