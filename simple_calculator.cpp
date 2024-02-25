#include <iostream>
#include <string> 
using namespace std;

int main() {
    double a, b;
    char op;
    string should_continue; 
    bool repeat = true; 

    while (repeat) { // Use the 'repeat' variable as the condition for the while loop
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "CHOOSE operator out of +, -, *, /: ";
        cin >> op;

        switch (op) {
            case '+':
                cout << "Result: " << a + b;
                break;
            case '-':
                cout << "Result: " << a - b;
                break;
            case '*':
                cout << "Result: " << a * b;
                break;
            case '/':
                if (b != 0) {
                    cout << "Result: " << a / b;
                } else {
                    cout << "Error! Division by zero.";
                }
                break;
            default:
                cout << "Invalid operator";
        }

        cout << "\nEnter 'yes' to calculate again or 'no' to exit: ";
        cin >> should_continue;

        if (should_continue == "yes") {
            repeat = true;
        } else {
            repeat = false;
            cout << "Exiting..."; // feedback before exiting
        }
    }

    return 0;
}
