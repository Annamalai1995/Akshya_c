#include<stdio.h>
void main()
{
    int budget=0;
    printf("\n Tell us budget for laptop");
    scanf("%d",&budget);
    if(budget>=18000&&budget<=30000)
    {
        printf("You have buy a Macbook");
    }
    else if(budget>=80000&&150000)
    {
        printf("\n you have buy Sony ");
    }
     else if(budget>=45000&&75000)
    {
        printf("\n you have buy HP ");
    }
     else if(budget>=35000&&65000)
    {
        printf("\n you have buy DEll ");
    }

}