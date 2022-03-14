// Training1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
//#include <cstdint>  //Including a C library always has lowercase C
#include "cow.h"
#include "Student.h"
#include "Course.h"
#include "Grade.h"
#include "StudentRecord.h"

#define CAPACITY 5000 //This is a macro
#define DEBUG //This is a macro
#define AGE_LENGTH 4

void PrintUsername();
void TypeInference();
void PreprocessorDirectives();
void Arrays();
void Stringss();
void TypeCasting();
void CalculateAverageOfArray(int value[5]);
void Structures();
void Classes();
void Pointers();
void Vectors();
void CreateClassesion();
void IfStatements();
void WhileLoops();
void ForLoops();
void CalculateGPA(std::vector<Student> students, std::vector<Course> courses, std::vector<Grade> grades);
void CalculateGPASolution(std::vector<Student> students, std::vector<Course> courses, std::vector<Grade> grades);
void Initialize(std::vector<Student> students, std::vector<Course> courses, std::vector<Grade> grades);
void CalculateGPASolution_CleanUp();

int main()
{
    //PrintUsername();

    std::cout << "\n";

    TypeInference();

    std::cout << "\n";

    PreprocessorDirectives();

    std::cout << "\n";

    Arrays();
    
    std::cout << "\n";

    Stringss();

    std::cout << "\n";

    TypeCasting();

    std::cout << "\n";

    CalculateAverageOfArray(new int[]{ 1, 23, 32, 24, 337 });

    std::cout << "\n";

    Structures();

    std::cout << "\n";

    Classes();

    std::cout << "\n";

    Pointers();

    std::cout << "\n";

    Vectors();

    std::cout << "\n";

    CreateClassesion();

    std::cout << "\n";

    IfStatements();

    std::cout << "\n";

    WhileLoops();

    std::cout << "\n";

    ForLoops();

    std::cout << "\n";

    std::vector<Student> students = { Student(1, "George P. Burdell"), Student(2, "Nancy Rhodes") };
    std::vector<Course> courses = { Course(1, "Algenra", 5), Course(2, "Physics", 4), Course(3, "English", 3), Course(4, "Economics", 4) };
    std::vector<Grade> grades = { Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'), Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B') };
    CalculateGPA(students, courses, grades);

    std::cout << "\n";

    CalculateGPASolution(students, courses, grades);

    std::cout << "\n";

    Initialize(students, courses, grades);
    CalculateGPASolution_CleanUp();
}

void PrintUsername() {
    std::string username;
    std::cout << "Hello World!\n";
    std::cout << "Please Input your name" << std::endl;
    std::cin >> username;
    std::cout << "\n";
    std::cout << "Hello " + username + ", Welcome to Hello World" << std::endl;
}

void TypeInference() {
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';

    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;
}

void PreprocessorDirectives() {
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG    //This block of code only runs when the MAcro Debug has been defined.
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small;
    std::cout << "The large integer is " << large << std::endl;
}

void Arrays() {
    int age[4];
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl;
    float temperature[] = { 31.5, 32.7, 39.8 };

    std::cout << "temperature[0] = " << temperature[0] << std::endl;
    std::cout << "temperature[1] = " << temperature[1] << std::endl;
    std::cout << "temperature[2] = " << temperature[2] << std::endl;
    std::cout << std::endl;

    //int age2[AGE_LENGTH];
    //Instead of using macro as contsnt we can create a variablw with the const qualifier
    const int AGE_LENGTH2 = 4;

    int age2[AGE_LENGTH2];
    age2[0] = 25;
    age2[1] = 20;
    age2[2] = 19;
    age2[3] = 19;

    std::cout << "The Age2 array has " << AGE_LENGTH << " elements" << std::endl;
    std::cout << "The Age2 array has " << AGE_LENGTH2 << " elements" << std::endl;
    std::cout << "Age2[0] = " << age2[0] << std::endl;
    std::cout << "Age2[1] = " << age2[1] << std::endl;
    std::cout << "Age2[2] = " << age2[2] << std::endl;
    std::cout << "Age2[3] = " << age2[3] << std::endl;
}

void Stringss() {
    // cstring is from the C librabry which hold an array of characters a a string i.e char
    // string is from the C++ standard library i.e string

    const int LENGTH1 = 25;

    char array_str1[LENGTH1] = "Hey guys! ";
    char array_str2[] = "What's up?";

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's the going?";

    strcat_s(array_str1, LENGTH1, array_str2);
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;
}

void TypeCasting() {
    float flt = -7.44f;
    int32_t sgn;
    uint32_t unsgn;

    sgn = flt;  //Implicit Type Conversion
    unsgn = sgn;

    std::cout << "Floar: " << flt << std::endl;
    std::cout << "int32_t: " << sgn << std::endl;
    std::cout << "uint32_t: " << unsgn << std::endl;
    std::cout << std::endl;

    int fahrenheit = 100;
    int celcius;

    celcius = ((float)5 / 9.0) * (fahrenheit - 32);

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celcius: " << celcius << std::endl;
    std::cout << std::endl;

    float weight = 10.99;
    std::cout << "Float: " << weight << std::endl;
    std::cout << "Integer Part: " << (int)weight << std::endl;
    std::cout << "Fractional Part: " << (int)((weight - (int)weight) * 10000) << std::endl;
}

