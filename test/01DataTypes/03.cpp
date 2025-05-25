#include <iostream>
#include <string>

using namespace std;

int main() {

    string teaType;
    int cupOfTea;

    cout << "Enter your favorite tea type: ";

    getline(cin, teaType);

    cout << "How many cups of " << teaType << " do you want? ";
    cin >> cupOfTea;

    cout << "Your favorite tea type is " << teaType << " and you want " << cupOfTea << " cups of this tea." << endl;

    return 0;
}