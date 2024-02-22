#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int choice;    
    double radius, length, width, area;
    // PI not declare
    const double PI = 3.14;

    cout << "Choose a shape to its area: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "Enter your choice (1 or 2 ): ";
    // There's no user input for choice
    cin >> choice;

    if (choice == 1){
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        area = PI * pow(radius, 2);
        //after
        cout << "Area of the circle is: " << area << endl;
        // before
        //cout << "Area of the circle is: " << area.endl;
    }
    else if (choice == 2){
        cout << "Enter the length and width of the rectangle: " << endl;
        cout << "Enter the length of the rectangle: " << endl;
        cin >> length;
        // wrong direction for cin
        cout << "Enter the width of the rectangle: " << endl;
        cin >> width;
        //wrong direction for cin

        //invalid input only for negative number but > this is for greater than 0
        if (length <= 0 || width <= 0){
            cout << "Invalid input. Length and width cannot be negative or zero." << endl;
        }
        else {
            area = length * width;
            cout << "Area of rectangle is: " << area << endl;
        }
    }
    else {
        cout << "Invalid choice. Please choose 1 or 2." << endl;
    }

    return 0;
}
