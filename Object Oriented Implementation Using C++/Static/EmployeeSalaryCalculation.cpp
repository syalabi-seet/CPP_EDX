#include <iostream>
#include <string.h>
using namespace std;

class Employee{
    private:
        int count;
        int employeeId;
        string employeeName;
        double salary;
        double netSalary;
    
    public:
        void setEmployeeId(int id){
            employeeId = id;
        }
        int getEmployeeId(){
            return employeeId;
        }
        void setEmployeeName(string name){
            this->employeeName = name;
        }
        string getEmployeeName(){
            return this->employeeName;
        }
        void setSalary(double sal){
            this->salary = sal;
        }
        double getSalary(){
            return this->salary;
        }
        void setNetSalary(double netSal){
            this->netSalary = netSal;
        }
        double getNetSalary(){
            return this->netSalary;
        }
        void calculateNetSalary(int pfpercentage){
            netSalary = salary * (1 - (pfpercentage/100));
        }
        void display(){
            cout << "Id: " << employeeId << endl;
            cout << "Name: " << employeeName << endl;
            cout << "Net Salary (In dollars): " << netSalary << endl;
        }
        void getEmployeeDetails(){
            cout << "Enter Name:" << endl;
            cin >> employeeName;
            cout << "Enter salary (In dollars):" << endl;
            cin >> salary;            
        }
        static int generateEmployeeId(int id){
            
        }
};

int main(){
    //create object for Employee class
    Employee employee;
    employee.getEmployeeDetails();
    
    int pfpercentage;
    cout<<"Enter PF percentage:"<<endl;
    cin>>pfpercentage;

    int Employee::generateEmployeeId(employee.);
    
    return 0;
}