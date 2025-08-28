//function with arugments and with return type

#include<stdio.h>
int add(int alpha,int beta)
{
    return alpha+beta;
}


void main()
{
    int alpha,beta,sum;
    printf("\n sum numbers");
    printf("\n Enter the value");
    scanf("%d %d",&alpha,&beta);
    sum=add(alpha,beta);
    printf("\n adding value:%d",sum);
}