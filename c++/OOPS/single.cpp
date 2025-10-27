#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout << "Tiger is Eating to Leapard" << endl;
    }
};
class Cat:public Animal
{
    public:
    void memow()
    {
        cout << "Meow the cat" << endl;
    }
};
int main()
{
    Cat c;
    c.eat();
    c.memow();
    return 0;
     
}