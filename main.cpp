#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Style.h"
#include "Table.h"
#include "File.h"
#include "Property.h"
#include "Tenant.h"
#include "PropertyManagementSystem.h"


using namespace std;

PropertyManagementSystem pms;

void tenantAdd() {

    string firstName;
    string lastName;
    string phone;
    string email;
    string gender;
    string propertyName;
    string startDate;
    string rent;
    string deposit;
    string duration;

    cout << Style::getGreenColor(Style::getBold("TENANT ADD\n----------")) << endl;

    cout << "FIRST NAME     : "; getline(cin, firstName);
    cout << "LAST NAME      : "; getline(cin, lastName);
    cout << "PHONE          : "; getline(cin, phone);
    cout << "EMAIL          : "; getline(cin, email);
    cout << "GENDER         : "; getline(cin, gender);
    cout << "PROPERTY NAME  : "; getline(cin, propertyName);
    cout << "START DATE     : "; getline(cin, startDate);
    cout << "RENT           : "; getline(cin, rent);
    cout << "DEPOSIT        : "; getline(cin, deposit);
    cout << "DURATION       : "; getline(cin, duration);

    pms.setId(pms.getNextId());
    pms.setFirstName(firstName);
    pms.setLastName(lastName);
    pms.setPhone(phone);
    pms.setEmail(email);
    pms.setGender(gender);

    pms.setPropertyName(propertyName);
    pms.setStartDate(startDate);
    pms.setRent(rent);
    pms.setDeposit(deposit);
    pms.setDuration(duration);
    pms.saveRecord();
    
}

void tenantList() {
     cout << Style::getGreenColor(Style::getBold("TENANT LIST\n----------")) << endl;
     pms.viewRecords();
}

void selectMenuInvalid() {
    cout << Style::getYellowColor(Style::getBold("WORNING: ")) << Style::getYellowColor("Invalid your seleted menu.") << endl;
}

int main()
{
    int selectMenu;

    cout << Style::getGreenColor(Style::getBold("\n----------------------- WELCOME TO PROPERTY MANAGEMENT SYSTEM -----------------------\n")) << endl;
    
    cout << Style::getBlueColor("1. Tenant Add") << endl;
    cout << Style::getBlueColor("2. Tenant List") << endl;
    cout << Style::getBlueColor("3. Tenant Search") << endl;
    cout << Style::getBlueColor("4. Monthly Report") << endl;
    cout << Style::getBlueColor("0. Exit") << endl;
    

    

    while (true) {
        cout << Style::getBlueColor("\nChoose Menu: ");
        cin >> selectMenu;
        cin.ignore();
        cout << "\n";

        switch (selectMenu)
        {
        case 1:
            tenantAdd();
            break;
        case 2:
            tenantList();
            break;
        case 0:
            cout << "Exit Program" << endl;
            return 0;
            break;
        default:
            selectMenuInvalid();
            break;
        }
    }


    cout << "\n\n";
    return 0;
}