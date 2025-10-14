#include<iostream>
using namespace std;
int main()
{
    int a=150;
    float b=5.5;
    //Implicit typecasting(automatic)
    float result=a/b;
     cout << result;
    //Explicit 
    int alpha=5;
    int beta=10;
    float gamma=(float)alpha/beta;
    cout  << gamma;
}