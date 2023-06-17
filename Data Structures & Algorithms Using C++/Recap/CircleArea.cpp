#include <iostream>
using namespace std;

class Circle
{
    private:
        int radius;

    public:
        void setRadius(int radius)
        {
            this->radius = radius;
        }
        int getRadius()
        {
            return this->radius;
        }
        Circle(int radius)
        {
            setRadius(radius);
        }
};

class Utility
{
    public:
        static double calculateArea(Circle c)
        {
            return 3.14 * c.getRadius() * c.getRadius();
        }
};

int main()
{
    int radius;
    cout << "Enter the radius(in cm)" << endl;
    cin >> radius;

    Circle circle(radius);
    cout << "Circle Area=" << Utility::calculateArea(circle) << "cm2" << endl;
    return 0;
}