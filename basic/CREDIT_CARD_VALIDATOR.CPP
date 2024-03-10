#include <iostream>
using namespace std;

bool isvalidcreditcardnumber(const string &cardnumber);

int main()
{

    string cardnumber;
    cout << "Enter any credit card number:";
    cin >> cardnumber;

    if (isvalidcreditcardnumber(cardnumber))
    {
        cout << "Valid credit card number.\n";
    }
    else
    {
        cout << "InValid credit card number.\n";
    }

    return 0;
}
// Function to check if a credit card number is valid using the Luhn algorithm
bool isvalidcreditcardnumber(const string &cardnumber)
{
    int sum = 0;
    bool isSecondDigit = false;

    for (int i = cardnumber.length() - 1; i >= 0; --i)
    {
        int digit = cardnumber[i] - '0'; // Convert character digit to integer value

        // Double every second digit moving left, starting with the second-to-last digit
        if (isSecondDigit)
        {
            digit *= 2;
        }
        // If doubling a digit results in a number greater than 9, subtract 9 from the product
        if (digit > 9)
        {
            digit = digit % 10 + digit / 10;
        }
        sum += digit; // sum all digits together
        isSecondDigit = !isSecondDigit;
    }
    return (sum % 10 == 0);
}