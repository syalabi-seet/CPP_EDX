#include <iostream>
using namespace std;

class Employee{
    private:
        int associateId;
        string associateName;
        string workStatus;

    public:
        void setAssociateId(int id){
            Employee::associateId = id;
        }
        int getAssociateId(){
            return Employee::associateId;
        }
        void setAssociateName(string name){
            Employee::associateName = name;
        }
        string getAssociateName(){
            return Employee::associateName;
        }
        void setWorkStatus(string status){
            Employee::workStatus = status;
        }
        string getWorkStatus(){
            return Employee::workStatus;
        }
        void updateStatusDetails(int days){
            string status;
            if (days <= 20) {
                status = "Core skills";
            }
            else if (days > 20 && days <= 40){
                status = "Advanced skills";
            }
            else {
                status = "Project phase";
            }
            setWorkStatus(status);                                    
        }
};

int main(){
    int id;
    string name;
    int days;
    cout << "Enter the associate id:" << endl;
    cin >> id;
    cout << "Enter the associate name:" << endl;
    cin >> name;
    cout << "Enter the number of days:" << endl;
    cin >> days;

    Employee employee;
    employee.setAssociateId(id);
    employee.setAssociateName(name);
    employee.updateStatusDetails(days);
    cout 
        << "The associate " 
        << employee.getAssociateName()
        << " work status: "
        << employee.getWorkStatus()
        << endl;
    return 0;
}