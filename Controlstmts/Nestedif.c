#include<stdio.h>
int main()
{
    int age=0;double weight=0.0;
    printf("Enter the age");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n you are adult");
        printf("\n Enter weight");
        scanf("%lf",&weight);
        if(weight>=75.5&&weight<=120&&age<=60)
        {
            printf("\n you can play all games in wonderla");


        }
        else if(weight>=60&&weight<=80&&age<=60)
        {
            printf("\n you can play water games only");
        }
        else if(weight<=60 && weight>=30)
        {
            printf("\n you van play only dry games");
        }


    }
    else{
        printf("Thank visit again");
    }


}