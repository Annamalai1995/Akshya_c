#include<stdio.h>
#include<string.h>
struct Mobile
{
    char model_name[50];
    int Ram,Storage;
    double price;
};
void print(struct  Mobile);
void main()
{
    struct Mobile mob;
    strcpy(mob.model_name,"Iphone 13");
    mob.Ram=128;mob.Storage=128;
    mob.price=69000.5;
    struct Mobile mob1 ={"Vivo v20",8,128,25000.1};
    struct Mobile mob2;
    scanf("%s%d%d%lf",mob2.model_name,&mob2.Ram,&mob2.Storage,&mob2.price);
    print(mob);
    print(mob1);
    print(mob2);


}
void print(struct Mobile m)
{
    printf("\nMobile Details:%s\t%d\t%d\t%.lf",m.model_name,m.Ram,m.Storage,m.price);
}
