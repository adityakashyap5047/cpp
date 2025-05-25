#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string teaName = "Earl Grey";
    double teaPrice = 3.50;
    char teaRating = 'A';

    const int nameWidth = 15;
    const int priceWidth = 12;
    const int ratingWidth = 12;

    cout << "\n\n";

    cout << " *************** Tea Information *************\n\n";

    cout << "+----------------+-------------+--------------+" << endl;

    cout << "| " << setw(nameWidth) << left << "Tea Name"
         << "| " << setw(priceWidth) << left << "Tea Price"
         << "| " << setw(ratingWidth) << left << "Tea Rating" << " |" << endl;

    cout << "+----------------+--------------+-------------+" << endl;

    cout << "| " << setw(nameWidth) << left << teaName
         << "| $" << setw(priceWidth-1) << left << fixed << setprecision(2) << teaPrice
         << "| " << setw(ratingWidth) << left << fixed << setprecision(1) << teaRating << " |" << endl;

    cout << "+----------------+--------------+-------------+" << endl;

    cout << "\n\n\n";


    return 0;
}