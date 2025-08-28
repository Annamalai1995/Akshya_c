//function with arugments and without return type

#include<stdio.h>
void add(int alpha,int beta)
{
    printf("\n The sum values is %d",alpha+beta);


}
void main()
{
    int alpha,beta,sum;
    printf("\n sum numbers");
    printf("\n Enter the value");
    scanf("%d %d",&alpha,&beta);
    add(alpha,beta);
}