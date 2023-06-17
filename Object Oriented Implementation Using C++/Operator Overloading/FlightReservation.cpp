//IMPLEMENT CLASS RESERVATION ONLY IN THIS FILE
#include<iostream>
using namespace std;

class Reservation
{
    private:
        int reservationId;
        string reservationName;
        int noOfTickets;
        double perTicketRate;
        string foodType;
        double ticketCost;
        string discountPercentage;
    public:
        Reservation(int reservationId, string reservationName,int noOfTickets,double perTicketRate,string foodType)
        {
            setReservationId(reservationId);
            setReservationName(reservationName);
            setNoOfTickets(noOfTickets);
            setPerTicketRate(perTicketRate);
            setFoodType(foodType);
        }
        void calculateTicketCost()
        {
            int foodTypeRate = (foodType == "VEG") ? 150 : 200;
            double foodRate = foodTypeRate * noOfTickets;
            double ticketCharge = noOfTickets * perTicketRate;    
            this->ticketCost = foodRate + ticketCharge;
        }
        void setReservationId(int id)
        {
            this->reservationId = id;
        }
        void setReservationName(string name)
        {
            this->reservationName = name;
        }
        void setNoOfTickets(int noOfTickets)
        {
            this->noOfTickets = noOfTickets;
        }
        void setPerTicketRate(double perTicketRate)
        {
            this->perTicketRate = perTicketRate;
        }
        void setFoodType(string foodType)
        {
            this->foodType = foodType;
        }
        double getTicketCost()
        {
            return this->ticketCost;
        }
        void setDiscountPercentage(string discountPercentage)
        {
            this->discountPercentage = discountPercentage;
        }
        string getDiscountPercentage()
        {
            return this->discountPercentage;
        }
        friend void calculateReimbursement(Reservation &res);
};

void calculateReimbursement(Reservation &res)
{
    if (res.getTicketCost() > 6000)
    {
        res.setDiscountPercentage("5%");
        cout << "You are eligible for " << res.getDiscountPercentage() << " discount" << endl;
    }
    else
    {
        res.setDiscountPercentage("0%");
        cout << "No discount is available for you" << endl;
    }
}

int main()
{
    int id,noOftickets;
    string name,food;
    double rate;
    cout<<"Enter the reservation id"<<endl;
    cin>>id;
    cout<<"Enter the reservation name"<<endl;
    cin>>name;
    cout<<"Enter number of tickets"<<endl;
    cin>>noOftickets;
    cout<<"Enter per ticket rate"<<endl;
    cin>>rate;
    cout<<"Enter type of food"<<endl;
    cin>>food;

    Reservation res(id, name, noOftickets, rate, food);
    res.calculateTicketCost();
    cout << "Total ticket cost is " << res.getTicketCost() << " US Dollars" << endl;
    calculateReimbursement(res);
    return 0;
}
