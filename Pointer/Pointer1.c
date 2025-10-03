//Pointer workflow
#include<stdio.h>
void main()
{
    int alpha,*beta,**delta;
    alpha=150;  //init
    beta=&alpha;// init
    printf("\n value of alpha %d",alpha);//150
    printf("\n Address of Alpha %d",&alpha);
    printf("\n values of beta %d",beta);
    printf("\n value via pointer of cosmo %d",*beta);
    printf("\n address of  beta %d",&beta);
    delta=&beta;
    printf("\n value of delta %d",delta);
    printf("\n value of *delta %d",*delta);
    printf("\n value of via **delta %d",**delta);


}