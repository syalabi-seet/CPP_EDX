#include <iostream>
#include <string>
using namespace std;

class Mobile
{
    private:
        string mobileBrand;
        string mobileModelName;
        double mobilePrice;

    public:
        string getMobileBrand();
        string getMobileModelName();
        double getMobilePrice();
        void setMobileBrand(string brand);
        void setMobileModelName(string modelName);
        void setMobilePrice(double price);
};

string Mobile::getMobileBrand()
{
    return Mobile::mobileBrand;
}

string Mobile::getMobileModelName()
{
    return Mobile::mobileModelName;
}

double Mobile::getMobilePrice()
{
    return Mobile::mobilePrice;
}

void Mobile::setMobileBrand(string brand)
{
    Mobile::mobileBrand = brand;
}

void Mobile::setMobileModelName(string modelName)
{
    Mobile::mobileModelName = modelName;
}

void Mobile::setMobilePrice(double price)
{
    Mobile::mobilePrice = price;
}

int main()
{
    Mobile mobile;

    string brand;
    cout << "Enter the mobile brand:" << endl;
    cin >> brand;
    
    string model;
    cout << "Enter the mobile model name:" << endl;
    cin >> model;

    double price;
    cout << "Enter the mobile price:" << endl;
    cin >> price;

    mobile.setMobileBrand(brand);
    mobile.setMobileModelName(model);
    mobile.setMobilePrice(price);

    cout << "Mobile Details" << endl;
    cout << "Mobile Brand:" << mobile.getMobileBrand() << endl;
    cout << "Mobile Model Name:" << mobile.getMobileModelName() << endl;
    cout << "Mobile Price:" << mobile.getMobilePrice() << endl;
    return 0;
}