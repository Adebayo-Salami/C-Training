#pragma once

#include <iostream>

enum GradeType {
	A,
	B,
	C,
	D,
	F
};

class Grade {
public:
	Grade(int student_id_i, int course_id_i, char grade_i);
	char get_grade();

private:
	int student_id;
	int coure_id;
	char grade;
};