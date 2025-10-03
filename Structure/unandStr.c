#include<stdio.h>
union detail
{
    char name[100];
    int id;
}company;
struct employee
{
    char emp_name[50];
    int emp_id;
}office;
int main()
{
    printf("Union And Structure");
    printf("union size:%d bytes\n",sizeof(company));
    printf("Strcuture size : %d bytes",sizeof(office));
    return 0;
    
}