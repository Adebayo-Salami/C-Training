#include "cow.h"

cow1::cow1(std::string name_i, int age_i, unsigned char purpose_i) {
    name = name_i;
    age = age_i;
    purpoe = purpose_i;
}

std::string cow1::get_name() {
    return name;
}

int cow1::get_age() {
    return age;
}

unsigned char cow1::get_purpose() {
    return purpoe;
}

void cow1::set_name(std::string new_name) {
    name = new_name;
}

void cow1::set_age(int new_age) {
    age = new_age;
}

void cow1::set_purpoe(unsigned char new_purpose) {
    purpoe = new_purpose;
}