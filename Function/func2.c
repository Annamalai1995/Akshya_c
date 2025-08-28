//function without aruguments with return type
#include<stdio.h>
int add();
void main()
{
    int sum;
    printf("\n Sum of NUmbers:");
    sum=add();
    printf("%d",sum);

}
int add()
{
    int alpha,beta;
    printf("\n Enter the Adding two numbers ");
    scanf("%d %d",&alpha,&beta);
    return alpha+beta;


}