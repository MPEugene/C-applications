#include <cmath>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int kilometers_hour;
    cin >> kilometers_hour;
    double centimeters_second = kilometers_hour * 100000 / 3600;
    cout << "The speed of a cockroach from " << kilometers_hour << " kilometers per hour to centimeters per second is " << centimeters_second << "cm/s.";




}

