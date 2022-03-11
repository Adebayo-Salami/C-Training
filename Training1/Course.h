#pragma once

#include <iostream>

class Course {
public:
	Course(int id_i, std::string name_i, int32_t credits_i);
	std::string get_name();

private:
	int id;
	std::string name;
	int32_t credits;
};