void CalculateAverageOfArray(int value[5]) {
    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum += value[i];

    float result = (float)sum / (float)5;
    std::cout << "The Average of the array is " << result << std::endl;
}

enum cow_purpose {
    dairy,
    meat,
    hide, 
    pet
};

struct cow {
    std::string name;
    int age;
    unsigned char purpoe;
};

void Structures() {
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpoe = dairy;

    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpoe << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
}

//class cow1 {
//public:
//    cow1(std::string name_i, int age_i, unsigned char purpose_i) {
//        name = name_i;
//        age = age_i;
//        purpoe = purpose_i;
//    }
//
//    std::string get_name() {
//        return name;
//    }
//
//    int get_age() {
//        return age;
//    }
//
//    unsigned char get_purpose() {
//        return purpoe;
//    }
//
//    void set_name(std::string new_name) {
//        name = new_name;
//    }
//
//    void set_age(int new_age) {
//        age = new_age;
//    }
//
//    void set_purpoe(unsigned char new_purpose) {
//        purpoe = new_purpose;
//    }
//
//private:
//    std::string name;
//    int age;
//    unsigned char purpoe;
//};

void Classes() {
    cow1 my_cow("Hildy", 7, pet);

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    std::cout << std::endl;

    my_cow.set_name("Angela");
    my_cow.set_age(26);
    my_cow.set_purpoe(meat);

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
}

int a = 37;
int *ptr;
cow1 *my_cow;

void Pointers() {
    ptr = &a;
    std::cout << "The content of a is " << a << std::endl;
    std::cout << "ptr is pointing to address " << ptr << std::endl;
    std::cout << "The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "The address of ptr is " << &ptr << std::endl;

    my_cow = new cow1("Gertie", 3, hide);
    std::cout << (*my_cow).get_name() << " is a type-" << (int)my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    delete my_cow;
}

void Vectors() {
    std::vector<int> primes;

    std::cout << "The vector has " << primes.size() << " elements." << std::endl;

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    std::cout << "The vector has " << primes.size() << " elements." << std::endl;

    std::cout << "The element at index 2 is " << primes[2] << std::endl;
    primes[2] = 13;
    std::cout << "The element at index 2 is " << primes[2] << std::endl;
    std::cout << std::endl;

    std::vector<cow1> cattle;
    cattle.push_back(cow1("Betty", 6, meat));
    cattle.push_back(cow1("Libby", 4, hide));
    cattle.push_back(cow1("Trudy", 5, pet));
    cattle.push_back(cow1("Betsy", 2, dairy));

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl;
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl;
    std::cout << "The last cow is " << (cattle.end() - 1)->get_name() << std::endl;
}

void CreateClassesion() {
    Student my_student(1, "Hilda Jones");
    Course my_course(7, "Physics 101", 4);
    Grade my_grade(1, 7, 'B');

    std::cout << "Student: " << my_student.get_name() << std::endl;
    std::cout << "Course: " << my_course.get_name() << std::endl;
    std::cout << "Credits: " << my_course.get_credits() << std::endl;
    std::cout << "Grade: " << my_grade.get_grade() << std::endl;
}

void IfStatements() {
    int a = 1023;
    bool flag = false;
    char letter = 'd';

    if (a > 1000)
        std::cout << "Warning: a is over 1000" << std::endl;

    if (a % 2)
        std::cout << "a is an odd number." << std::endl;
    else
        std::cout << "a is an even number. " << std::endl;

    std::cout << "he letter " << letter << " is ";
    if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u')
        std::cout << " not ";

    std::cout << "a vowel." << std::endl;
}

void SwitchStatement() {
    float operand_1, operand_2, result;
    char operation;

    std::cout << "Enter Operand 1: " << std::endl;
    std::cin >> operand_1;
    std::cout << "Enter Operand 2: " << std::endl;
    std::cin >> operand_2;
    std::cout << std::endl << "Choose peration: = - * / " << std::endl;
    std::cin >> operation;

    switch (operation) {
    case '+':
        result = operand_1 + operand_2;
        break;
    case '-':
        result = operand_1 - operand_2;
        break;
    case '*':
        result = operand_1 * operand_2;
        break;
    case '/':
        result = operand_1 / operand_2;
        break;
    default:
        result = 0;
        break;
    }

    std::cout << "The result is " << result << std::endl;
}

