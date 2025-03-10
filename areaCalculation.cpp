#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int choice;
    double area;

    cout << "Enter which calculation you want to do: " << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Square" << endl;
    cout << "3. Area of Rectangle" << endl;
    cout << "4. Area of Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: { 
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = M_PI * radius * radius; 
            cout << "Area of the circle is: " << area << endl;
            break;
        }
        case 2: { 
            double side;
            cout << "Enter the value of the side: ";
            cin >> side;
            area = side * side; 
            cout << "Area of the square is: " << area << endl;
            break;
        }
        case 3: { 
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width; 
            cout << "Area of the rectangle is: " << area << endl;
            break;
        }
        case 4: { 
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            area = 0.5 * base * height; 
            cout << "Area of the triangle is: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
