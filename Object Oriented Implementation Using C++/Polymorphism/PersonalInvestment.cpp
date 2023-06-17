#include <iostream>
#include<string>
using namespace std;

int calculateTotalReturns(int amount,int interestRate)
{
    return amount + ((amount * interestRate) / 100);
}
int calculateTotalReturns(int depositAmount, int term, int returnRate)
{
    int totalAmount = depositAmount * 12 * term;
    return totalAmount + ((totalAmount * returnRate) / 100);
}
int calculateTotalReturns(string stockName, double price, int number)
{
    return price * number;
}

int main()
{
    int stockName;
    int numbers, amount, rate, depositAmount, term, rRate;
    double sharePrice;

    cout << "Stock:" << endl;
    cout << "Enter stock Name: ";
    cin >> stockName;
    cout << "Enter stock price: ";
    cin >> sharePrice;
    cout << "Enter number of stocks: ";
    cin >> numbers;
    cout << "Total Returns (In US dollars):" << calculateTotalReturns(stockName, sharePrice, numbers) << endl;

    cout << "FD:" << endl;
    cout << "Enter Amount: ";
    cin >> amount;
    cout << "Enter interest rate: ";
    cin >> rate;
    cout << "Total Returns (In US dollars):" << calculateTotalReturns(amount, rate) << endl;

    cout << "Mutual Funds: " << endl;
    cout << "Enter amount for SIP: ";
    cin >> depositAmount;
    cout << "Enter term in years: ";
    cin >> term;
    cout << "Enter return rate: ";
    cin >> rRate;
    cout << "Total Returns (In US dollars):" << calculateTotalReturns(depositAmount, term, rRate) << endl;
    return 0;
}