#include<iostream>
using namespace std;
int main()
{
    float salary=70000.0;

    //Bonus
    float bonus=salary * 0.20;

    //Assign bonus
    salary+=bonus;
     cout << "salary after bonus: $ " << salary << endl;

     //deduct tax
     float tax=salary * 0.10;
     //deduct tax print

     salary-=tax;
     cout << "Salary after tax : $" << salary << endl;


     return 0;
}