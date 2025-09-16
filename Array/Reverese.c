#include<stdio.h>
#define N 100
int main()
{
    int arr[N];
    int n;
    printf("Enter the Size Of Array:");
    scanf("%d",&n);
    printf("Enter The Array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed Array:");
    for(int i=n-1;i>=0;i--)
    {
        printf(" %d", arr[i]);
    }
    return 0;

}