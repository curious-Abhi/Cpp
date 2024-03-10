#include<iostream>
using namespace std;

// Function prototype with pass by value
void swap(string x, string y); 

int main() {
    string x = "HRITHIK";
    string y = "ABHISHEK";

    cout << "Before swapping:\n";
    cout << "X: " << x << "\n";
    cout << "Y: " << y << "\n";
    
    swap(x, y); // Call the swap function

    cout << "After swapping:\n";
    cout << "X: " << x << "\n";
    cout << "Y: " << y << "\n";
    
    return 0;
}

// Function definition with pass by value
void swap(string x, string y) {
    string temp = x;
    x = y;
    y = temp;
}
