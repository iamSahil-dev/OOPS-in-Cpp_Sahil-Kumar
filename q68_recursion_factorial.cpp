// Getting started with C++ syntax - data type, variable, string, function, recursion, pointer, flow control

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Factorial: " << factorial(num) << endl;
    
    return 0;
}
