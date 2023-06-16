#include <iostream>
using namespace std;

class Election{
    protected:
        long int totalPeople;
        long int noOfWomen;
        long int noOfMen;

    public:
        void setTotalPeople(long int totPeople){
            this->totalPeople = totPeople;
        }
        void setNoOfWomen(long int womenCount){
            this->noOfWomen = womenCount;
        }
        void setNoOfMen(long int menCount){
            this->noOfMen = menCount;
        }
        long int getTotalPeople(){
            return this->totalPeople;
        }
        long int getNoOfWomen(){
            return this->noOfWomen;
        }
        long int getNoOfMen(){
            return this->noOfMen;
        }
};

class GeneralElection : public Election{
    public:
        double calcVotePercentage(int partyA, int partyB){
            return (partyA + partyB)*100 / getTotalPeople();            
        }
        double calcWomenVotePercentage(int womenVotes){
            return (womenVotes*100) / getNoOfWomen();
        }
        double calcMenVotePercentage(int menVotes){
            return (menVotes*100) / getNoOfMen();
        }
};

int main()
{  
    long int totalPeople, noOfWomen, noOfMen;
    int partyA, partyB, womenVotes, menVotes;
    double votePer, womenVotePer, menVotePer;
    cout << "Enter the number of People: ";
    cin >> totalPeople;
    cout << "Enter the number of women: ";
    cin >> noOfWomen;
    cout << "Enter the number of men: ";
    cin >> noOfMen;
    cout << "Enter the total votes by Party A: ";
    cin >> partyA;
    cout << "Enter the total votes by Party B: ";
    cin >> partyB;
    cout << "Enter the number of women votes: ";
    cin >> womenVotes;
    cout << "Enter the number of men votes: ";
    cin >> menVotes;

    GeneralElection election;
    election.setTotalPeople(totalPeople);
    election.setNoOfWomen(noOfWomen);
    election.setNoOfMen(noOfMen);

    cout << "Vote Percentage: " << election.calcVotePercentage(partyA, partyB) << endl;
    cout << "Women Vote Percentage: " << election.calcWomenVotePercentage(womenVotes) << endl;
    cout << "Men Vote Percentage: " << election.calcMenVotePercentage(menVotes) << endl;
    return 0;
}