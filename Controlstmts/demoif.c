#include<stdio.h>
void main()
{
    float weight=0.0f;
    printf("tell us weight:");
    scanf("%f",&weight);
    if(weight>=40&&weight<=89)
    {
        printf("\n you are eligible for cricket tournment");
    }
    else
    {
        printf("\n Not eligible");
    }
}