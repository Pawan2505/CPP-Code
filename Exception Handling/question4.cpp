#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Please Enter Your Age : " << endl;
    cin >> age;
    try
    {
        if (age >= 18)
        {
            cout << "You are Eligible for Vote!" << endl;
        }
        else
        {
            string ex("Please Enter Valid Age!");
            throw ex;
            // throw "Please Enter Valid Age!";
            // throw string("Please Enter a Valid Age!");
        }
    }
    catch (string ex)
    // catch (const char *ex)
    {
        cout << "Error : " << ex << endl;
    }
}