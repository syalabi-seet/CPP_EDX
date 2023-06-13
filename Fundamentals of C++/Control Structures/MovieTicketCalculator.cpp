#include <iostream>
using namespace std;

int main(){
    int number_of_tickets;
    char want_refreshments;
    char coupon_available;
    char type_of_seat;

    // Get inputs
    cout << "Enter the number of  tickets [a minimum of 5 to a maximum of 40 tickets]:";
    cin >> number_of_tickets;

    if (!((number_of_tickets > 5) && (number_of_tickets < 40)))
    {
        cout << "Minimum of 5 and Maximum of 40 Tickets" << endl;
        return 0;
    }

    cout << "Do you want refreshments?:";
    cin >> want_refreshments;

    cout << "Do you have a special coupon:";
    cin >> coupon_available;

    cout << "Enter the type of seat [Classic / Premiere]:";
    cin >> type_of_seat;

    // Calculate total cost
    double total_cost{0};

    float discount = (number_of_tickets > 20) ? 0.1 : 0;

    int cost_of_seat{0};
    if (type_of_seat == 'c')
    {
        cost_of_seat = 75;
    }
    else if (type_of_seat == 'p') 
    {
        cost_of_seat = 150;
    }
    else
    {
        cout << "Invalid Input" << endl;
        return 0;
    }

    float special_discount = (coupon_available == 'y') ? 0.02 : 0;
    int refreshment_cost = (want_refreshments == 'y') ? 50 : 0; 
    
    total_cost = (
        (number_of_tickets * cost_of_seat) * (1 - (discount + special_discount)) +
        (number_of_tickets * refreshment_cost)
    );

    cout << "Ticket cost:" << total_cost << endl;
    return 0;
}