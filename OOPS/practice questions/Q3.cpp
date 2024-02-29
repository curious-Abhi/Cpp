/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with the constructor having the three sides as its parameters.*/

#include <iostream>
#include <cmath>  // For sqrt function
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the sides of the triangle
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to calculate the perimeter of the triangle
    double calculatePerimeter() {
        return side1 + side2 + side3;
    }

    // Function to calculate the area of the triangle using Heron's formula
    double calculateArea() {
        // Heron's formula: area = sqrt(s * (s - side1) * (s - side2) * (s - side3))
        double s = calculatePerimeter() / 2; // semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Function to print the area and perimeter of the triangle
    void printDetails() {
        cout << "Perimeter of the triangle: " << calculatePerimeter() << " units" << endl;
        cout << "Area of the triangle: " << calculateArea() << " square units" << endl;
    }
};

int main() {
    // Create a Triangle object with sides of 3, 4, and 5 units
    Triangle triangle(3, 4, 5);

    // Print the area and perimeter of the triangle
    triangle.printDetails();

    return 0;
}
