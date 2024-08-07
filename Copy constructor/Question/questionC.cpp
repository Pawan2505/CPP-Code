// #include <iostream>
// #include <string>

// using namespace std;

// class Student
// {
// private:
//    string name;
//     int rollNumber;
//     float gpa;

// public:
  
//     Student() : name(""), rollNumber(0), gpa(0.0) {}

   
//     Student(string studentName, int studentRollNumber, float studentGpa)
//         : name(studentName), rollNumber(studentRollNumber), gpa(studentGpa) {}

//     // Copy constructor
//     Student(Student &other)
//         : name(other.name), rollNumber(other.rollNumber), gpa(other.gpa)
  

//     // Getter methods
//    string getName()
//     {
//         return name;
//     }

//     int getRollNumber() const
//     {
//         return rollNumber;
//     }

//     float getGpa() const
//     {
//         return gpa;
//     }

//     // Member function to print student details
//     void printStudentDetails() const
//     {
//         std::cout << "Name: " << name << ", Roll Number: " << rollNumber << ", GPA: " << gpa << std::endl;
//     }

//     // Function to compare two students (by roll number)
//     bool hasSameRollNumber(const Student &other) const
//     {
//         return rollNumber == other.rollNumber;
//     }

//     // Function to update GPA
//     void updateGpa(float newGpa)
//     {
//         gpa = newGpa;
//     }
// };

// int main()
// {
//     // Using parameterized constructor
//     Student student1("John Doe", 123, 3.75);
//     Student student2("Jane Smith", 124, 3.85);

//     // Using copy constructor
//     Student student3(student1);

//     // Print details of students
//     student1.printStudentDetails();
//     student2.printStudentDetails();
//     student3.printStudentDetails(); // Should have same details as student1

//     return 0;
// }
