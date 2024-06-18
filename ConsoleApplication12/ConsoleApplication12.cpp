#include <cmath>
#include <iostream>
using namespace std;
bool isEven(int n) { return (n % 2 == 0); }
int main(){
    cout << "Enter a non negative full number of your choosing: " << endl;
    int n;
    cin >> n;
    if (isEven(n)) {
        int x = n * 8;
        cout << "Number is even and shall be multiplied by 8. The resulting number is: " << x << endl;
        
    }
    else {
        int y = n * 9;
        cout << "Number is odd and shall be multiplied by 9. The resulting number is: " << y << endl;

    }






}
