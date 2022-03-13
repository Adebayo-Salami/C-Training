#pragma once
#include <vector>
#include "Student.h"
#include "Course.h"
#include "Grade.h"

class StudentRecord {
private:
	std::vector<Student> students;
	std::vector<Course> courses;
	std::vector<Grade> grades;

	float get_num_grade(char);

public:
	void add_student(int, std::string);
	void add_course(int, std::string, unsigned char);
	void add_grade(int, int, char);

	std::string get_student_name(int);
	unsigned char get_course_credits(int);
	float get_GPA(int);
};