#include<stdio.h>
void main()
{
    int Empid;
    char EmpName[20]="";
    char Skill[20]="";
    char place[20]="";
    int Experiance;
    double salary;
    printf("Enter the Employeeid \n");
    scanf("%d",&Empid);
    printf("The Employee id : %d\n",Empid );
    printf("Enter the Employee name \n");
    scanf("%s",&EmpName);
    printf("My name is :%s \n",EmpName);
    printf("Enter the skillset \n");
    scanf("%s",&Skill);
    printf("My skillset is :%s \n",Skill); 
    printf("Enter the Place \n");
    scanf("%s",&place);
    printf("Location is :%s \n",place);
    printf("How many your Experiance");
    scanf("%d",&Experiance);
    printf("My Total Experiance is :%d\n",Experiance);
//Printf("Enter The salary");   
    printf("Enter the salary"); 
    scanf("%lf",&salary);
    printf("Salary is :%lf \n",salary);

}