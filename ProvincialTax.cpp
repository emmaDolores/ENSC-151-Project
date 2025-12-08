#include <iostream>
using namespace std;

double provincialTax(double income)
{
    if (income <= 49000.0)
        return income * 0.0506;
    else
        return 49000.0 * 0.0506 + (income - 49000.0) * 0.077;
}

int main()
{
    double income;
    cout << "\nEnter income to test provincialTax: ";
    cin >> income;

    cout << "Provincial tax = $" << provincialTax(income) << endl << endl;
}