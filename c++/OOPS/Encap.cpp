#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    // Private Variables
    string brand;
    int speed;
    double fuel;

public:
    // Constructor with parameters
    Car(string b, double f)
    {
        brand = b;
        if (f > 0)
        {
            fuel = f;
        }
        else
        {
            fuel = 0;
            cout << "Invalid fuel amount. Set to 0." << endl;
        }
        speed = 0; // Default speed
    }

    // Method: Start
    void start()
    {
        if (fuel > 0)
        {
            cout << brand << " is starting." << endl;
        }
        else
        {
            cout << brand << " cannot start. Fuel empty!" << endl;
        }
    }

    // Method: Accelerate
    void accelerate(int increment)
    {
        if (fuel <= 0)
        {
            cout << "Can't accelerate. Fuel empty!" << endl;
            return;
        }

        if (increment > 0)
        {
            speed += increment;
            fuel -= increment * 1.5;

            if (fuel < 0)
                fuel = 0;

            cout << brand << " accelerated to " << speed << " km/h." << endl;
        }
        else
        {
            cout << "Invalid increment value!" << endl;
        }
    }

    // Method: Refuel
    void refuel(double amount)
    {
        if (amount > 0)
        {
            fuel += amount;
            cout << "Added " << amount << " liters of fuel." << endl;
        }
        else
        {
            cout << "Invalid fuel amount!" << endl;
        }
    }

    // Getters
    int getSpeed() const
    {
        return speed;
    }

    double getFuel() const
    {
        return fuel;
    }

    string getBrand() const
    {
        return brand;
    }
};

// Main function
int main()
{
    Car c1("Benz", 15.5);
    c1.start();
    c1.accelerate(50);

    cout << "Current speed: " << c1.getSpeed() << " km/h" << endl;
    cout << "Remaining fuel: " << c1.getFuel() << " liters" << endl;

    c1.refuel(5);
    cout << "Fuel remaining after refuel: " << c1.getFuel() << " liters" << endl;

    return 0;
}
