#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        double calculateArea();
};

class Circle: public Shape
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
        double calculateArea()
        {
            return 3.14 * getRadius() * getRadius();
        }

};

class Rectangle: public Shape
{
    private:
        int width, height;

    public:
        void setWidth(int width)
        {
            this->width = width;
        }
        void setHeight(int height)
        {
            this->height = height;
        }
        int getWidth()
        {
            return this->width;
        }
        int getHeight()
        {
            return this->height;
        }
        double calculateArea()
        {
            return getWidth() * getHeight();
        }        
};

class Triangle: public Shape
{
    private:
        float base, height;

    public:
        void setBase(float base)
        {
            this->base = base;
        }
        void setHeight(float height)
        {
            this->height = height;
        }
        float getBase()
        {
            return this->base;
        }
        float getHeight()
        {
            return this->height;
        }
        double calculateArea()
        {
            return 0.5 * getBase() * getHeight();
        }
};

int main()
{
    int radius;
    string shape;
    cout << "Enter the type of shape:" << endl;
    cin >> shape;

    double result;

    if (shape == "Circle")
    {
        int radius;
        cout << "Enter the radius (in cm):" << endl;
        cin >> radius;
        Circle circle;
        circle.setRadius(radius);
        result = circle.calculateArea();
    }
    else if (shape == "Rectangle")
    {
        int width, height;
        cout << "Enter the width (in cm):" << endl;
        cin >> width;
        cout << "Enter the height (in cm):" << endl;
        cin >> height;
        Rectangle rectangle;
        rectangle.setWidth(width);
        rectangle.setHeight(height);
        result = rectangle.calculateArea();
    }
    else if (shape == "Triangle")
    {
        float base, height;
        cout << "Enter the base (in cm):" << endl;
        cin >> base;
        cout << "Enter the height (in cm):" << endl;
        cin >> height;
        Triangle triangle;
        triangle.setBase(base);
        triangle.setHeight(height);
        result = triangle.calculateArea();
    }

    cout << "The area of the " << shape << " is: " << result << " square centimeters" << endl;
    return 0;
}