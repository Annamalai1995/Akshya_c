#include<stdio.h>
int main()
{
    int moon=240;
    int sun=320;
    int earth=0;
    earth=moon&sun;
    printf("BITWISE AND is %d\n",earth);
    earth=moon|sun;
    printf("BITWISE OR is %d\n",earth);
    



}