#include <iostream>
using namespace std;

class Product
{
    protected:
        int markedPrice{1000};
        int discount{40};

    public:
        void setMarkedPrice(int mPrice)
        {
            markedPrice = mPrice;
        }
        void setDiscount(int dis)
        {
            discount = dis;
        }
        int getMarkedPrice()
        {
            return markedPrice;
        }
        int getDiscount()
        {
            return discount;
        }
};

class Dress: public Product
{
    public:
        char findSize(int chestSize)
        {
            if (chestSize >= 20 && chestSize <= 30)
            {
                return 'S';
            }
            else if (chestSize >= 31 && chestSize <= 40)
            {
                return 'M';
            }
            else 
            {
                return 'L';
            }
        }
};

class Shirt: public Dress{
    public:
        int calculatePrice(char chestSize)
        {
            int mPrice = markedPrice - ((markedPrice * discount)/100);  
            if (chestSize == 'L')
            {
                return mPrice + 1000;
            }          
            else if (chestSize == 'M')
            {
                return mPrice + 500;
            }
            else 
            {
                return mPrice;
            }
        }
};

int main(){
    int size;
    cout << "Enter the chest size : ";
    cin >> size;

    Shirt shirt;
    char charSize = shirt.findSize(size);
    cout << "Dress Size : " << charSize << endl;
    cout << "Price (in $) : " << shirt.calculatePrice(charSize) << endl;
    return 0;
}