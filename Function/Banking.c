#include<stdio.h>
static int amount;
void deposit(int);
int withdraw(int);
int balance();
void main()
{
    amount=25000;
    deposit(15000);
    int status=withdraw(18000);
    printf("\n withdrawn status :%d",status);
    printf("\n Available balance is :%d",balance());


}
void deposit(int dep)
{
    amount+=dep;
    printf("\nDeposited");


}
int withdraw(int wish)
{
    if(amount>=wish)
    {
        amount-=wish;
        return 1;


    }
    else{
        return 0;
    }
}
int balance()
{
    return amount;
}