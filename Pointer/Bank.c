#include <stdio.h>
// Function to deposit money into account
void deposit(int *balance, int amount) {
    *balance = *balance + amount;  // update actual balance using pointer
    printf("Deposited %d. Updated Balance: %d\n", amount, *balance);
}

// Function to withdraw money from account
void withdraw(int *balance, int amount) {
    if (*balance >= amount) {
        *balance = *balance - amount;
        printf("Withdrawn %d. Updated Balance: %d\n", amount, *balance);
    } else {
        printf("Insufficient Balance! Current Balance: %d\n", *balance);
    }
}
int main() {
    int balance = 1000;  // initial balance
    printf("Initial Balance: %d\n", balance);

    deposit(&balance, 500);   // passing address
    withdraw(&balance, 300);  // passing address
    withdraw(&balance, 1500); // insufficient funds

    return 0;
}
