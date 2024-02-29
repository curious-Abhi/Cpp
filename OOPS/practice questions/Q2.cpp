
/*Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.*/

#include<iostream>
#include<string> 
using namespace std;

class Student {
public: 
    int roll_num;
    string phone_no; 
    string address;
};

int main() {
    //creating first object
    Student Sam;
    Sam.roll_num = 2;
    Sam.phone_no = "76549408756"; 
    Sam.address = "Bihar";
   
   // creating second object
    Student John;
    John.roll_num = 4;
    John.phone_no = "74329408756"; 
    John.address = "Raipur";

    //printing values
    cout << "Sam's details: " << Sam.roll_num << " " << Sam.phone_no << " " << Sam.address << "\n";
    cout << "John's details: " << John.roll_num << " " << John.phone_no << " " << John.address << "\n";

    return 0;
}
