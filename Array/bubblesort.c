#include<stdio.h>
int main()
{
    int count,temp,i,j,data[20];
    printf("Total Array size:");
    scanf("%d",&count);
    printf("Enter %d  numbers :",count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&data[i]);

    }
    for(i=count-2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;

            }
        }

    }
    printf("Sorted Elements:");
    for(i=0;i<count;i++)
    {
        printf(" %d",data[i]);
    }
    return 0;



}