#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    Customer(int id, string name, int age, string city, string mobileNumber, int simcardValidity, string telecomBrand)
    {
        this->cust_id = id;
        this->cust_name = name;
        this->cust_age = age;
        this->cust_city = city;
        this->cust_mobile_number = mobileNumber;
        this->cust_simcard_validity = simcardValidity;
        this->cust_telecom_brand_name = telecomBrand;
    }

    int getId()
    {
        return cust_id;
    }

    string getName()
    {
        return cust_name;
    }

    int getAge()
    {
        return cust_age;
    }

    string getCity()
    {
        return cust_city;
    }

    string getMobileNumber()
    {
        return cust_mobile_number;
    }

    int getSimcardValidity()
    {
        return cust_simcard_validity;
    }

    string getTelecomBrand()
    {
        return cust_telecom_brand_name;
    }

    void displayCustomerInfo()
    {
        cout << "Customer ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "City: " << getCity() << endl;
        cout << "Mobile Number: " << getMobileNumber() << endl;
        cout << "SIM Card Validity: " << getSimcardValidity() << " years" << endl;
        cout << "Telecom Brand: " << getTelecomBrand() << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main()
{

    Customer customer1(101, "Amit Singh", 29, "Delhi", "9876543210", 2, "Jio");
    Customer customer2(102, "Ritika Sharma", 34, "Mumbai", "9123456789", 1, "Airtel");
    Customer customer3(103, "Rajiv Patel", 28, "Ahmedabad", "9654321098", 3, "Vi");
    Customer customer4(104, "Ananya Gupta", 40, "Kolkata", "9765432109", 2, "Jio");
    Customer customer5(105, "Suresh Verma", 31, "Bangalore", "9988776655", 1, "Airtel");

    customer1.displayCustomerInfo();
    customer2.displayCustomerInfo();
    customer3.displayCustomerInfo();
    customer4.displayCustomerInfo();
    customer5.displayCustomerInfo();

    return 0;
}
