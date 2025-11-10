// WAP to accept a number four digit or not and check the sum of 1st and second digit should be greater than sum of third and fourth and the sum of all digit should be even and it is single digit or not

#include <iostream>
using namespace std;

int main() {
    int num, d1, d2, d3, d4, sum1, sum2, totalSum;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num >= 1000 && num <= 9999) {
        d1 = num / 1000;
        d2 = (num / 100) % 10;
        d3 = (num / 10) % 10;
        d4 = num % 10;
        
        sum1 = d1 + d2;
        sum2 = d3 + d4;
        totalSum = d1 + d2 + d3 + d4;
        
        if (sum1 > sum2) {
            if (totalSum % 2 == 0) {
                cout << "All conditions satisfied" << endl;
            } else {
                cout << "Sum of all digits is not even" << endl;
            }
        } else {
            cout << "Sum of 1st and 2nd digit is not greater than sum of 3rd and 4th digit" << endl;
        }
    } else {
        cout << num << " is not a 4 digit number" << endl;
    }
    
    return 0;
}
