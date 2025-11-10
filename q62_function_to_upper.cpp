// WAP to convert lowercase to uppercase using function

#include <iostream>
using namespace std;

char toUpper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    }
    return ch;
}

int main() {
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    cout << "Uppercase: " << toUpper(ch) << endl;
    
    return 0;
}
