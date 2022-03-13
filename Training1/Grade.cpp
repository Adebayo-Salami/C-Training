#include "Grade.h"

Grade::Grade(int student_id_i, int course_id_i, char grade_i)
{
	student_id = student_id_i;
	course_id = course_id_i;
	grade = grade_i;
}

char Grade::get_grade()
{
	return grade;
}

int Grade::get_studentId()
{
	return student_id;
}

int Grade::get_courseId()
{
	return course_id;
}

float Grade::get_grade_value()
{
	switch(grade) {
	case 'A':
		return 4.0f;
	case 'B':
		return 3.0f;
	case 'C':
		return 2.0f;
	case 'D':
		return 1.0f;
	default:
		return 0.0f;
	}
}
