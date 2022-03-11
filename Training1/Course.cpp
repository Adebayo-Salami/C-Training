#include "Course.h"

Course::Course(int id_i, std::string name_i, unsigned char credits_i)
{
	id = id_i;
	name = name_i;
	credits = credits_i;
}

std::string Course::get_name()
{
	return name;
}

int Course::get_credits()
{
	return credits;
}
