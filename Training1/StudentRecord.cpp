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

std::vector<Grade> StudentRecord::get_student_grades(int sid)
{
    std::vector<Grade> results;
    std::copy_if(grades.begin(), grades.end(), std::back_inserter(results), [&sid](Grade& grade) {
        return grade.get_studentId() == sid;
    });
    return results;
}

Course StudentRecord::get_grade_course(int cid)
{
    auto course = std::find_if(courses.begin(), courses.end(), [&cid](Course& cours) { return cours.get_id() == cid; });
    if (course != courses.end()) {
        return *course;
    }
    else
        return Course(0, "N/A", F);
}

std::string StudentRecord::get_course_name(int cid)
{
    int j = 0;
    while (j < courses.size() && courses[j].get_id() != cid)
        j++;
    return courses[j].get_name();
}

bool StudentRecord::check_if_student_exist(int sid)
{
    auto student = std::find_if(students.begin(), students.end(), [&sid](Student& stud) { return stud.get_id() == sid; });
    return student != students.end();
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

void StudentRecord::print_student_report_card(int sid)
{
    auto student_name = get_student_name(sid);
    std::cout << "Loading Report Card For student " << student_name << std::endl;
    auto student_grades = get_student_grades(sid);
    if (student_grades.size() <= 0)
        std::cout << " Student has no grade record " << std::endl;
    else
        for (auto& grd : student_grades)
            std::cout << student_name << " got " << grd.get_grade() << " in course " << get_grade_course(grd.get_courseId()).get_name() << std::endl;
}

void StudentRecord::report_card_solution(int sid, std::ostream& stream)
{
    float points = 0.0f, credits = 0.0f;
    std::cout << std::endl << "Report Card for " << get_student_name(sid) << std::endl;
    stream << std::endl << "Report Card for " << get_student_name(sid) << std::endl;
    for(Grade& grd: grades)
        if (grd.get_studentId() == sid) {
            std::cout << get_course_name(grd.get_courseId()) << ": " << grd.get_grade() << std::endl;
            stream << get_course_name(grd.get_courseId()) << ": " << grd.get_grade() << std::endl;
            unsigned char current_credits = get_course_credits(grd.get_courseId());
            credits += current_credits;
            points += get_num_grade(grd.get_grade()) * current_credits;
        }
    std::cout << " GPA: " << (points / credits) << std::endl;
    stream << "GPA: " << (points / credits) << std::endl;
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

void StudentRecord::report_file(std::ofstream &outFile)
{
    int sid;
    outFile.open("C:/Users/osalami/Documents/Trainings/C++ Training/CPusPlusTraining/report.txt");
    if (outFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else {
        outFile << "======================================" << std::endl;
        for (auto& std : students) {
            sid = std.get_id();
            report_card_solution(sid, outFile);
            outFile << "======================================" << std::endl;
        }
        outFile.close();
        std::cout << "Created report.txt successfully";
    }
}