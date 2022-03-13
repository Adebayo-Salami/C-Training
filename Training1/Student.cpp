#include "Student.h"

Student::Student(int id_i, std::string name_i)
{
	id = id_i;
	name = name_i;
}

std::string Student::get_name()
{
	return name;
}

int Student::get_id()
{
	return id;
}
