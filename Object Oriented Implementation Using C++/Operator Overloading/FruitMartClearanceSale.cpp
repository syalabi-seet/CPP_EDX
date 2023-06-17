#include<iostream>
using namespace std;

class Product 
{
    private:
        int productId;
        string productName;
        int quantity;
        double unitPrice;
    
    public:    
        void setProductId(int productId) { this->productId = productId; }
        void setProductName(string productName) { this->productName = productName; }
        void setQuantity(int quantity) { this->quantity = quantity; }
        void setUnitPrice(double unitPrice) { this->unitPrice = unitPrice; }
        int getProductId() { return this->productId; }
        string getProductName() { return this->productName; }
        int getQuantity() { return this->quantity; }
        double getUnitPrice() { return this->unitPrice; }
        Product(int productId, string productName, int quantity, double unitPrice)
        {
            setProductId(productId);
            setProductName(productName);
            setQuantity(quantity);
            setUnitPrice(unitPrice);
        }
        double calculateBillAmount()
        {
            return getUnitPrice() * getQuantity();
        }
        friend void setDiscount(Product &product, double discount);
};

void setDiscount(Product &product, double discount)
{
    double newUnitPrice = product.getUnitPrice() * ((100 - discount) / 100.0);
    product.setUnitPrice(newUnitPrice);
}

int main()
{
    int productId, quantity;
    string productName;
    double unitPrice, discount;
    cout << "Enter the product Id" << endl;
    cin >> productId;
    cout << "Enter the product Name" << endl;
    cin >> productName;
    cout << "Enter the quantity in kgs" << endl;
    cin >> quantity;
    cout << "Enter the unit price per kg" << endl;
    cin >> unitPrice;

    Product product(productId, productName, quantity, unitPrice);

    cout << "Enter the discount percentage" << endl;
    cin >> discount;

    setDiscount(product, discount);
    cout 
        << "After discount, bill amount of Product id " 
        << product.getProductId()
        << " is "
        << product.calculateBillAmount()
        << " US Dollars"
        << endl;
    return 0;
}