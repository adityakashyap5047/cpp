#include <iostream>

using namespace std;

namespace hello {
    void display() {
        cout << "Hello from namespace";
    }
}

using namespace hello;

int main() {
    display();
    return 0;
}