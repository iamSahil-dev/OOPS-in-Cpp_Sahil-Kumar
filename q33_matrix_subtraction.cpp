// Subtraction the value of both matrix

#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], difference[3][3];
    
    cout << "Enter elements of first 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter elements of second 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    
    cout << "Difference of both matrices:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << difference[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
