#include<iostream>
using namespace std;

class Player //DO NOT change the class name
{
    private:
        int playerID;
        string playerName;
        int playedMatches;
        int playerScore;
    public:
        //Implement a parameterized constructor for 3 arguments - playerID, playerName and playerScore.
        Player(int id, string name, int score){
            this->setPlayerID(id);
            this->setPlayerName(name);
            this->setPlayerScore(score);
        }
        Player(int id, string name, int matches, int score){
            this->setPlayerID(id);
            this->setPlayerName(name);
            this->setPlayedMatches(matches);
            this->setPlayerScore(score);
        }
        
        void setPlayerID(int id){
            this->playerID = id;
        }
        void setPlayerName(string name){
            this->playerName = name;
        }
        void setPlayedMatches(int matches){
            this->playedMatches = matches;
        }
        void setPlayerScore(int score){
            this->playerScore = score;
        }
        int getPlayerID(){
            return this->playerID;
        }
        string getPlayerName(){
            return this->playerName;
        }
        int getPlayedMatches(){
            return this->playedMatches;
        }
        int getPlayerScore(){
            return this->playerScore;
        }
        
        //Implement a parameterized constructor for 4 arguments - playerID, playerName,playedMatches and playerScore.
        void displayThreeArgument()
        {       
            //Implement your code here
            cout << "Player ID. : " << this->getPlayerID() << endl;
            cout << "Player Name : " << this->getPlayerName() << endl;
            cout << "Player Score : " << this->getPlayerScore() << endl;
        }

        void displayFourArgument()
        {
            //Implement your code here
            cout << "Player ID. : " << this->getPlayerID() << endl;
            cout << "Player Name : " << this->getPlayerName() << endl;
            cout << "Played Matches : " << this->getPlayedMatches() << endl;
            cout << "Player Score : " << this->getPlayerScore() << endl;
        }

        //Implement Destructor here
        ~Player(){
            cout << "Destructor Called" << endl;
        }
};
int main(){
    //Implement your code here
    return 0;
}