#include<stdio.h>
void main()
{
    int row,column;
    printf("Enter the rows size");
    scanf("%d",&row);
    printf("Enter the colums size");
    scanf("%d",&column);
    int arr[row][column];
    int a,b;
    printf("Enter Array elements:\n");
    for(a=0;a<row;a++)
    {
        for(b=0;b<column;b++)
        {
            scanf("%d",&arr[a][b]);
        }
    }
    int sum=0;
    for(a=0;a<row;a++)
    {
        for(b=0;b<column;b++)
        {
            sum+=arr[a][b];
        }
    }
    printf("sumof elements:%d",sum);

}