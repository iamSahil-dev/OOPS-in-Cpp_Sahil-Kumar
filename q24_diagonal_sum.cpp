// Display sum of all diagonals

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], primarySum = 0, secondarySum = 0;
    
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        primarySum = primarySum + matrix[i][i];
        secondarySum = secondarySum + matrix[i][2 - i];
    }
    
    cout << "Sum of primary diagonal: " << primarySum << endl;
    cout << "Sum of secondary diagonal: " << secondarySum << endl;
    
    return 0;
}
