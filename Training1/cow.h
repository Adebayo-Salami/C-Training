#pragma once

//This is callleanincude guard and is supported by all compilers
#ifndef COW_H

#define COW_H
#include <string>
class cow1 {
public:
    cow1(std::string name_i, int age_i, unsigned char purpose_i);

    std::string get_name();

    int get_age();

    unsigned char get_purpose();

    void set_name(std::string new_name);

    void set_age(int new_age);

    void set_purpoe(unsigned char new_purpose);

private:
    std::string name;
    int age;
    unsigned char purpoe;
};

#endif // COW_H
