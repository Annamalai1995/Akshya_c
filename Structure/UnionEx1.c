#include<stdio.h>
#include<string.h>
union College
{

    char stu_name[50];
    int age;
    char College_name[50];
    int fee;

};
int main()
{
    union College c;
    strcpy(c.stu_name,"Akshya");
    c.age=20;
    strcpy(c.College_name,"GCT");
    c.fee=150005;

    printf("Student_name:%s\n",c.stu_name);
    printf("Age is :%d\n",c.age);
    printf("College_Name:%s\n",c.College_name);
    printf("Fees Structure:%d",c.fee);

    return 0;

}

