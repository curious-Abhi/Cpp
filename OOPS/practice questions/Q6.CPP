/* Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.*/


#include<iostream>
#include<cmath> 
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Member function to calculate area
    double circle_area() {
        return 3.14 * radius * radius;
    }

    // Member function to calculate circumference
    double circle_circumference() {
        return 2 * 3.14 * radius;
    }

    // Member function to display results
    void showresult() {
        cout << "Area: " << circle_area() << endl;
        cout << "Circumference: " << circle_circumference() << endl;
    }
};

int main() {
    double rad;
    cout << "Enter radius: ";
    cin >> rad;
    Circle myobj(rad);
    myobj.showresult();
    return 0;
}
