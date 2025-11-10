// WAP to accept a string & reverse from user and display the string

#include <iostream>
using namespace std;

int main() {
    char str[100], reverse[100];
    int length = 0;
    
    cout << "Enter a string: ";
    cin.getline(str, 100);
    
    while (str[length] != '\0') {
        length++;
    }
    
    for (int i = 0; i < length; i++) {
        reverse[i] = str[length - 1 - i];
    }
    reverse[length] = '\0';
    
    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reverse << endl;
    
    return 0;
}
