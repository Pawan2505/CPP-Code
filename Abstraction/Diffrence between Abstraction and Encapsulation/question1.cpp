#include <iostream>
using namespace std;

// Abstract class representing the Car interface
class Car
{
public:
    // Abstract method (pure virtual function) to turn the car
    virtual void turnSteeringWheel(string direction) = 0;
};

// Derived class implementing the Car interface
class Sedan : public Car
{
public:
    void turnSteeringWheel(string direction) override
    {
        cout << "Turning the car " << direction << " using the steering wheel." << endl;
    }
};

// Another derived class implementing the Car interface
class SUV : public Car
{
public:
    void turnSteeringWheel(string direction) override
    {
        cout << "Turning the SUV " << direction << " using the steering wheel." << endl;
    }
};

int main()
{
    // Creating objects of derived classes
    Sedan mySedan;
    SUV mySUV;

    // Using abstraction to turn the car
    mySedan.turnSteeringWheel("left");
    mySUV.turnSteeringWheel("right");

    return 0;
}
