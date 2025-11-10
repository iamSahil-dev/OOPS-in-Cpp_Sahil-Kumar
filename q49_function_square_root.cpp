// WAP to create a function for Square root

#include <iostream>
using namespace std;

float squareRoot(int num) {
    float x = num;
    float y = 1;
    float e = 0.000001;
    
    while (x - y > e) {
        x = (x + y) / 2;
        y = num / x;
    }
    return x;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Square root of " << num << " is: " << squareRoot(num) << endl;
    
    return 0;
}
