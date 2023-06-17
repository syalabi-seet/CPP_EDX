#include <iostream>
using namespace std;

class Person
{
    protected:
        string socialSecurityNumber;

    public:
        void setSocialSecurityNumber(string ssn)
        {
            socialSecurityNumber = ssn;
        }
        string getSocialSecurityNumber()
        {
            return socialSecurityNumber;
        }
};

class Student: virtual public Person
{
    protected:
        int studentId;
    
    public:
        void setStudentId(int id)
        {
            studentId = id;
        }
        int getStudentId()
        {
            return studentId;
        }
};

class Employee: virtual public Person
{
    protected:
        int employeeId;
    
    public:
        void setEmployeeId(int id)
        {
            employeeId = id;
        }
        int getEmployeeId()
        {
            return employeeId;
        }
};

class Trainee: public Student, public Employee
{
    private:
        int traineeId;
    
    public:
        void setTraineeId(int id)
        {
            traineeId = id;
        }
        int getTraineeId()
        {
            return traineeId;
        }
};

int main()
{
    string ssn;
    int id;
    cout << "Enter Trainee ID:";
    cin >> id;
    cout << "Enter SSN Number:";
    cin >> ssn;

    Trainee trainee;
    trainee.setTraineeId(id);
    trainee.setSocialSecurityNumber(ssn);    
    cout << "Trainee ID: " << trainee.getTraineeId() << endl;
    cout << "Social Security Number: " << trainee.getSocialSecurityNumber() << endl;
    return 0;
}