#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
bool areTheyInLove(int flower1Petals, int flower2Petals) {
	// Check if one flower has an even number of petals and the other has an odd number of petals
	return (flower1Petals % 2 == 0 && flower2Petals % 2 != 0) ||
		(flower1Petals % 2 != 0 && flower2Petals % 2 == 0);
}



    int main() {
        // Example: Check if Timmy and Sarah are in love based on the number of petals on their flowers
        int petals1;// Timmy's flower
        cin >> petals1;
        int petals2 ; // Sarah's flower;
        cin >> petals2;

        bool inLove = areTheyInLove(petals1, petals2);

        // Print the result
        if (inLove) {
            cout << "Timmy and Sarah are in love!" << std::endl;
        }
        else {
            cout << "Timmy and Sarah are not in love." << std::endl;
        }

        return 0;
    }





