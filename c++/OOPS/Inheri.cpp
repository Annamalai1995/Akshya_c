#include<iostream>
using namespace std;
class Bike
{
    public:
    void Gear()
    {
        cout << "5 Speed" << endl;
    }
};
class Car : public Bike{
    public:
    void BMW()
    {
        cout << "BMW 7 Series " << endl;
    }
};
int main()
{
    Car c;
    c.BMW();
    c.Gear();
}