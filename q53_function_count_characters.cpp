// WAP to create a function for Count of characters

#include <iostream>
using namespace std;

int countCharacters(char str[]) {
    int count = 0;
    
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);
    
    cout << "Number of characters: " << countCharacters(str) << endl;
    
    return 0;
}
