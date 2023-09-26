#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Constants for cookie sizes
    const int SIZE_6_INCH = 6;
    const int SIZE_8_INCH = 8;
    const int SIZE_12_INCH = 12;

    // Declare variables
    string fullName, cookieType;
    int studentID, cookieSize;
    double area = 0.0;

    // Prompt the user to enter information
    cout << "Enter your full name: ";
    getline(cin, fullName); // Allowing spaces in full name
    cout << "Enter your 7-digit student ID: ";
    cin >> studentID;
    cout << "Enter the type of cookie (chocolate chip, oatmeal raisin, or snickerdoodle): ";
    cin.ignore(); // Clear the newline character
    getline(cin, cookieType);
    cout << "Enter the cookie size (6, 8, or 12 inches): ";
    cin >> cookieSize;

    // Calculate the area of the cookie
    if (cookieSize == SIZE_6_INCH) {
        area = M_PI * pow(cookieSize / 2.0, 2);
    } else if (cookieSize == SIZE_8_INCH) {
        area = M_PI * pow(cookieSize / 2.0, 2);
    } else if (cookieSize == SIZE_12_INCH) {
        area = M_PI * pow(cookieSize / 2.0, 2);
    } else {
        cout << "Invalid cookie size entered." << endl;
        return 1; // Exit with an error code
    }

    // Display the student's information and cookie area
    cout << "\nStudent's Information:\n";
    cout << "Full Name: " << fullName << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Cookie Type: " << cookieType << endl;
    cout << "Cookie Size: " << cookieSize << " inches" << endl;
    cout << fixed << setprecision(2); // Set precision to two decimal places
    cout << "Cookie Area: " << area << " square inches" << endl;

    return 0;
}
