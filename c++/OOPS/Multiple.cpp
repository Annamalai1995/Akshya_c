//A derived class inherits form more than on base class
#include<iostream>
using namespace std;

class Engine
{
    public:
    void start()
    {
        cout << "Engine has been Started" << endl;

    }
};
class Wheels
{
    public:
    void Rotate()
    {
        cout << "Wheel is Rotating" << endl;
    }
};
class  Bike :public Engine,public Wheels
{
    public:

    void Drive()
    {
        cout << "Bike driving is smooty" << endl;
    }
};
int main()
{
    Bike b;
    b.Drive();
    b.Rotate();
    b.start();
}