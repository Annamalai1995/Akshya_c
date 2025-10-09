
//string array using bus chart
#include<stdio.h>
#include<string.h>
void main()
{
    char chart[5][6]; //multidimensional array
    int fare=0;
    for(int row=0;row<5;row++)
    {
        for(int seat=0;seat<5;seat++)
        {
            printf("\n Pay for the ticket");
            scanf("%d",&fare);
            if(seat==2)
            {
                chart[row][seat]=' ';
            }
            else{
                if(fare>=450)
                {
                    printf("\n seat has Booked @ row %d seat",row,seat);
                    chart[row][seat]='$';
                }
                else{
                    printf("\n Seat Hasn't Booked");
                    chart[row][seat]='#';
                }
            }
        }
        chart[row][5]='\n';
    }
    printf("\n%s",chart);
}