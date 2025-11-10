// WAP to create a function for Cube root

#include <iostream>
using namespace std;

float cubeRoot(int num) {
    float x = num;
    float y = 1;
    float e = 0.000001;
    
    while (x - y > e) {
        x = (2 * x + num / (x * x)) / 3;
        y = num / (x * x);
    }
    return x;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Cube root of " << num << " is: " << cubeRoot(num) << endl;
    
    return 0;
}
