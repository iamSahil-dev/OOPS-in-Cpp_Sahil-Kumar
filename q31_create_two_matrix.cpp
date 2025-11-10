// WAP to create two matrix [3][3]

#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3];
    
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
    
    cout << "First matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Second matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
