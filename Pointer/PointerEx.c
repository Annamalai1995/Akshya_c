#include<stdio.h>
int main()
{
    int a=50;
    int *p;
    p=&a;

    printf("Values of A:%d\n",a);
    printf("Address of A:%p\n",&a);
    printf("Pointer Address:%p\n",p);
    printf("Values of Pointer :%d\n",*p);
    return 0;
    
}