// #include <iostream>
// using namespace std;

// class MyClass
// {
// private:
//     int val;

// private:
//     // Private constructor
//     MyClass()
//     {
//         this->val = 0; // Default value
//         cout << "Private Constructor called. Default value: " << val << endl;
//     }

// public:
//     // Public constructor
//     MyClass(int val)
//     {
//         this->val = val;
//         cout << "Public Constructor called. Value: " << val << endl;
//     }

//     // Method to create an object using the public constructor
//     void createObjectWithPublicConstructor()
//     {
//         MyClass obj(20); // Can create an object because the constructor is public
//     }

//     // Method to create an object using the private constructor
//     void createObjectWithPrivateConstructor()
//     {
//         MyClass obj; // Can create an object because the constructor is private but accessible within the class
//     }
// };

// int main()
// {
//     // Creating an object using the public constructor
//     MyClass obj1(10);

//     // Creating an object inside a method of the class using the public constructor
//     obj1.createObjectWithPublicConstructor();

//     // Creating an object inside a method of the class using the private constructor
//     obj1.createObjectWithPrivateConstructor();

//     // MyClass obj;
//     return 0;
// }

#include <iostream>
using namespace std;

class MyClass
{

public :
int a;


public:
    void printmember()
    {
        cout << "Aur smit kaise ho" <<a<< endl;
    }
};

int main()
{
    MyClass abj;
    abj.printmember();
    return 0;
}