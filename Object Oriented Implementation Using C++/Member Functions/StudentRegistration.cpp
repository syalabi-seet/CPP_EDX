#include <iostream>
using namespace std;

class Student
{
    private:
        int studentId;
        string name;
        int departmentId;
        string gender;
        string phoneNumber;
    public:
        void setStudentID(int id)
        {
            Student::studentId = id;
        }
        int getStudentId()
        {
            return Student::studentId;
        }
        void setName(string name)
        {
            Student::name = name;
        }
        string getName()
        {
            return Student::name;
        }
        void setDepartmentId(int deptId)
        {
            Student::departmentId = deptId;
        }
        int getDepartmentId()
        {
            return Student::departmentId;
        }
        void setGender(string gender)
        {
            Student::gender = gender;
        }
        string getGender()
        {
            return Student::gender;
        }
        void setPhoneNumber(string phNo)
        {
            Student::phoneNumber = phNo;
        }
        string getPhoneNumber()
        {
            return Student::phoneNumber;
        }
};

int main()
{
    int id, deptId;
    string name, gender, phNo;
    cout << "Enter the details:" << endl;
    cout << "Student Id" << endl;
    cin >> id;
    cout << "Student Name" << endl;
    cin >> name;
    cout <<"Department Id" << endl;
    cin >> deptId;
    cout << "Gender" << endl;
    cin >> gender;
    cout << "Phone Number" << endl;
    cin >> phNo;

    Student student;
    student.setStudentID(id);
    student.setName(name);
    student.setDepartmentId(deptId);
    student.setGender(gender);
    student.setPhoneNumber(phNo);

    cout << "Student details entered:" << endl;
    cout
        << student.getStudentId()
        << " "
        << student.getName()
        << " "
        << student.getDepartmentId()
        << " "
        << student.getGender()
        << " "
        << student.getPhoneNumber()
        << endl;
    return 0;
}