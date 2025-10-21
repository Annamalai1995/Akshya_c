#include<iostream>
#include<string>
using namespace std;
int main()
{
    string pin;
    int attempts=0;
    const string retypepin="sam123";
    double balance=15000.0;
    int choice;
    double amount;


    //Login 
    while( attempts < 3)
    {
        cout << "Enter ATM pin";
        cin >> pin;
        
        if(pin == retypepin)
        {
            cout << "Login Successfully";
            break;
        }else{
            cout << "Incorrect Pin \n";
            attempts++;


        }
        if(attempts==3)
        {
            cout << "Account Blocked Go to Near By Branch ";
            return 0;

        }


    }

    do 
    {
        cout << "\n ATM MENU CHOICE \n";
        cout << "1.Balance Enquiry \n";
        cout << "2.Deposit \n";
        cout << "3.Withdraw \n";
        cout << "4.Mini statements \n ";
        cout << "5.Exit \n";
        cout << "Choose The Option (1 to 5)";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout << "Available Balance $:" << balance << "\n";
            break;

            case 2:
            cout << "Enter Deposit Amount:$";
            cin >> amount;
            if(amount > 0)
            {
                balance += amount;
                cout << "Deposited :$" << amount << "New Balance :$" << balance << "\n";

            }else{
                cout << "Invalid amount.\n";
            }
            break;

            case 3:
            cout << "Enter Withdraw amount :$";
            cin >> amount;
            if(amount > 0 && amount <=balance)
            {
                balance -= amount;
                cout << "Withdraw : $ " << amount << "New Balance : $" << balance  << "\n";
            }else {
                cout << "Insuficient Balance \n";
            }
            break;

            case 4:
            cout << "Last 5 Transacions \n";
            for (int i=5;i>=1;i--)
            {
                cout << i << ".$" << (i * 50) << "Debited \n";
            }
            break;
            case 5:
            cout << "Thank you for using HDFC BANK";
            break;

            default:
            cout  << "Invalid Choice \n";




        }
    }while(choice !=5);
    return 0;


}