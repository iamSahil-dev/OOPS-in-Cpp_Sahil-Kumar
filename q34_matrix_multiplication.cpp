// Find matrix multiplication of both

#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], product[3][3];
    
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
            product[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                product[i][j] = product[i][j] + (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }
    
    cout << "Product of both matrices:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
