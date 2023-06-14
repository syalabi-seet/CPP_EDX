#include <iostream>
#include <string>
using namespace std;

class Shop
{
    private:
        string itemName;
        int itemQuantity;
        double itemPrice;
    
    public:
        string getItemName()
        {
            return Shop::itemName;
        }
        int getItemQuantity()
        {
            return Shop::itemQuantity;
        }
        double getItemPrice()
        {
            return Shop::itemPrice;
        }
        void setItemName(string name)
        {
            Shop::itemName = name;
        }
        void setItemQuantity(int quantity)
        {
            Shop::itemQuantity = quantity;
        }
        void setItemPrice(double price)
        {
            Shop::itemPrice = price;
        }
};

int main()
{
    string name;
    int quantity;
    double price;
    cout << "Enter the item name:" << endl;
    cin >> name;
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    cout << "Enter the item price:" << endl;
    cin >> price;

    Shop shop;
    shop.setItemName(name);
    shop.setItemQuantity(quantity);
    shop.setItemPrice(price);

    cout << "Item Name: " << shop.getItemName() << endl;
    cout << "Item Quantity: " << shop.getItemQuantity() << endl;
    cout << "Item Price: " << shop.getItemPrice() << endl;
    return 0;
}