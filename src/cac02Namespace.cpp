#include <iostream>

using namespace std;

namespace hello {
    void display() {
        cout << "Hello from namespace";
    }
}

int main() {
    hello::display();
    return 0;
}