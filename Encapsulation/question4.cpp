#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
   
    Student(int id, string name, int age, string course, string city, string email, string college){
        this->stu_id = id;
        this->stu_name = name;
        this->stu_age = age;
        this->stu_course = course;
        this->stu_city = city;
        this->stu_email = email;
        this->stu_college = college;
    }
    
    int getId(){
        return stu_id;
    }

    string getName(){
        return stu_name;
    }

    int getAge(){
        return stu_age;
    }

    string getCourse(){
        return stu_course;
    }

    string getCity(){
        return stu_city;
    }

    string getEmail(){
        return stu_email;
    }

    string getCollege(){
        return stu_college;
    }

 
    void displayStudentInfo(){
        cout << "Student ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Course: " << getCourse() << endl;
        cout << "City: " << getCity() << endl;
        cout << "Email: " << getEmail() << endl;
        cout << "College: " << getCollege() << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
   
    Student student1(1, "Rajesh Kumar", 21, "Computer Science", "Delhi", "rajesh.kumar@example.com", "Delhi University");
    Student student2(2, "Anita Sharma", 22, "Electrical Engineering", "Mumbai", "anita.sharma@example.com", "Mumbai Institute of Technology");
    Student student3(3, "Suresh Patel", 23, "Mechanical Engineering", "Ahmedabad", "suresh.patel@example.com", "Gujarat College");
    Student student4(4, "Pooja Gupta", 20, "Civil Engineering", "Kolkata", "pooja.gupta@example.com", "Kolkata University");
    Student student5(5, "Amit Verma", 22, "Biotechnology", "Bangalore", "amit.verma@example.com", "Bangalore Institute of Science");

    
    student1.displayStudentInfo();
    student2.displayStudentInfo();
    student3.displayStudentInfo();
    student4.displayStudentInfo();
    student5.displayStudentInfo();

    return 0;
}
