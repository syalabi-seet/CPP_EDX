#include <iostream>
#include<string>
using namespace std;

class Customer
{   
    protected:
        string name;
        int units;
        string email;
    public:
        void setName(string n)
        {
            name = n;
        }
        string getName()
        {
            return name;
        }
        void setEmail(string e)
        {
            email = e;
        }
        string getEmail()
        {
            return email;
        }
        void setUnits(int unit)
        {
            units = unit;
        }
        int getUnits()
        {
            return units;
        }
        int calculateTariff();
};

class NormalCustomer: public Customer
{
    public:
        int calculateTariff()
        {
            return 0;
        }
};
class BrandCustomer: public Customer
{
    public:
        int calculateTariff()
        {
            return (2 * units) + 100;
        }
};
class ExecutiveCustomer: public Customer
{
    public:
        int calculateTariff()
        {
            return 5 * units;
        } 
};

int main()
{ 
    string name;
    string email;
    int units;
    int type;
    cout << "Enter the name:" << endl;
    cin >> name;
    cout << "Enter the emailId:" << endl;
    cin >> email;
    cout << "Enter the units:" << endl;
    cin >> units;
    cout << "Enter customer type:" << endl;
    cin >> type;

    int tariffAmount;
    if (type == 1)
    {
        NormalCustomer customer;
        customer.setUnits(units); 
        tariffAmount = customer.calculateTariff();
    }
    else if (type == 2)
    {
        BrandCustomer customer;
        customer.setUnits(units); 
        tariffAmount = customer.calculateTariff();
    }
    else 
    {
        ExecutiveCustomer customer;
        customer.setUnits(units); 
        tariffAmount = customer.calculateTariff();
    }  
    cout << "Calculated Tariff(In US dollars): " << tariffAmount << endl;
    return 0;
}
