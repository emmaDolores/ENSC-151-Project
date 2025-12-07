#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Federal tax 2025
double federalTax(double income)
{
    if (income <= 57375.0)
        return income * 0.145;
    else if (income <= 114750.0)
        return 57375.0 * 0.145 + (income - 57375.0) * 0.205;
    else if (income <= 177882.0)
        return 57375.0 * 0.145 + (114750.0 - 57375.0) * 0.205 + (income - 114750.0) * 0.26;
    else if (income <= 253414.0)
        return 57375.0 * 0.145 + (114750.0 - 57375.0) * 0.205 + (177882.0 - 114750.0) * 0.26 + (income - 177882.0) * 0.29;
    else
        return 57375.0 * 0.145 + (114750.0 - 57375.0) * 0.205 + (177882.0 - 114750.0) * 0.26 + (253414.0 - 177882.0) * 0.29 + (income - 253414.0) * 0.33;
}

// Provincial tax 2025
double provincialTax(double income, string prov)
{
    // Convert to lowercase
    for (int i = 0; i < prov.length(); i++)
        prov[i] = tolower((unsigned char)prov[i]);

    // Ontario
    if (prov == "ontario" || prov == "on")
    {
        if (income <= 52886.0)
            return income * 0.0505;
        else if (income <= 105775.0)
            return 52886.0 * 0.0505 + (income - 52886.0) * 0.0915;
        else if (income <= 150000.0)
            return 52886.0 * 0.0505 + (105775.0 - 52886.0) * 0.0915 + (income - 105775.0) * 0.1116;
        else if (income <= 220000.0)
            return 52886.0 * 0.0505 + (105775.0 - 52886.0) * 0.0915 + (150000.0 - 105775.0) * 0.1116 + (income - 150000.0) * 0.1216;
        else
            return 52886.0 * 0.0505 + (105775.0 - 52886.0) * 0.0915 + (150000.0 - 105775.0) * 0.1116 + (220000.0 - 150000.0) * 0.1216 + (income - 220000.0) * 0.1316;
    }

    // British Columbia
    if (prov == "british columbia" || prov == "bc")
    {
        if (income <= 49279.0)
            return income * 0.0506;
        else if (income <= 98560.0)
            return 49279.0 * 0.0506 + (income - 49279.0) * 0.0770;
        else if (income <= 113158.0)
            return 49279.0 * 0.0506 + (98560.0 - 49279.0) * 0.0770 + (income - 98560.0) * 0.1050;
        else if (income <= 137407.0)
            return 49279.0 * 0.0506 + (98560.0 - 49279.0) * 0.0770 + (113158.0 - 98560.0) * 0.1050 + (income - 113158.0) * 0.1229;
        else if (income <= 186306.0)
            return 49279.0 * 0.0506 + (98560.0 - 49279.0) * 0.0770 + (113158.0 - 98560.0) * 0.1050 + (137407.0 - 113158.0) * 0.1229 + (income - 137407.0) * 0.1470;
        else if (income <= 259829.0)
            return 49279.0 * 0.0506 + (98560.0 - 49279.0) * 0.0770 + (113158.0 - 98560.0) * 0.1050 + (137407.0 - 113158.0) * 0.1229 + (186306.0 - 137407.0) * 0.1470 + (income - 186306.0) * 0.1680;
        else
            return 49279.0 * 0.0506 + (98560.0 - 49279.0) * 0.0770 + (113158.0 - 98560.0) * 0.1050 + (137407.0 - 113158.0) * 0.1229 + (186306.0 - 137407.0) * 0.1470 + (259829.0 - 186306.0) * 0.1680 + (income - 259829.0) * 0.2050;
    }

    // Alberta
    if (prov == "alberta" || prov == "ab")
    {
        if (income <= 151234.0)
            return income * 0.10;
        else if (income <= 181481.0)
            return 151234.0 * 0.10 + (income - 151234.0) * 0.12;
        else if (income <= 241974.0)
            return 151234.0 * 0.10 + (181481.0 - 151234.0) * 0.12 + (income - 181481.0) * 0.13;
        else if (income <= 362961.0)
            return 151234.0 * 0.10 + (181481.0 - 151234.0) * 0.12 + (241974.0 - 181481.0) * 0.13 + (income - 241974.0) * 0.14;
        else
            return 151234.0 * 0.10 + (181481.0 - 151234.0) * 0.12 + (241974.0 - 181481.0) * 0.13 + (362961.0 - 241974.0) * 0.14 + (income - 362961.0) * 0.15;
    }

    // Saskatchewan
    if (prov == "saskatchewan" || prov == "sk")
    {
        if (income <= 53463.0)
            return income * 0.105;
        else if (income <= 152750.0)
            return 53463.0 * 0.105 + (income - 53463.0) * 0.125;
        else
            return 53463.0 * 0.105 + (152750.0 - 53463.0) * 0.125 + (income - 152750.0) * 0.145;
    }

    // Manitoba
    if (prov == "manitoba" || prov == "mb")
    {
        if (income <= 47564.0)
            return income * 0.108;
        else if (income <= 101200.0)
            return 47564.0 * 0.108 + (income - 47564.0) * 0.1275;
        else
            return 47564.0 * 0.108 + (101200.0 - 47564.0) * 0.1275 + (income - 101200.0) * 0.174;
    }

    // Quebec
    if (prov == "quebec" || prov == "qc")
    {
        if (income <= 53255.0)
            return income * 0.14;
        else if (income <= 106495.0)
            return 53255.0 * 0.14 + (income - 53255.0) * 0.19;
        else if (income <= 129590.0)
            return 53255.0 * 0.14 + (106495.0 - 53255.0) * 0.19 + (income - 106495.0) * 0.24;
        else
            return 53255.0 * 0.14 + (106495.0 - 53255.0) * 0.19 + (129590.0 - 106495.0) * 0.24 + (income - 129590.0) * 0.2575;
    }

    // New Brunswick
    if (prov == "new brunswick" || prov == "nb")
    {
        if (income <= 51306.0)
            return income * 0.094;
        else if (income <= 102614.0)
            return 51306.0 * 0.094 + (income - 51306.0) * 0.14;
        else if (income <= 190060.0)
            return 51306.0 * 0.094 + (102614.0 - 51306.0) * 0.14 + (income - 102614.0) * 0.16;
        else
            return 51306.0 * 0.094 + (102614.0 - 51306.0) * 0.14 + (190060.0 - 102614.0) * 0.16 + (income - 190060.0) * 0.195;
    }

    // Nova Scotia
    if (prov == "nova scotia" || prov == "ns")
    {
        if (income <= 30507.0)
            return income * 0.0879;
        else if (income <= 61015.0)
            return 30507.0 * 0.0879 + (income - 30507.0) * 0.1495;
        else if (income <= 95883.0)
            return 30507.0 * 0.0879 + (61015.0 - 30507.0) * 0.1495 + (income - 61015.0) * 0.1667;
        else if (income <= 154650.0)
            return 30507.0 * 0.0879 + (61015.0 - 30507.0) * 0.1495 + (95883.0 - 61015.0) * 0.1667 + (income - 95883.0) * 0.175;
        else
            return 30507.0 * 0.0879 + (61015.0 - 30507.0) * 0.1495 + (95883.0 - 61015.0) * 0.1667 + (154650.0 - 95883.0) * 0.175 + (income - 154650.0) * 0.21;
    }

    // Prince Edward Island
    if (prov == "prince edward island" || prov == "pei" || prov == "pe")
    {
        if (income <= 33328.0)
            return income * 0.095;
        else if (income <= 64656.0)
            return 33328.0 * 0.095 + (income - 33328.0) * 0.1347;
        else if (income <= 105000.0)
            return 33328.0 * 0.095 + (64656.0 - 33328.0) * 0.1347 + (income - 64656.0) * 0.166;
        else if (income <= 140000.0)
            return 33328.0 * 0.095 + (64656.0 - 33328.0) * 0.1347 + (105000.0 - 64656.0) * 0.166 + (income - 105000.0) * 0.1762;
        else
            return 33328.0 * 0.095 + (64656.0 - 33328.0) * 0.1347 + (105000.0 - 64656.0) * 0.166 + (140000.0 - 105000.0) * 0.1762 + (income - 140000.0) * 0.19;
    }

    // Newfoundland & Labrador
    if (prov == "newfoundland and labrador" || prov == "nl")
    {
        if (income <= 44192.0)
            return income * 0.087;
        else if (income <= 88382.0)
            return 44192.0 * 0.087 + (income - 44192.0) * 0.145;
        else if (income <= 157792.0)
            return 44192.0 * 0.087 + (88382.0 - 44192.0) * 0.145 + (income - 88382.0) * 0.158;
        else if (income <= 220910.0)
            return 44192.0 * 0.087 + (88382.0 - 44192.0) * 0.145 + (157792.0 - 88382.0) * 0.158 + (income - 157792.0) * 0.178;
        else if (income <= 282214.0)
            return 44192.0 * 0.087 + (88382.0 - 44192.0) * 0.145 + (157792.0 - 88382.0) * 0.158 + (220910.0 - 157792.0) * 0.178 + (income - 220910.0) * 0.198;
        else if (income <= 564429.0)
            return 44192.0 * 0.087 + (88382.0 - 44192.0) * 0.145 + (157792.0 - 88382.0) * 0.158 + (220910.0 - 157792.0) * 0.178 + (282214.0 - 220910.0) * 0.198 + (income - 282214.0) * 0.208;
        else if (income <= 1128858.0)
            return 44192.0 * 0.087 + (88382.0 - 44192.0) * 0.145 + (157792.0 - 88382.0) * 0.158 + (220910.0 - 157792.0) * 0.178 + (282214.0 - 220910.0) * 0.198 + (564429.0 - 282214.0) * 0.208 + (income - 564429.0) * 0.213;
        else
            return 44192.0 * 0.087 + (88382.0 - 44192.0) * 0.145 + (157792.0 - 88382.0) * 0.158 + (220910.0 - 157792.0) * 0.178 + (282214.0 - 220910.0) * 0.198 + (564429.0 - 282214.0) * 0.208 + (1128858.0 - 564429.0) * 0.213 + (income - 1128858.0) * 0.218;
    }

    return -1.0; // Province not recognized
}

