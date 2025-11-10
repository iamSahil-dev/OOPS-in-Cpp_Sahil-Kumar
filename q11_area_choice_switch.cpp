// WAP area of 1.circle 2.circumference 3.Perimeter of triangle 4.Its your choice

#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, base, height, side1, side2, side3, length, width;
    
    cout << "Choose an option:" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Circumference of Circle" << endl;
    cout << "3. Perimeter of Triangle" << endl;
    cout << "4. Area of Rectangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of Circle: " << 3.14 * radius * radius << endl;
            break;
        case 2:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Circumference of Circle: " << 2 * 3.14 * radius << endl;
            break;
        case 3:
            cout << "Enter side 1: ";
            cin >> side1;
            cout << "Enter side 2: ";
            cin >> side2;
            cout << "Enter side 3: ";
            cin >> side3;
            cout << "Perimeter of Triangle: " << side1 + side2 + side3 << endl;
            break;
        case 4:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "Area of Rectangle: " << length * width << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}
