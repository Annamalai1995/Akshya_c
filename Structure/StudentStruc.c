#include<stdio.h>
#include<string.h>
struct studentDetails
{
    int rollno;
    char Stu_name[50];
    float cgpa;
}sd1,sd2;

void main()
{
    sd1.rollno=1001;
    strcpy(sd1.Stu_name,"Annamalai");
    sd1.cgpa=8.8;

    sd2.rollno=1002;
    strcpy(sd2.Stu_name,"Priya");
    sd2.cgpa=8.5;


    printf("Student Details Is Rollno:%d\n",sd1.rollno);
    
    printf("Student Details Is Student_Name:%s\n",sd1.Stu_name);
    
    printf("Student Details Is CGPA:%.2f\n",sd1.cgpa);

    printf("Student Details Is Rollno:%d\n",sd2.rollno);
    
    printf("Student Details Is Student_Name:%s\n",sd2.Stu_name);
    
    printf("Student Details Is CGPA:%2.f\n",sd2.cgpa);
    
    
}