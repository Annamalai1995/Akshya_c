//Console APP
#include <iostream>
using namespace std;
int main()
{
    string username,password;
    float balance=100000.00;
    int choice;
    float amount;
    
    //Login using nested if:
    cout << "Welcome to HDFC BANK \n";
    cout << "Enter Username";
    cin >> username;

    if(username =="Sam123")
    {
        cout << "Enter password";
        cin >> password;
        if( password == "1234")
        {
            cout << "\n Login Succesfully \n";

            //MENUS Banking
            cout << "\n 1.Balance check\n";
            cout << "\n 2.Deposit\n";
            cout << "\n 3.Withdraw \n";
            cout << "\n 4. Exit\n";

            cout << "\n Enter you Choice \n ";
            cin >> choice;
            
            if(choice == 1)
            {
                cout << "Available Balance $:" << balance << endl;

            }
            else if(choice == 2)
            {
                cout << "Enter deposit amount :$";
                cin >> amount;
                if(amount > 0)
                {
                    balance+=amount;
                    cout << "Deposit successfully .New Balance :$"<< balance << endl;

                }
                else{
                    cout << "Invalid deposit amount \n";
                }
            }
            else if (choice == 3)
            {
                cout << "Enter amount withdraw:$";
                cin >> amount;
                if(amount > 0)
                {
                    if(amount <= balance)
                    {
                        balance-=amount;
                        cout << "withdraw Successfully Avaliable balance :$ >" << balance << endl;

                    }else{
                        cout << "Insufficient Balance \n";
                    }
                    
                }
                

            }
        
            else if (choice == 4)
            {
                cout << "Thank you \n";
            }
            else{
                cout << "Invalid Choice \n";
            }
        } else{
            cout << "Incorrect Password\n";
        }
    }        
        else
        {
            cout << "Username not found \n";
        }
    
    return 0;

}