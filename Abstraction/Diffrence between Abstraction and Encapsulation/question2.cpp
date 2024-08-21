#include <iostream>
using namespace std;

class CarEngine
{
private:
    // Private data members representing engine details
    int engineTemperature;
    int oilLevel;

    // Private method to start the engine
    void startEngine()
    {
        cout << "Engine started." << endl;
        engineTemperature = 90;
        oilLevel = 100;
    }

public:
    // Public method to operate the engine
    void turnOnCar()
    {
        cout << "Turning on the car..." << endl;
        startEngine(); // Encapsulated method to start the engine
    }

    // Public method to display engine status
    void displayEngineStatus()
    {
        cout << "Engine Temperature: " << engineTemperature << "°C" << endl;
        cout << "Oil Level: " << oilLevel << "%" << endl;
    }
};

int main()
{
    // Creating an object of CarEngine class
    CarEngine myCarEngine;

    // Turning on the car (operating the engine)
    myCarEngine.turnOnCar();

    // Displaying the engine status
    myCarEngine.displayEngineStatus();

    return 0;
}
