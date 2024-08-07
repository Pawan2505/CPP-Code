#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    float gpa;

public:
  
    Student() : name(""), rollNumber(0), gpa(0.0) {}

 
    Student(string studentName, int studentRollNumber, float studentGpa)
        : name(studentName), rollNumber(studentRollNumber), gpa(studentGpa) {}

  
    Student(Student& other)
        : name(other.name), rollNumber(other.rollNumber), gpa(other.gpa) {}

   string getName(){
        return name;
    }

    int getRollNumber(){
        return rollNumber;
    }

    float getGpa() {
        return gpa;
    }

    void printStudentDetails(){
     cout << "Name: " << name << ", Roll Number: " << rollNumber << ", GPA: " << gpa <<endl;
    }

    
    bool hasSameRollNumber(const Student& other) {
        return rollNumber == other.rollNumber;
    }

  
    void updateGpa(float newGpa) {
        gpa = newGpa;
    }
};

int main() {
    
    Student student1("Pawan Maurya", 123, 3.75);
    Student student2("Smit", 124, 3.85);

 
    student1.printStudentDetails();
    student2.printStudentDetails();

    if (student1.hasSameRollNumber(student2)) {
      cout << "Students have the same roll number." <<endl;
    } else {
      cout << "Students have different roll numbers." <<endl;
    }

    student1.updateGpa(3.90);
    student1.printStudentDetails();

    return 0;
}