void WhileLoops() {
    std::vector<int> numbers = { 12,25,31,47,58 };

    //std::vector<int>::iterator ptr = numbers.begin();
    auto ptr = numbers.begin();
    while (ptr != numbers.end())
    {
        std::cout << *ptr << " ";
        ptr = next(ptr, 1);
    }
    std::cout << std::endl;

    int i = 0;
    do {
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());
    std::cout << std::endl;
}

void ForLoops() {
    std::vector<int> numbers = { 12,25,31,47,58 };
    float average;

    average = 0.0f;
    for (int i = 0; i < numbers.size(); i++)
        average += numbers[i];
    average /= numbers.size();
    std::cout << "Average: " << average << std::endl;

    average = 0.0f;
    for (auto x : numbers)
        average += x;
    average /= numbers.size();
    std::cout << "Average: " << average << std::endl;
}

void CalculateGPA(std::vector<Student> students, std::vector<Course> courses, std::vector<Grade> grades) {
    int id;
    float GPA = 0.0f;
begin:
    std::cout << "Enter Student ID" << std::endl;
    std::cin >> id;
    Student* student = nullptr;
    for (auto& stud : students)
        if (stud.get_id() == id)
            student = &stud;

    if (student == nullptr) {
        std::cout << "No Student with this ID exists";
        return;
    }
    else
        std::cout << "Calculating GPA for Student " << student->get_name() << std::endl;
    std::string student_name = student->get_name();
    student = nullptr;

    //Get All Students Grades
    std::vector<Grade> studentGrades;
    for (auto& grade : grades)
        if (grade.get_studentId() == id)
            studentGrades.push_back(grade);

    //Get All Grade Courses
    std::vector<Course> studentCourses;
    for (auto& course : courses)
        if (std::any_of(studentGrades.begin(), studentGrades.end(), [&course](Grade& gr) {return gr.get_courseId() == course.get_id(); }))
            studentCourses.push_back(course);

    //Calculate GPA  GPA = TotalPoints / Total Credits
    float totalPoints = 0.0f;
    float totalCredits = 0.0f;
    for (auto& course : studentCourses) {
        int courseId = course.get_id();
        auto courseCredit = course.get_credits();
        int courseGrade = 0;
        //std::find(studentGrades.begin(), studentGrades.end(), [&courseGrade, &courseId](Grade& grade) {   //Didn't work, need to find out why
        //    if (grade.get_courseId() == courseId)
        //        courseGrade += grade.get_grade_value();
        //});
        for (auto& grade : studentGrades)
            if (grade.get_courseId() == courseId)
                courseGrade += grade.get_grade_value();
        totalPoints += (courseGrade * courseCredit);
        totalCredits += courseCredit;
    }

    GPA = totalPoints / totalCredits;
    std::cout << "The GPA for " << student_name << " is " << GPA << std::endl;
    std::cout << "Do you want to go again? Type Y for Yes and any other key for no" << std::endl;;
    char reply;
    std::cin >> reply;
    if (reply == 'Y' || reply == 'y')
        goto begin;
    else
        std::cout << "Thanks for stopping by. Byeee" << std::endl;
}

void CalculateGPASolution(std::vector<Student> students, std::vector<Course> courses, std::vector<Grade> grades) {
    int id;
    float GPA = 0.0f;
    std::cout << "Enter a student ID: ";
    std::cin >> id;

    float points = 0.0f, credits = 0.0f;
    for(Grade& grd : grades)
        if (grd.get_studentId() == id) {
            float num_grd;  //Float for the numeric grade
            switch (grd.get_grade()) {
            case 'A':
                num_grd = 4.0f;
                break;
            case 'B':
                num_grd = 3.0f;
                break;
            case 'C':
                num_grd = 2.0f;
                break;
            case 'D':
                num_grd = 1.0f;
                break;
            default:
                num_grd = 0.0f;
                break;
            }

            //Calculate total credits and points
            int j = 0;
            while (j < courses.size() && courses[j].get_id() != grd.get_courseId())
                j++;
            credits += courses[j].get_credits();
            points += num_grd * courses[j].get_credits();
        }
    GPA = points / credits;

    std::string student_str;
    int i = 0;
    while (i < students.size() && students[i].get_id() != id)
        i++;
    student_str = students[i].get_name();
    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
}

StudentRecord SR;
void Initialize(std::vector<Student> students, std::vector<Course> courses, std::vector<Grade> grades) {
    for (auto& student : students)
        SR.add_student(student.get_id(), student.get_name());

    for (auto& course : courses)
        SR.add_course(course.get_id(), course.get_name(), course.get_credits());

    for (auto& grade : grades)
        SR.add_grade(grade.get_studentId(), grade.get_courseId(), grade.get_grade());
}

void CalculateGPASolution_CleanUp() {
    int id;

    std::cout << "Enter a student ID: ";
    std::cin >> id;

    std::string student_str = SR.get_student_name(id);
    std::cout << "The GPA for " << student_str << " is " << SR.get_GPA(id) << std::endl;
}

