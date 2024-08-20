// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void showA()
//     {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A
// {
// public:
//     void showB()
//     {
//         cout << "Class B" << endl;
//     }
// };

// int main()
// {
//     B obj;
//     obj.A::showA();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class A
// {
// protected:
//     void showA()
//     {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A
// {
// public:
//     void showB()
//     {
//         cout << "Class B" << endl;
//     }

//     // Public member function to access protected showA()
//     void accessShowA()
//     {
//         showA();  // Accessing protected function from base class
//     }
// };

// int main()
// {
//     B obj;
//     obj.accessShowA();  // This works because access is through a public member function of the derived class
//     obj.showB();

//     return 0;
// }



