// Sort matrix in ascending order

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], arr[9], k = 0;
    
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
            arr[k] = matrix[i][j];
            k++;
        }
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = arr[k];
            k++;
        }
    }
    
    cout << "Matrix in ascending order:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