int main()
{
    cout << fixed << setprecision(2);

    string prov;
    double income;
    bool valid = false;

    // Input province
    do
    {
        cout << "Enter your province (e.g., Ontario, BC, Quebec): ";
        getline(cin, prov);

        if (prov.empty())
            cout << "Province cannot be empty. Try again.\n";
        else if (provincialTax(0.0, prov) < -0.5)
            cout << "Province not recognized. Try again.\n";
        else
            valid = true;
    } while (!valid);

    // Input income
    valid = false;
    do
    {
        cout << "Enter your taxable income (numbers only): ";
        string incomeInput;
        getline(cin, incomeInput);
        try
        {
            income = stod(incomeInput);
            if (income < 0)
                cout << "Income cannot be negative. Try again.\n";
            else
                valid = true;
        }
        catch (...)
        {
            cout << "Invalid input. Please enter a numeric amount.\n";
        }
    } while (!valid);

    double fTax = federalTax(income);
    double pTax = provincialTax(income, prov);
    double totalDeductions = fTax + pTax;
    double netIncome = income - totalDeductions;

    cout << "\n---- DEDUCTION BREAKDOWN ----\n";
    cout << "Federal tax:      $" << fTax << "\n";
    cout << "Provincial tax:   $" << pTax << "\n";
    cout << "Total deductions: $" << totalDeductions << "\n";
    cout << "Net income:       $" << netIncome << "\n";

    return 0;
}