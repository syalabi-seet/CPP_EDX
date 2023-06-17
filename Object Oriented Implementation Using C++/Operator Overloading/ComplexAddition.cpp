#include<iostream>
using namespace std;

class Addition
{
    private:
        int real;
        int img;
    
    public:
        int getReal()
        {
            return this->real;
        }
        int getImg()
        {
            return this->img;
        }
        Addition(int r = 0, int i = 0)
        {
            real = r;
            img = i;
        }
        friend class Operation;
};

class Operation
{
    public:
        int addRealPart(Addition obj1, Addition obj2)
        {
            return obj1.real + obj2.real;
        }
        int addImaginaryPart(Addition obj1, Addition obj2)
        {
            return obj1.img + obj2.img;
        }
};

int main()
{
    int real1, img1;
    cout << "Enter real and imaginary part of the first complex number" << endl;
    cin >> real1;
    cin >> img1;
    Addition obj1(real1, img1);

    int real2, img2;
    cout << "Enter real and imaginary part of the second complex number" << endl;
    cin >> real2;
    cin >> img2;
    Addition obj2(real2, img2);

    Operation op;
    cout 
        << "Sum of real and imaginary part is " 
        << op.addRealPart(obj1, obj2) 
        << "+i" 
        << op.addImaginaryPart(obj1, obj2) 
        << endl;
    return 0;
}