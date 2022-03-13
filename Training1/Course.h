#pragma once

#include <iostream>

class Course {
public:
	Course(int id_i, std::string name_i, unsigned char credits_i);
	std::string get_name();
	int get_credits();
	int get_id();

private:
	int id;
	std::string name;
	int credits;
};