#include<stdio.h>
void main()
{
    int beta[10];
    int a;
    printf("REad the Print elements Array:\n");
    printf("Inputs OF array Elements:\n");
    for(int a=0;a<10;a++)
    {
        printf("Elements = %d", a);
        scanf("%d",&beta[a]);
        
    }
    printf("\n Elements Array Are:");
    for(a=0;a<10;a++)
    {
        printf(" %d ", beta[a]);
    }
    printf("\n");
}