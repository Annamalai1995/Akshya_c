#include<stdio.h>
#include<string.h>
union unionEx
{
    int a;
    char b;
};   
int main()
{
    union unionEx x;
    x.a=50;   //using dot operator
    printf("%d\n",x.a);

    x.b='A';
    printf("%c",x.b);

    return 0;
}