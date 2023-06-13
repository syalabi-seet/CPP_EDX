#include <iostream>
#include <string>
using namespace std;

struct Product
{
    string name;
    float price;
    int quantity;    

    Product readItem()
    {
        Product product;
        cout << "Enter product name:";
        cin >> name;

        cout << "Enter price:";
        cin >> price;

        cout << "Enter quantity:";
        cin >> quantity;
        return product;
    }
    void printItem()
    {
        if (Product::price <= 0 || Product::quantity <= 0)
        {
            cout << "Invalid" << endl;
            return;
        }        
        
        cout << "Name: " << Product::name << endl;
        cout << "Price: " << Product::price << endl;
        cout << "Quantity: " << Product::quantity << endl;
        cout << "Total Amount: " << Product::price * Product::quantity << endl;
    }
};

int main()
{
    Product product;
    product.readItem();
    product.printItem();
    return 0;
}