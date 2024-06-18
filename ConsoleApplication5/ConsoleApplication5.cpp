
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	void menu();
	
		
		while (1)
		{
			cout << "Hello! Welcome to Ghost Seeker! I hope you enjoy the game." << endl;
			cout << "You find yourself in a haunted house. In front of you are three suspicious doors. One might lead you to safety another to your doom" << endl;
			cout << "Before you start here are the following rules: In order to open one of the three doors you have to press either 1,2 or 3 depending on which door you want to press. If you press any other key than the game will fail." << endl;
			cout << "Which door do you choose:"<< endl;
			srand(time(0));
			double door;
			short ghost = rand() % 3;
			cin >> door;
			cout << door << endl;
			if (door = ghost) {
				cout << "You found a ghost! You are forever haunted!";
				break;
			}
			else {
				cout << "You didn't find a ghost. You got out safely. I hope you enjoyed the game. If you want to play again press 4 for yes and 5 for no."<< endl;
				
			}
			int answer;
			cin >> answer;
			if (answer == 5) {
				break;
			}
			else  {
				
				
			}
					

			
		}
	
}

