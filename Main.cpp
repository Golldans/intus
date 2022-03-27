#include <iostream>

using namespace std;

int main()
{
    int specialYear;
    double idealPrice;
    char currentStatus;
    string userName;
    bool active;

    specialYear = 1976;
    idealPrice = 19.99;
    currentStatus = 'Y';
    userName = "Golldan";
    active = true;

    idealPrice *= 1.3;

    cout << "Year: " << specialYear << endl;
    cout << "Price: " << idealPrice << endl;
    cout << "Status:" << currentStatus << endl;
    cout << "Username: " << userName << endl;
    cout << "Avaiable: " << active << endl;

    return 0;
}