// Count Armstrong numbers

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], count = 0;
    
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = matrix[i][j];
            int original = num;
            int sum = 0;
            while (num != 0) {
                int remainder = num % 10;
                sum = sum + (remainder * remainder * remainder);
                num = num / 10;
            }
            if (sum == original && original >= 0) {
                count++;
            }
        }
    }
    
    cout << "Count of Armstrong numbers: " << count << endl;
    
    return 0;
}
