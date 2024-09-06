#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

   
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
  
    Student students[3];

   
    students[0].setDetails("Pawan", 20);
    students[1].setDetails("Ram", 22);
    students[2].setDetails("Shyam", 21);


    cout << "Student Details:" << endl;
    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}
