// WAP to count the word from the size string given by the user

#include <iostream>
using namespace std;

int main() {
    char str[100];
    int words = 0, i = 0;
    
    cout << "Enter a string: ";
    cin.getline(str, 100);
    
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            words++;
        }
        i++;
    }
    
    if (str[0] != '\0' && str[0] != ' ') {
        words++;
    }
    
    cout << "Number of words: " << words << endl;
    
    return 0;
}
