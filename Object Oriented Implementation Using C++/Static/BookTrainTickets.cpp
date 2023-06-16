#include <iostream>
using namespace std;

class Train{
    private:
        long passengerPhone;
        string passengerName;
        char gender;
        int age;
        double ticketPrice;

    public:
        long getPassengerPhone(){
            return this->passengerPhone;
        }   
        string getPassengerName(){
            return this->passengerName;
        }
        char getGender(){
            return this->gender;
        }
        int getAge(){
            return this->age;
        }
        double getTicketPrice(){
            return this->ticketPrice;
        }
        void setPassengerPhone(long pPhone){
            this->passengerPhone = pPhone;
        }
        void setPassengerName(string pName){
            this->passengerName = pName;
        }
        void setGender(char pGender){
            this->gender = pGender;
        }
        void setAge(int pAge){
            this->age = pAge;
        }
        void setTicketPrice(double tPrice){
            this->ticketPrice = tPrice;
        }
        double calculateAmount(){
            double totalAmount;
            double discount;

            if (getAge() < 16){
                discount = 0.5;
            }
            else if (getAge() >= 60){
                discount = 0.25;
            }

            if (getGender() == 'F'){
                discount = 0.1;
            }

            return getTicketPrice() * (1.0 - discount);
        }
};


int main(){
    long phone;
    string name;
    char gender;
    int age;
    double ticketPrice;
    cout<<"Enter the Passenger phone no : ";
    cin>>phone;
    cout<<"Enter the Passenger name : ";
    cin>>name;
    cout<<"Enter the Passenger Age : ";
    cin>>age;
    cout<<"Enter the Gender(M/F): ";
    cin>>gender;
    cout<<"Enter the Ticket Price: ";
    cin>>ticketPrice;
    
    Train train;
    train.setPassengerPhone(phone);
    train.setPassengerName(name);
    train.setAge(age);
    train.setGender(gender);
    train.setTicketPrice(ticketPrice);

    double totalAmount = train.calculateAmount();
    cout << "Total Amount(In dollars): " << totalAmount << endl;
    return 0;
}