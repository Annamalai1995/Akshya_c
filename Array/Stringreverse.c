#include<stdio.h>
#include<string.h>
int main()
{
    char name[20]; //String Declare
    printf("\n Enter The String values:");
    scanf("%s",name);
    //use Array()
    printf("\n Reverse String :%s",strrev(name));
    return 0;

}