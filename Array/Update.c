#include<stdio.h>
void main()
{
    int pos;
    int newvalue;
    int arr[]={450,350,45,85,3,1,2,5};
    printf("Before Update Array \n");
    for(int size=0;size<8;size++)
    {
        printf("%d \t",arr[size]);
    }
    printf("\n Which position you want update Array list \n");
    scanf("%d",&pos);
    printf("\n ENter the new value \n");
    scanf("%d",&newvalue);
    arr[pos]=newvalue;
    printf("after update value \n");
     for(int size=0;size<8;size++)
    {
        printf("%d \t",arr[size]);
    }
    
}