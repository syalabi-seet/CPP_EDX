#include<iostream>
using namespace std;

class Height;
class Converter
{
    private:
        int cm;
    
    public:
        void setCm(int cm)
        {
            this->cm = cm;
        }
        int getCm()
        {
            return this->cm;
        }
        Converter()
        {
            setCm(0);
        }
        void toConvert(Height ht);
};

class Height  
{
    private:
        int feet;
        int inch;
    
    public:
        void setFeet(int feet)
        {
            this->feet = feet;
        }
        void setInch(int inch)
        {
            this->inch = inch;
        }
        int getFeet()
        {
            return this->feet;
        }
        int getInch()
        {
            return this->inch;
        }
        Height(int feet, int inch)
        {   
            setFeet(feet);
            setInch(inch);
        }
        double calculateHeight()
        {
            return getFeet() + (getInch() / 10.0);
        }
        friend void Converter::toConvert(Height ht);
};

void Converter::toConvert(Height ht)
{
    int cm = (ht.getFeet() * 30) + (ht.getInch() * 3);
    setCm(cm);
}

int main()
{
    int feet1,inch1;
    cout<<"Enter feet"<<endl;
    cin>>feet1;
    cout<<"Enter inch"<<endl;
    cin>>inch1;

    Height height(feet1, inch1);
    Converter converter;
    converter.toConvert(height);
    cout << "Height entered is " << height.calculateHeight() << "feet" << endl;
    cout << "Height in cm is " << converter.getCm() << "cm" << endl;
    return 0;
}