// Write a program to accept 10 numbers in array and display the addition

#include <iostream>
using namespace std;

int main() {
    int arr[10], sum = 0;
    
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    
    cout << "Sum of all numbers: " << sum << endl;
    
    return 0;
}
