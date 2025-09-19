#include<stdio.h>
#include<string.h>
//Define 
struct college
{
    char name[20];
    int age;
    char place[20];


};
void main()
{
    struct  college c;
    c.age=29;
    strcpy(c.name,"Annamalai");
    strcpy(c.place,"Salem");

    printf("Name :%s\n",c.name);
    printf("Age is:%d\n",c.age);
    printf("Place is:%s",c.place);
    

    
}



