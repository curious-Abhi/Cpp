#include <iostream>
using namespace std;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            cout << "Congratulations! You won!" << endl;
            break;
        }
        if (checkTie(spaces)) {
            cout << "It's a tie!" << endl;
            break;
        }
        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            cout << "Sorry, you lost. Better luck next time!" << endl;
            break;
        }
        if (checkTie(spaces)) {
            cout << "It's a tie!" << endl;
            break;
        }
    }
    //cout<<"Thanks for playing!";
    return 0;
}

void drawBoard(char *spaces) {
    cout << '\n';
    cout << "     |     |     \n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  \n";
    cout << "     |     |     \n";
    cout << '\n';
}

void playerMove(char *spaces, char player) {
    int number;
    do {
        cout << "Enter spot to place marker(1-9): ";
        cin >> number;
        number--;
        if (number >= 0 && number < 9 && spaces[number] == ' ') { 
            spaces[number] = player;
            break;
        }
        else {
            cout << "Invalid spot or spot already taken. Please choose another spot.\n";
        }
    } while (true);
}

void computerMove(char *spaces, char computer) {
    int spot;
    do {
        spot = rand() % 9; 
    } while (spaces[spot] != ' '); 
    spaces[spot] = computer;
}

bool checkWinner(char *spaces, char player, char computer) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (spaces[i * 3] == player && spaces[i * 3 + 1] == player && spaces[i * 3 + 2] == player)
            return true;
        if (spaces[i * 3] == computer && spaces[i * 3 + 1] == computer && spaces[i * 3 + 2] == computer)
            return true;
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (spaces[i] == player && spaces[i + 3] == player && spaces[i + 6] == player)
            return true;
        if (spaces[i] == computer && spaces[i + 3] == computer && spaces[i + 6] == computer)
            return true;
    }
    // Check diagonals
    if ((spaces[0] == player && spaces[4] == player && spaces[8] == player) ||
        (spaces[2] == player && spaces[4] == player && spaces[6] == player))
        return true;
    if ((spaces[0] == computer && spaces[4] == computer && spaces[8] == computer) ||
        (spaces[2] == computer && spaces[4] == computer && spaces[6] == computer))
        return true;
    return false;
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ')
            return false; 
    }
    return true; 
}
