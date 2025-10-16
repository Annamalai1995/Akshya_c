#include<iostream>
using namespace std;
int main()
{
    float price =15.5,quantity=2;
    float price1=20.5,quantity1=10;
    float price2=15.5,quantity2=15;


    float total1=price*quantity;
    float total2=price1*quantity1;
    float total3=price2 * quantity2;


    float subtotal=total1+total2+total3;

    float Gst=subtotal * 1.5;
    float finalamount=subtotal*Gst;

    cout << "subtotal: $" << subtotal << endl;
    cout << "Tax (1.5%): $" << Gst << endl;
    cout << " Total Amount to pay: $"<< finalamount << endl;




}