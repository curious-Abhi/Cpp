#include <iostream>
#include<iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    int choice = 0;
    double balance =0;
    cout << "***************Banking system****************\n";

    do
    {
        cout << "1.SHOW BALANCE\n";
        cout << "2.DEPOSIT\n";
        cout << "3.WITHDRAW\n";
        cout << "4.EXIT\n";

        cout << "Enter choice from above: ";
        cin >> choice;
        cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit(); 
            showBalance(balance);
            break;

        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;

        case 4:
            cout << "Thanks for visiting\n";
            break;
        
        default:
            cout << ("INVALID CHOICE\n");
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    cout<<"Your balance is $"<<setprecision(2)<<fixed<<balance<<"\n";
}
double deposit()
{
    double amount=0;
    cout<<"Enter the amount to be deposited:";
    cin>>amount;
    if(amount>0){
           return amount;
    }
    else{
        cout<<"That's not valid amount";
    }

    
}
double withdraw(double balance)
{
    double amount=0;
    cout<<("Enter amount to withdraw:");
    cin>>amount;
    if(amount>balance){
        cout<<"Insufficient funds\n";
          return 0;
    }  
    else if(amount<0){
        cout<<"Thats not valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}



/**************OUTPUT********************
 ***************Banking system****************
1.SHOW BALANCE
2.DEPOSIT
3.WITHDRAW
4.EXIT
Enter choice from above: 3
Enter amount to withdraw:345
Insufficient funds
Your balance is $0.00
1.SHOW BALANCE
2.DEPOSIT
3.WITHDRAW
4.EXIT
Enter choice from above: 2
Enter the amount to be deposited:3456
Your balance is $3456.00
1.SHOW BALANCE
2.DEPOSIT
3.WITHDRAW
4.EXIT
Enter choice from above: 3
Enter amount to withdraw:678
Your balance is $2778.00
1.SHOW BALANCE
2.DEPOSIT
3.WITHDRAW
4.EXIT
Enter choice from above: 3
Enter amount to withdraw:789999
Insufficient funds
Your balance is $2778.00
1.SHOW BALANCE
2.DEPOSIT
3.WITHDRAW
4.EXIT
Enter choice from above: 3
Enter amount to withdraw:2778
Your balance is $0.00
1.SHOW BALANCE
2.DEPOSIT
3.WITHDRAW
4.EXIT
Enter choice from above: 1
Your balance is $0.00
1.SHOW BALANCE
2.DEPOSIT
3.WITHDRAW
4.EXIT
Enter choice from above: 4
Thanks for visiting
*/