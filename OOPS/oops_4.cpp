//outside class definition


#include<iostream>
using namespace std;

class MyClass{
   public:
    void myMethod();  // Method/function declaration
};

// Method/function definition outside the class
void MyClass ::myMethod(){
    cout<<"Hello world";
}

int main(){
    MyClass myObj1; // Create an object of MyClass
    myObj1.myMethod();// Call the method
    return 0;
}