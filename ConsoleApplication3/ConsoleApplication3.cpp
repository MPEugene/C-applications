#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter the radius of a circle:";
    double radius;
    cin >> radius;
   double area_circle= pow(radius, 2) * 3.14;
   cout << area_circle << endl;
   if (area_circle > 5) {
       cout << "Ba e cam mare";
   }
   else {
       cout << "Ba e cam mica";
   }

    return 0;
}
