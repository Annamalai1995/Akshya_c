#include<stdio.h>
int main()
{
    int row=0,column=0;
    int arr[3][3]={{22,11,22},{22,11,11},{22,11,22}};
    for(row=0;row<3;row++)
    {
        for(column=0;column<3;column++)
        {
            printf("arr[%d][%d]=[%d]\n",row,column,arr[row][column]);
        }
        
    }
    return 0;

}