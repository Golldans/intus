#include <iostream>
#include <string>

using namespace std;

int main()
{
    string item;
    double price, total;
    int quantity;

    cout << "What item do you want to buy?" << endl;
    getline(cin, item);
    cout << "What is the price for each?" << endl;
    cin >> price;
    cout << "How many do you want to buy?" << endl;
    cin >> quantity;
    cout << endl;
    
    total = quantity * price;

    cout << "Item: " << item << endl;
    cout << "Price: " << price << endl;
    cout << "Total: " << total << endl;

    return 0;
}