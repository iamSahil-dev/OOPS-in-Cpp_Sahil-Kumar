// Display the maximum number

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], max;
    
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    max = matrix[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    
    cout << "Maximum number in matrix: " << max << endl;
    
    return 0;
}
