#include<stdio.h>
void main()
{
    int seat,amt,cabin;
    for(cabin=1;cabin<=4;cabin++)
    {
        for(seat=1;seat<=4;seat++){
            printf("\n Enter the amount:");
            scanf("%d",&amt);
            if(amt>=150)
            {
                printf("\n u can travel");
            }
            else{
                printf("\n you can't travel");
            }
        }
    }

}