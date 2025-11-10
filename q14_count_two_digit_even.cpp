// WAP to accept 10 number array so and count 2 digit even number

#include <iostream>
using namespace std;

int main() {
    int arr[10], count = 0;
    
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            if (arr[i] % 2 == 0) {
                count++;
            }
        }
    }
    
    cout << "Count of 2 digit even numbers: " << count << endl;
    
    return 0;
}
