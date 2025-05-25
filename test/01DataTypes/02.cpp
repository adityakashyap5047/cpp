#include <iostream>

using namespace std;

int main() {

    double teaPrice;

    cout << "Enter the base price of the tea: ";
    cin >> teaPrice;

    double newPrice = teaPrice + (teaPrice / 10); 

    int roundedPrice = int(newPrice + 0.5); 

    cout << "The new price of the tea is: $" << roundedPrice << endl;

    return 0;
}