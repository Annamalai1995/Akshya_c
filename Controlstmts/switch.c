#include<stdio.h>
int main()
{
    char travel;
    int amt;
    travel=getchar();
    switch ((travel))
    {
        case 'b':
        printf("\n Banglore timing bus after 2 pm");
        break;
        case 'h':
        printf("\n Hyderabad timing bus after 7 Pm ");
        break;
        case 's':
        printf("\n Salem Bus any Time available");
        break;
        default:
        printf("\n Not valid Input");
        
        
    }
}