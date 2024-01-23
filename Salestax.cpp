#include <iostream>

using namespace std;

int main(){
    double sellingPrice, sales_tax_city, sales_tax_states, luxury_tax, totalPrice;
    cout << "Selling Price: ";
    cin >> sellingPrice;
    sales_tax_states = sellingPrice * 0.04;
    sales_tax_city = sellingPrice * 0.015;

    if (sellingPrice > 50000){

        luxury_tax = sellingPrice * 0.1;
    }

    totalPrice = sellingPrice + sales_tax_city + sales_tax_states + luxury_tax;

    cout << "The total price of the product is " << totalPrice << " Pesos.";
    return 0;
}