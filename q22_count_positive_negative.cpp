// Count all positive and negative numbers

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], positive = 0, negative = 0;
    
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
            if (matrix[i][j] > 0) {
                positive++;
            } else if (matrix[i][j] < 0) {
                negative++;
            }
        }
    }
    
    cout << "Count of positive numbers: " << positive << endl;
    cout << "Count of negative numbers: " << negative << endl;
    
    return 0;
}
