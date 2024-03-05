#include <iostream>
#include <ctime>
using namespace std;

char get_userchoice();
char get_computerchoice();
void show_choice(char choice);
void check_winner(char player, char computer);

const char *rock =
    R"(
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
)";

const char *paper =
    R"(
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
)";

const char *scissors =
    R"(
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
)";

int main()
{
  char player;
  char computer;

  player = get_userchoice();
  cout << "you chose:";
  show_choice(player);

  computer = get_computerchoice();
  cout << "computer choice:";
  show_choice(computer);

  check_winner(player, computer);

  return 0;
}

char get_userchoice()
{
  char player;
  do
  {
    cout << "ROCK - PAPER - SCISSORS GAME\n";

    cout << "choose any one choice\n";
    cout << "*****************************\n";
    cout << " 'r' for Rock\n";
    cout << " 'p' for Paper\n";
    cout << " 's' for Scissors\n";
    cin >> player;
  } while (player != 'r' && player != 'p' && player != 's');
  return player;
}
char get_computerchoice()
{
  srand(time(0));
  int num = rand() % 3 + 1;
  switch (num)
  {
  case 1:
    return 'r';
  case 2:
    return 'p';
  case 3:
    return 's';
  }
}
void show_choice(char choice)
{
  switch (choice)
  {
  case 'r':
    cout << rock << "\n";
    break;
  case 'p':
    cout << paper << "\n";
    break;
  case 's':
    cout << scissors << "\n";
    break;
  }
}

void check_winner(char player, char computer)
{
  switch (player)
  {
  case 'r':
    if (computer == 'r')
    {
      cout << "It's a Tie\n";
    }
    else if (computer == 'p')
    {
      cout << "you lose!\n";
    }
    else
    {
      cout << "you won!\n";
    }
    break;
  
  case 'p':
    if (computer == 'p')
    {
      cout << "It's a Tie\n";
    }
    else if (computer == 's')
    {
      cout << "you lose!\n";
    }
    else
    {
      cout << "you won!\n";
    }
    break;
  case 's':
    if (computer == 's')
    {
      cout << "It's a Tie\n";
    }
    else if (computer == 'r')
    {
      cout << "you lose!\n";
    }
    else
    {
      cout << "you won!\n";
    }
    break;
  }
}
