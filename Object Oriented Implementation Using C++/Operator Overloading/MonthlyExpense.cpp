#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class MonthlyExpense 
{
    private:
        double household_exp;
        double medical;
    
    public:        
        void setHouseHoldExpense(double houseExp) 
        {
            this->household_exp = houseExp;
        }
        
        void setMedicalExpense(double medical) 
        {
            this->medical = medical;
        }

        double calculateNovemberMonthExpense() 
        {            
            return this->household_exp + this->medical;
        }

        double calculateDecemberMonthExpense() 
        {
            return this->household_exp + this->medical;
        }

        double calculateTotalExpense() 
        {
            return this->household_exp + this->medical;            
        }

        MonthlyExpense operator +(const MonthlyExpense b)
        {
            MonthlyExpense totalExpense;
            totalExpense.household_exp = this->household_exp + b.household_exp;
            totalExpense.medical = this->medical + b.medical;
            return totalExpense;
        }
};

int main() 
{    
    double expenses = 0.0;
    double novHousHol1,novMedEx2,decHousHol1,decMedEx2;

    cout << "Enter the House hold expense of November(in $) : ";
    cin >> novHousHol1;
    cout << "Enter the Medical expense of November(in $) : ";
    cin >> novMedEx2;
    cout << "Enter the House hold expense of December(in $) : ";
    cin >> decHousHol1;
    cout << "Enter the Medical expense of December(in $) : ";
    cin >> decMedEx2;

    MonthlyExpense novExpense;
    novExpense.setHouseHoldExpense(novHousHol1);
    novExpense.setMedicalExpense(novMedEx2);

    MonthlyExpense decExpense;
    decExpense.setHouseHoldExpense(decHousHol1);
    decExpense.setMedicalExpense(decMedEx2);

    MonthlyExpense totalExpense = novExpense + decExpense;
    
    cout << "November Expenses (in $) : " << novExpense.calculateNovemberMonthExpense() << endl;
    cout << "December Expenses (in $) : " << decExpense.calculateDecemberMonthExpense() << endl;
    cout << "Total Expenses for the month of Nov and Dec (in $) : " << totalExpense.calculateTotalExpense() << endl;
    return 0;
}