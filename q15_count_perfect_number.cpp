// WAP to create array of 10 number and count the perfect number

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
        int sum = 0;
        for (int j = 1; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                sum = sum + j;
            }
        }
        if (sum == arr[i] && arr[i] > 0) {
            count++;
        }
    }
    
    cout << "Count of perfect numbers: " << count << endl;
    
    return 0;
}
