// WAP to create a function for Cube number

#include <iostream>
using namespace std;

int cubeNumber(int num) {
    return num * num * num;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Cube of " << num << " is: " << cubeNumber(num) << endl;
    
    return 0;
}
