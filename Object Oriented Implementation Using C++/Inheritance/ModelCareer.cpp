#include <iostream>
using namespace std;

class Heroine
{
    protected:
        double earningsPerDay;
    public:
        void setEarningsPerDay(double earnings)
        {
            earningsPerDay = earnings;
        }
        double getEarningsPerDay()
        {
            return earningsPerDay;
        }
        long calcEarnings(int noOfDays);
};

class MovieHeroine: public Heroine
{
    private:
        int daysRun;

    public:
        void setDaysRun(int days)
        {
            daysRun = days;
        }
        int getDaysRun()
        {
            return daysRun;
        }
        long calcEarnings(int noOfDays)
        {
            int extraPercentage{0};
            if (daysRun > 100)
            {
                extraPercentage = 10;
            }                       
            else if (daysRun > 50 && daysRun <= 100)
            {
                extraPercentage = 5;
            }
            double totalEarnings = earningsPerDay * noOfDays;
            return totalEarnings + (totalEarnings*(extraPercentage/100.0));
        }
};

class AdvertisementModel: public Heroine
{   
    private:
        int rating;

    public:
        void setRating(int rating)
        {
            this->rating = rating;
        }
        int getRating()
        {
            return rating;
        }
        long calcEarnings(int noOfDays)
        {
            double extraAmount{0};
            if (rating >= 5)
            {
                extraAmount = 10000;
            }
            else if (rating < 5 && rating >= 2)
            {
                extraAmount = 5000;
            }
            double totalEarnings = earningsPerDay * noOfDays;
            return totalEarnings + extraAmount;
        }
};


int main(){
    // Inputs
    int movie, ad, rating, daysRun;
    double earningsPerDay;
    cout << "Enter the earnings per day: ";
    cin >> earningsPerDay;

    cout << "Enter the number of days for movie: ";
    cin >> movie;
    cout << "Enter the number of days movie run: ";
    cin >> daysRun;

    cout << "Enter the number of days for advertisement: ";
    cin >> ad;
    cout << "Enter the Advertisement rating: ";
    cin >> rating;

    // Outputs
    MovieHeroine mHeroine;
    mHeroine.setEarningsPerDay(earningsPerDay);
    mHeroine.setDaysRun(daysRun);
    cout << "Earnings for Movie: " << mHeroine.calcEarnings(movie) << endl;

    AdvertisementModel aModel;
    aModel.setEarningsPerDay(earningsPerDay);
    aModel.setRating(rating);
    cout << "Earnings for Advertisement: " << aModel.calcEarnings(ad) << endl;
    return 0;
}