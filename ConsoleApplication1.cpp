

#include <iostream>

using namespace std;
int main(){
    int sales = 95000;
    double state_tax = (sales * 4)/100;
    double county_tax = (sales * 2) / 100;
    double total_tax = state_tax + county_tax;
    cout << "sale = $" << sales << endl;
    cout << "county tax = $" << county_tax << endl;
    cout << "state tax = $" << state_tax << endl
        << "total tax = $" << total_tax;

    return 0;
}