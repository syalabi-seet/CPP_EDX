#include <iostream>
using namespace std;

class Company{
    private:
        static string companyName;
        static string address;
        static long int contactNumber;  
    public:
        static void displayCompanyDetails();
        static string getCompanyName(){
            return companyName;
        }
        static string getAddress(){
            return address;
        }
        static long int getContactNumber(){
            return contactNumber;
        }
        static void setCompanyName(string cName){
            companyName = cName;
        }        
        static void setAddress(string cAddress){
            address = cAddress;
        }        
        static void setContactNumber(long int cNumber){
            contactNumber = cNumber;
        }
};

void Company::displayCompanyDetails(){
    cout << "Company Name:" << getCompanyName() << endl;
    cout << "Address:" << getAddress() << endl;
    cout << "Contact Number:" << getContactNumber() << endl;
}

string Company::companyName = "TekSoft";
string Company::address = "Los Angeles";
long int Company::contactNumber = 422245673;

class Employee{
    private:
        string empName;
        int empId;
        double netSalary;
        Company cObj;
    public:
        void getEmployeeDetails();
        int calculateBonusPercentage();
        void displayEmployeeDetails();

        void setEmpName(string name){
            this->empName = name;
        }
        void setEmpId(int id){
            this->empId = id;
        }
        void setNetSalary(double net){
            this->netSalary = net;
        }
        void setCObj(Company c){
            this->cObj = c;
        }

        string getEmployeeName(){
            return this->empName;
        }        
        int getEmployeeId(){
            return this->empId;
        }        
        double getNetSalary(){
            return this->netSalary;
        }        
        Company getCObj(){
            return this->cObj;
        }
};

void Employee::getEmployeeDetails(){
    string name;
    cout << "Enter Employee Name:" << endl;
    cin >> name;

    int id;
    cout << "Enter Employee ID:" << endl;
    cin >> id;

    double net;
    cout << "Enter Net Salary (In dollars):" << endl;
    cin >> net;
    
    setEmpName(name);
    setEmpId(id);
    setNetSalary(net);
}

int Employee::calculateBonusPercentage(){
    int bonusPercentage;
    if (netSalary > 50000 && netSalary <= 80000){
        bonusPercentage = 5;
    }
    else if (netSalary > 30000 && netSalary <= 50000){
        bonusPercentage = 10;
    }
    else if (netSalary > 10000 && netSalary <= 30000){
        bonusPercentage = 15;
    }
    else {
        bonusPercentage = 20;
    }
    return bonusPercentage;
}

void Employee::displayEmployeeDetails(){
    cout << "Employee Name:" << getEmployeeName() << endl;
    cout << "Employee ID:" << getEmployeeId() << endl;
    cout << "Employee Net Salary (In dollars):" << getNetSalary() << endl;
    cout << "Employee Bonus Percentage:" << calculateBonusPercentage() << "%" << endl;
}

int main(){
    Employee employee;
    employee.getEmployeeDetails();
    Company::displayCompanyDetails();
    employee.displayEmployeeDetails();
    return 0;
}