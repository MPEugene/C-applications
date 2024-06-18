#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    cout << "Please remember when you enter a string don't put a space between the numbers";
    void menu();
    while (1) {
        cout << "Enter original string: " << endl ;
        string number_list;
        cin >> number_list;
        reverse(number_list.begin(), number_list.end());
        cout << "Reversed string : " << number_list << endl;
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

