#include "StudentRecord.h"

float StudentRecord::get_num_grade(char grade)
{
	return 0.0f;
}

void StudentRecord::add_student(int sid, std::string cname)
{
	students.push_back(Student(sid, cname));
}

void StudentRecord::add_course(int cid, std::string cname, unsigned char ccredits)
{
	courses.push_back(Course(cid, cname ccredits));
}

void StudentRecord::add_grade(int sid, int, char)
{
}

std::string StudentRecord::get_student_name(int sid)
{
	return std::string();
}

unsigned char StudentRecord::get_course_credits(int sid)
{
	return 0;
}

float StudentRecord::get_GPA(int sid)
{
	return 0.0f;
}
