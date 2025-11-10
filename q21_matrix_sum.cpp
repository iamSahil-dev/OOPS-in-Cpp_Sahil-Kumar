// Add the numbers, display them, and find sum of the matrix

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], sum = 0;
    
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
            sum = sum + matrix[i][j];
        }
    }
    
    cout << "The matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Sum of all elements: " << sum << endl;
    
    return 0;
}
