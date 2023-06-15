#include <iostream>
using namespace std;

class College{
    private:
        static string principal_name;  // principal_name is common for all the students
    public:
        static void setPrincipalName(string name){
            principal_name=name;
        }
       static string getPrincipalName(){
            return principal_name;
        }
};

//Initialize the static principal_name variable with value "John" here
string College::principal_name = "John";

class Student
{
    private:
        int id;
        string name;
        float marks[5];
        float average;
        char grade;
        College cObj;
    public:
        void getStudentDetails(){
            cout << "Enter Student ID :" << endl;
            cin >> id;
            cout << "Enter Student Name :" << endl;
            cin >> name;

            cout << "Enter five subject marks :" << endl;
            for (int i = 0; i < 5; i++){
                cin >> marks[i];
            }    
        }
        void calculateAverage(){
            float totalMarks{0};
            for (float mark: marks){
                totalMarks += mark;
            }
            average = totalMarks / 5;
        }
        void findGrade(){
            if (average >= 80 && average <= 100) grade = 'O';
            else if (average < 50) grade = 'F';
            else grade = 'A';
        }
        void displayStudentDetails(){
            cout << "Student Name : " << name << endl;
            cout << "Student ID : " << id << endl;
            cout << "Principal Name : " << cObj.getPrincipalName() << endl;
            cout << "Average : " << getAverage() << endl;
            cout << "Grade : " << getGrade() << endl;
        }
        void setId(int id){
            this->id=id;
        }
        int getId(){
            return id;
        }
        void setAverage(float average){
            this->average=average;
        }
        int getAverage(){
            return average;
        }
        void setName(string n){
            this->name=n;
        }
        string getName(){
            return name;
        }
        void setMarks(float m[]){
            for (int i = 0; i < 5; i++){
                marks[i] = m[i];
            }
        }
        float* getMarks(){
            return marks;
        }
        void setGrade(char g){
            grade=g;
        }
        char getGrade(){
            return grade;
        }
        College getCollegeObject(){
            return cObj;
        }
};


int main(){
    //Fill code here
    Student student;
    student.getStudentDetails();
    student.displayStudentDetails();   
    return 0;
}