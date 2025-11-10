// Print integer 5 in an array

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Array elements are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
