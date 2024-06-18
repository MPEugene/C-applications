#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


int main(){
    void menu();
    cout << "Welcome to rock,paper,scissors game! " << endl;
    cout << "The rules of the game are the following: Press 1 for rock, 2 for paper and 3 for scissors" << endl;
    cout << "Have fun and enjoy!" << endl;
    while (1) {
        const int maxValue = 3;
        const int minValue = 1;
        srand(time(0));
        int Player;
        short computer = (rand() % (maxValue - minValue + 1)) + minValue;
        cout << "Player:" << endl;
        cin >> Player;
        cout << "Computer:" << endl;
        cout << computer << endl;
        if  (Player == 1)  {
            cout << "You choose rock" << endl;

        }
        else if (Player == 2) {
            cout << "You choose paper" << endl;
        }
        else {
            cout << "You choose scissors" << endl;
        }
        if (computer == 1) {
            cout << "Computer chooses rock" << endl;
        }
        else if (computer == 2) {
            cout << "Computer chooses paper" << endl;
        }
        else {
            cout << "Computer chooses scissors" << endl;
        }
        //match
        if(Player== computer) {
            cout << "Match Tie" << endl;
        }
        // player-->rock
        else if (Player == 1) {
            if (computer == 2) {
                cout << "You lose" << endl;
            }
            if (computer == 3) {
                cout << "You win" << endl;
            }
        }
        //player-->paper
        else if (Player == 2) {
            if (computer == 1) {
                cout << "You win" << endl;
            }
            if (computer == 3) {
                cout << "You lose" << endl;
            }
        }
        //player-->scissors
        else if (Player == 3) {
            if (computer == 1) {
                cout << "You lose" << endl;
            }
            if (computer == 2) {
                cout << "You win" << endl;
            }
        }
        int answer;
        cout << "Would you like to play again?" << endl;
        cout << "Press 4 for yes and 5 for no" << endl;
        cin >> answer;
        if (answer == 5) {
            cout << "Hope you had fun! Goodbye!" << endl;
            break;
        }
        else {

        }





        
    }
}

