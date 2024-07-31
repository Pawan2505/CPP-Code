#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

public:
    
    // Car(int id, string company, string color, string model, int release_year)
    //     : car_id(id), car_company_name(company), car_color(color), car_model(model), car_release_year(release_year) {}

    Car(int id, string company, string color, string model, int release_year){
        this->car_id = id;
        this->car_company_name = company;
        this->car_color = color;
        this->car_model = model;
        this->car_release_year = release_year;
    }
       

  
    void displayCarInfo(){
        cout << "Car ID: " << car_id << endl;
        cout << "Car Company Name: " << car_company_name << endl;
        cout << "Car Color: " << car_color << endl;
        cout << "Car Model: " << car_model << endl;
        cout << "Car Release Year: " << car_release_year << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
   
    Car car1(301, "Toyota", "Red", "Corolla", 2020);
    Car car2(302, "Honda", "Blue", "Civic", 2021);
    Car car3(303, "Ford", "Black", "Mustang", 2022);
    Car car4(304, "BMW", "White", "X5", 2023);

   
    car1.displayCarInfo();
    car2.displayCarInfo();
    car3.displayCarInfo();
    car4.displayCarInfo();

    return 0;
}
