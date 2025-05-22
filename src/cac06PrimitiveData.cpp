#include <iostream>

using namespace std;

int main() {

    int teaLeaves = 50;
    float waterTemp = 85.5; // float is used for precision upto 7 decimal places
    double priceOfTea = 299.99; // double is used for high precision upto 15 decimal places
    char teaGrade = 'A';
    bool isReady = false;
    
    cout << teaGrade;
    
    // char teaGrade = 'AB';   // it will only take the last character 'B'
    // bool isReady = ''; // it will give the error that it cannot convert '' to bool
    return 0;
}