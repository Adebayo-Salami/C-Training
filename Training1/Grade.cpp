#include "Grade.h"

Grade::Grade(int student_id_i, int course_id_i, char grade_i)
{
	student_id = student_id_i;
	coure_id = course_id_i;
	grade = grade_i;
}

char Grade::get_grade()
{
	return grade;
}
