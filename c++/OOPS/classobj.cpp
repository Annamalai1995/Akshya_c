#include<iostream>
using namespace std;
class bird
{
    public :
    string bird_name;
    void fly() // Method 
    {
        cout << bird_name << "Flying" << endl;

    }

};

int main()
{
    //We can object 
    //classname objectname
    bird bb;
    bb.bird_name="Peacock";
    bb.fly();

}