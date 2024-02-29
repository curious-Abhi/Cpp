/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.*/

#include<iostream>
#include<cmath>
using namespace std;

class Triangle {
public:
    int s1, s2, s3;

    double calculate_perimeter() {
        return s1 + s2 + s3;
    }
    
    double calculate_area() {
        double s = calculate_perimeter() / 2;
        return sqrt(s * (s - s1) * (s - s2) * (s - s3));
    }
};

int main() {
    Triangle myTriangle;
    myTriangle.s1 = 3;
    myTriangle.s2 = 4;
    myTriangle.s3 = 5;

    cout << "Perimeter of the triangle: " << myTriangle.calculate_perimeter() << " units" << endl;
    cout << "Area of the triangle: " << myTriangle.calculate_area() << " square units" << endl;

    return 0;
}

