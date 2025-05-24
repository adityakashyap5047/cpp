#include <iostream>

using namespace std;

int main() {

    float teaPrice = 49.99;

    int roundedPrice = (int)teaPrice;

    int teaQuantity = 2;
    double totalPrice = teaQuantity * teaPrice;

    cout << "Rounded price: " << roundedPrice << endl;
    cout << "Total price: " << totalPrice << endl;

    return 0;
}