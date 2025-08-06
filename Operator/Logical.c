#include<stdio.h>
int main()
{
    //AND
    int budget=0;
    printf("Tell us your budget");
    scanf("%d",&budget);
    printf("\n can i get free delivery:%d",((budget>250)));
    printf("\n can i get 10 percent:%d",((budget>850))&&(budget<=3000));
    return -1;
//OR

// char bank='\0';
// printf("\n Enter the bank first letter of your debit card");
// bank=getchar();
// printf("\n Am i eligible to get 10 percent additional discount:%d",
// ((bank=='h')||(bank=='H')||(bank=='c')||(bank=='C')));

}