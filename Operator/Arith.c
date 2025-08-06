#include<stdio.h>
void main()
{
    int litre,kms;
    printf("Enter litre of fuel driven kms:");
    scanf("%d%d",&litre,&kms);
    int mileage=litre/kms;
    
    float fuel=(float)litre/kms;
    printf("\n The consumed fuel :%f",fuel);

}