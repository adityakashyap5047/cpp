#include <iostream>
#include <string>

using namespace std;

int main() {
    string userTea;
    int teaQuantity;

    cout << "Enter your favorite tea: ";
    getline(cin, userTea);

    cout << "How many cups of " << userTea << " do you want? ";
    cin >> teaQuantity;
    
    cout << "Your favorite tea is: " << userTea << endl;
    cout << "Quantity: " << teaQuantity << endl;
    return 0;
}