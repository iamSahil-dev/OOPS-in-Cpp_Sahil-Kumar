// WAP to find compound interest using function

#include <iostream>
using namespace std;

float compoundInterest(float principal, float rate, float time) {
    float amount = principal;
    for (int i = 0; i < time; i++) {
        amount = amount * (1 + rate / 100);
    }
    return amount - principal;
}

int main() {
    float principal, rate, time;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period: ";
    cin >> time;
    
    cout << "Compound Interest: " << compoundInterest(principal, rate, time) << endl;
    
    return 0;
}
