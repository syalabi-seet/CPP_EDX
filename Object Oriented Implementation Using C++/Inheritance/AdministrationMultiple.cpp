#include <iostream>
using namespace std;

class RuralManagement
{
    protected:
        int acceptedSchemes;

    public:
        int getAcceptedSchemes()
        {
            return acceptedSchemes;
        }
        void setAcceptedSchemes(int noOfSchemes)
        {
            this->acceptedSchemes = noOfSchemes;
        }
        void calcNoOfSchemes(int noOfSchemes, int noOfSchemesRejected)
        {
            setAcceptedSchemes(noOfSchemes - noOfSchemesRejected);
        }
};

class RevenueManagement
{
    protected:
        double totalRevenue;
    public:
        double getTotalRevenue()
        {
            return totalRevenue;
        }
        void setTotalRevenue(double revenue)
        {
            this->totalRevenue = revenue;
        }
        void calcTotalRevenue(int noOfTerritories, double revenue)
        {
            setTotalRevenue(noOfTerritories * revenue);
        }
};

class SchemeManagement: public RuralManagement, public RevenueManagement
{
    public:
        double allotMoneyPerScheme()
        {
            return getTotalRevenue() / getAcceptedSchemes();        
        }
};


int main(){
    // Input
    int rejected, schemes, territories;
    double revenue;
    cout << "Enter number of territories: ";
    cin >> territories;
    cout << "Enter revenue: ";
    cin >> revenue;
    cout << "Enter total number of schemes: ";
    cin >> schemes;
    cout << "Enter number of schemes rejected: ";
    cin >> rejected;

    // Output
    SchemeManagement sManagement;
    sManagement.calcTotalRevenue(territories, revenue);
    sManagement.calcNoOfSchemes(schemes, rejected);
    cout << "Money allotted per scheme: " << sManagement.allotMoneyPerScheme() << endl;
    return 0;
}