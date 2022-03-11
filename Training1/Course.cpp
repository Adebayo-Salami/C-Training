#include "Course.h"

Course::Course(int id_i, std::string name_i, int32_t credits_i)
{
	id = id_i;
	name = name_i;
	credits = credits_i;
}

std::string Course::get_name()
{
	return name;
}
