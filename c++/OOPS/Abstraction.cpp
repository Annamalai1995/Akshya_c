#include<iostream>
using namespace std;
class Bank
{
    private:
    string acco_no;
    double acc_bal;
    public :
    //Constructor with parameter
    Bank(string acc_number,double balance)
    {
        acco_no=acc_number;
        acc_bal=balance;



    }
    void deposit(double amt)
    {
        if(amt > 0)
        {
            acc_bal+=amt;
            cout << "Deposit:" << amt << endl;
        }
        else{
            cout << "Invalid Deposit" << endl;
        }
    }
    void withdraw(double amt)
    {
        if(amt > 0 && amt <= acc_bal)
        {
            acc_bal-=amt;
            cout << "withdraw" << amt << endl;
        }
        else{
            cout << "Invalid balance" << endl;
        }


    }
    void balace_enqiuiry()
    {
        cout << "Avaliable Balance :" << acc_bal << endl;
    }

};
int main()
{
    Bank b("12457822",150000.0);
    b.deposit(15000.0);
    b.withdraw(450.0);
    b.balace_enqiuiry();
    return 0;
}