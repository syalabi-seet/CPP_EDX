#include <iostream>
using namespace std;

class Examination
{
    protected:
        int passMark{100};
        int multipler;

    public:
        void setPassMark(int pMark)
        {
            this->passMark = pMark;
        }
        int getPassMark()
        {
            return this->passMark;
        }
        void displayResult(int gradePoint)
        {
            string result = (gradePoint >= getPassMark()) ? "Pass" : "Fail";
            cout << "Result: " << result << endl;
            cout << "Gradepoints: " << gradePoint << endl;
        }
};

class ScienceExam : public Examination
{
    private:
        int multiplier{2};

    public:
        int calculateGradePoints(int mark)
        {
            return mark * multiplier;                    
        }    
};

class MathsExam : public Examination
{
    private:
        int multiplier{4};

    public:
        int calculateGradePoints(int mark)
        {
            return mark * multiplier;            
        }
};

int main()
{
    int sMark, mMark;
    cout << "Enter the mark in Science: ";
    cin >> sMark;
    cout << "Enter the mark in Maths: ";
    cin >> mMark;

    ScienceExam sExam;
    sExam.displayResult(sExam.calculateGradePoints(sMark));

    MathsExam mExam;
    mExam.displayResult(mExam.calculateGradePoints(mMark));
    return 0;
}