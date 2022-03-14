#include "StudentRecord.h"

float StudentRecord::get_num_grade(char grade)
{
    float num_grd;  //Float for the numeric grade
    switch (grade) {
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
	return num_grd;
}

void StudentRecord::add_student(int sid, std::string cname)
{
	students.push_back(Student(sid, cname));
}

void StudentRecord::add_course(int cid, std::string cname, unsigned char ccredits)
{
	courses.push_back(Course(cid, cname, ccredits));
}

void StudentRecord::add_grade(int sid, int cid, char grade)
{
	grades.push_back(Grade(sid, cid, grade));
}

std::string StudentRecord::get_student_name(int sid)
{
    std::string student_str;
    int i = 0;
    while (i < students.size() && students[i].get_id() != sid)
        i++;
	return students[i].get_name();
}

unsigned char StudentRecord::get_course_credits(int sid)
{
    int j = 0;
    while (j < courses.size() && courses[j].get_id() != sid)
        j++;
    return courses[j].get_credits();
}

float StudentRecord::get_GPA(int sid)
{
    float points = 0.0f, credits = 0.0f;
    for (Grade& grd : grades)
        if (grd.get_studentId() == sid) {
            //Calculate total credits and points
            unsigned char current_credits = get_course_credits(grd.get_courseId());
            credits += current_credits;
            points += get_num_grade(grd.get_grade()) * current_credits;
        }
    return points / credits;
}
