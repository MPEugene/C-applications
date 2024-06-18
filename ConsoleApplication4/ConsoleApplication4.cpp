
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    const int maxValue = 6;
    const int minValue = 1;
    srand(time(0));
   short first_dice = (rand() % (maxValue - minValue + 1)) + minValue;
    short second_dice = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << "Roll the dice:" << endl;
    cout << "First dice:";
    cout << first_dice << endl;
    cout << "Second dice:";
    cout << second_dice << endl;

    return 0;
}

