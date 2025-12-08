#include <iostream>
using namespace std;

double federalTax(double income)
{
    if (income <= 57375.0)
        return income * 0.145;
    else
        return 57375.0 * 0.145 + (income - 57375.0) * 0.205;
}

int main()
{
    double income;
    cout << "\nEnter income to test federalTax: ";
    cin >> income;

    cout << "Federal tax = $" << federalTax(income) << endl << endl;
}