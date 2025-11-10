// WAP to find simple interest using function

#include <iostream>
using namespace std;

float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period: ";
    cin >> time;
    
    cout << "Simple Interest: " << simpleInterest(principal, rate, time) << endl;
    
    return 0;
}
