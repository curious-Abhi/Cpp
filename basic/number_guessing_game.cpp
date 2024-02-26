#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int randnum = (rand() % 100) + 1;
    int guess;
    int tries = 0; // Initializing tries to 0

    cout << "*************NUMBER GUESSING GAME****************\n"; 

    do
    {
        cout << "Enter any number 1-100: ";
        cin >> guess;
        tries++;
        if (guess > randnum)
        {
            cout << "Too High\n";
        }
        else if (guess < randnum)
        {
            cout << "Too Low\n";
        }
        else
        {
            cout << "Correct! Number is: " << randnum << " # of tries: " << tries << endl;
        }
    }
    while (guess != randnum);

    return 0;
}

/************************************OUTPUT*********************************
*************NUMBER GUESSING GAME****************
Enter any number 1-100: 56
Too Low
Enter any number 1-100: 78
Too Low
Enter any number 1-100: 89
Too High
Enter any number 1-100: 80
Too Low
Enter any number 1-100: 87
Too High
Enter any number 1-100: 85
Too High
Enter any number 1-100: 82
Too Low
Enter any number 1-100: 84
Too High
Enter any number 1-100: 83
Correct! Number is: 83 # of tries: 9
*/
