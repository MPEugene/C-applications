#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    void menu();
    while (1) {
        cout << "Enter a number: " << endl;
        int user_number;
        cin >> user_number;
        if (user_number % 2 == 0) {
            cout << "The number is even." << endl;
        }
        else {
            cout << "The number is odd." << endl;
        }
        string answer;
        cout << "Would you like to enter another number?" << endl;
        cout << "Yes or No: " << endl;
        cin >> answer;
        if (answer == "No") {
            cout << "Hope you enjoyed the program!" << endl;
            break;
        }
        else {

        }

    }
}
