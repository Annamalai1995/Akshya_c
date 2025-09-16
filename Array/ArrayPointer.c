#include<stdio.h>
int main()
{
    int arr[]={45,85,99,88,77,66};
    int i;
    for(i=0;i<6;i++)
    {
        printf("[Position %d] Data:%u,Address:%d\n",i,
            *(arr+i),(arr+i));
    }
    return 0;


}