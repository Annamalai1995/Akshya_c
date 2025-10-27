//It depend only on Parent class
#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout << "Tiger is Eating to Leopard" << endl;
    }
};
class Cat : public Animal
{
    public :
    void Memow()
    {
        cout << "Memoww Memoww" << endl;

    }
};
class Dog : public Animal
{
    public:
    void Barking()
    {
        cout << "Dog is Barking" << endl;
    }

};
int main()
{
    Dog d;
    d.Barking();
    d.eat();
    Cat c;
    c.Memow();
}