#pragma once
#include <iostream>

class Student {
public:
	Student(int id_i, std::string name_i);
	std::string get_name();

private:
	int id;
	std::string name;
};