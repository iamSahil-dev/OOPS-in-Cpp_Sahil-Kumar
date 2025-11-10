// WAP to convert uppercase to lowercase using function

#include <iostream>
using namespace std;

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

int main() {
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    cout << "Lowercase: " << toLower(ch) << endl;
    
    return 0;
}
