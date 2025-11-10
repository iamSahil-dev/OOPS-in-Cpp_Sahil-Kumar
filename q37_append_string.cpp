// WAP to accept a string from user and append it to another string

#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    int length1 = 0, length2 = 0;
    
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    
    while (str1[length1] != '\0') {
        length1++;
    }
    
    while (str2[length2] != '\0') {
        str1[length1] = str2[length2];
        length1++;
        length2++;
    }
    str1[length1] = '\0';
    
    cout << "Concatenated string: " << str1 << endl;
    
    return 0;
}
