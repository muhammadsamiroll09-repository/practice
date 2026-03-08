#include <iostream>
using namespace std;

int main()
{
    int veg_kg, fruit_kg;
    double veg_price, fruit_price;
    double total;

    cout << "How many kg u have purchased vegetables : ";
    cin >> veg_kg;

    cout << "Enter the coins amount for per kg vegetables : ";
    cin >> veg_price;

    cout << "How many kg u have purchased fruits : ";
    cin >> fruit_kg;

    cout << "Enter the coins amount for per kg fruits : ";
    cin >> fruit_price;

    total = (veg_kg * veg_price) + (fruit_kg * fruit_price);

    cout << "Total amount in Rupess : " << total;

    
}