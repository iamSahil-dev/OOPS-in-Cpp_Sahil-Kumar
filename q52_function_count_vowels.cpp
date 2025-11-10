// WAP to create a function for Count of vowels

#include <iostream>
using namespace std;

int countVowels(char str[]) {
    int count = 0, i = 0;
    
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);
    
    cout << "Number of vowels: " << countVowels(str) << endl;
    
    return 0;
}
