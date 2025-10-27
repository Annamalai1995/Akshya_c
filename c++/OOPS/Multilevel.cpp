#include<iostream>
using namespace std;
class Animal
{
    public :
    void eat()
    {
        cout << "Tiger is Eating to Leapard";

    }
};
class Cat : public Animal
{
    public:
    void memow()
    {
        cout << "Memow THe cat "<< endl;
    }
};
class Dog : public Cat{
    public:
    void Barking()
    {
        cout << "Dog is Barking"<< endl;
    }
};
int main()
{
    Dog d;
    d.eat();
    d.memow();
    d.Barking();
    return 0;
}