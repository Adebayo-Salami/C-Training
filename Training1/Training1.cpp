// Training1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <cstdint>  //Including a C library always has lowercase C

#define CAPACITY 5000 //This is a macro
#define DEBUG //This is a macro
#define AGE_LENGTH 4

void PrintUsername();
void TypeInference();
void PreprocessorDirectives();
void Arrays();
void Stringss();
void TypeCasting();
void CalculateAverageOfArray(int value[5]);
void Structures();
void Classes();

int main()
{
    //PrintUsername();

    std::cout << "\n";

    TypeInference();

    std::cout << "\n";

    PreprocessorDirectives();

    std::cout << "\n";

    Arrays();
    
    std::cout << "\n";

    Stringss();

    std::cout << "\n";

    TypeCasting();

    std::cout << "\n";

    CalculateAverageOfArray(new int[]{ 1, 23, 32, 24, 337 });

    std::cout << "\n";

    Structures();

    std::cout << "\n";

    Classes();
}

void PrintUsername() {
    std::string username;
    std::cout << "Hello World!\n";
    std::cout << "Please Input your name" << std::endl;
    std::cin >> username;
    std::cout << "\n";
    std::cout << "Hello " + username + ", Welcome to Hello World" << std::endl;
}

void TypeInference() {
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';

    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;
}

void PreprocessorDirectives() {
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG    //This block of code only runs when the MAcro Debug has been defined.
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small;
    std::cout << "The large integer is " << large << std::endl;
}

void Arrays() {
    int age[4];
    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl;
    float temperature[] = { 31.5, 32.7, 39.8 };

    std::cout << "temperature[0] = " << temperature[0] << std::endl;
    std::cout << "temperature[1] = " << temperature[1] << std::endl;
    std::cout << "temperature[2] = " << temperature[2] << std::endl;
    std::cout << std::endl;

    //int age2[AGE_LENGTH];
    //Instead of using macro as contsnt we can create a variablw with the const qualifier
    const int AGE_LENGTH2 = 4;

    int age2[AGE_LENGTH2];
    age2[0] = 25;
    age2[1] = 20;
    age2[2] = 19;
    age2[3] = 19;

    std::cout << "The Age2 array has " << AGE_LENGTH << " elements" << std::endl;
    std::cout << "The Age2 array has " << AGE_LENGTH2 << " elements" << std::endl;
    std::cout << "Age2[0] = " << age2[0] << std::endl;
    std::cout << "Age2[1] = " << age2[1] << std::endl;
    std::cout << "Age2[2] = " << age2[2] << std::endl;
    std::cout << "Age2[3] = " << age2[3] << std::endl;
}

void Stringss() {
    // cstring is from the C librabry which hold an array of characters a a string i.e char
    // string is from the C++ standard library i.e string

    const int LENGTH1 = 25;

    char array_str1[LENGTH1] = "Hey guys! ";
    char array_str2[] = "What's up?";

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's the going?";

    strcat_s(array_str1, LENGTH1, array_str2);
    std::cout << array_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;
}

void TypeCasting() {
    float flt = -7.44f;
    int32_t sgn;
    uint32_t unsgn;

    sgn = flt;  //Implicit Type Conversion
    unsgn = sgn;

    std::cout << "Floar: " << flt << std::endl;
    std::cout << "int32_t: " << sgn << std::endl;
    std::cout << "uint32_t: " << unsgn << std::endl;
    std::cout << std::endl;

    int fahrenheit = 100;
    int celcius;

    celcius = ((float)5 / 9.0) * (fahrenheit - 32);

    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celcius: " << celcius << std::endl;
    std::cout << std::endl;

    float weight = 10.99;
    std::cout << "Float: " << weight << std::endl;
    std::cout << "Integer Part: " << (int)weight << std::endl;
    std::cout << "Fractional Part: " << (int)((weight - (int)weight) * 10000) << std::endl;
}

void CalculateAverageOfArray(int value[5]) {
    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum += value[i];

    float result = (float)sum / (float)5;
    std::cout << "The Average of the array is " << result << std::endl;
}

enum cow_purpose {
    dairy,
    meat,
    hide, 
    pet
};

struct cow {
    std::string name;
    int age;
    unsigned char purpoe;
};

void Structures() {
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpoe = dairy;

    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpoe << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
}

class cow1 {
public:
    cow1(std::string name_i, int age_i, unsigned char purpose_i) {
        name = name_i;
        age = age_i;
        purpoe = purpose_i;
    }

    std::string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    unsigned char get_purpose() {
        return purpoe;
    }

    void set_name(std::string new_name) {
        name = new_name;
    }

    void set_age(int new_age) {
        age = new_age;
    }

    void set_purpoe(unsigned char new_purpose) {
        purpoe = new_purpose;
    }

private:
    std::string name;
    int age;
    unsigned char purpoe;
};

void Classes() {
    cow1 my_cow("Hildy", 7, pet);

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    std::cout << std::endl;

    my_cow.set_name("Angela");
    my_cow.set_age(26);
    my_cow.set_purpoe(meat);

    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
}

