#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to CPP" << endl;

    // This is a comment

    /*
        This is a multi-line comment
        It can span multiple lines
    */

    int score;  // Variable declaration
    score = 100;  // Variable assignment
    cout << "Score: " << score << endl;  // Output the value of score

    int balance = 500;
    cout << "Balance: " << balance << endl;  

    const int uid = 34323;
    cout << "User ID: " << uid << endl;

    // uid = 2322; // This line will cause a compilation error because uid is a constant

    return 0;
}