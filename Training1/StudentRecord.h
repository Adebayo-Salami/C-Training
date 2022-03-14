#pragma once
#include <vector>
#include "Student.h"
#include "Course.h"
#include "Grade.h"
#include <list>
#include <algorithm>

class StudentRecord {
private:
	std::vector<Student> students;
	std::vector<Course> courses;
	std::vector<Grade> grades;

	float get_num_grade(char);
	std::vector<Grade> get_student_grades(int);
	Course get_grade_course(int);

public:
	void add_student(int, std::string);
	void add_course(int, std::string, unsigned char);
	void add_grade(int, int, char);
	void print_student_report_card(int);
	void report_card_solution(int);
	bool check_if_student_exist(int);

	std::string get_student_name(int);
	unsigned char get_course_credits(int);
	float get_GPA(int);
};