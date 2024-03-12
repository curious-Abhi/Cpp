#include <iostream>
using namespace std;

string reverseString(string str);

int main() {
    string str;
    cout << "Enter a string to reverse: ";
    cin >> str;

    // Call the reverseString function and print the reversed string
    cout << "Reversed string: " << reverseString(str) << endl;

    return 0;
}

// Function definition
string reverseString(string str) {
    if (str.length() <= 1) {
        return str;
    }
    // Recursive step: reverse the substring from index 1 to the end
    // and concatenate the first character at the end
    return reverseString(str.substr(1)) + str[0];
}
