// Training3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

void Templates();

int main()
{
    printf("\n");
    Templates();
}

template<typename T>
constexpr T pi = T(3.1415926535897932385L);

template<typename T>
T area_of_circle(const T& r) {
    return r * r * pi<T>;
 }

template <typename lT, typename rT>
auto tf(const lT& lhs, const rT& rhs) {
    return lhs + rhs;
}

template <typename T>
void printv(const std::vector<T>& v) {
    if (v.empty()) return;
    for (const T& i : v)
        std::cout << i << " ";
    std::endl;
}

void Templates() {
    std::cout.precision(20);
    std::cout << pi<long double> << " " << area_of_circle<long double>(3) << std::endl;

    const char * cstr = "this is a c-string";
    const std::string sclass = std::string("this is a string class string");

    auto x = "this is a c-string";
    decltype(sclass) y = "Fatai";

    for (auto it = sclass.begin(); it != sclass.end(); ++it) {
        std::cout << *it << " ";
    }

    for (auto c : sclass) {
        std::cout << c << " ";
    }

    auto z = tf<std::string, const char*>(sclass, cstr);
    std::cout << "z is " << z << std::endl; 
    std::cout << "type of z is " << typeid(z).name() << std::endl;

    std::vector<int> v1 = { 1,2,3,4,5 };
    printv(v1);     //Template Argument Deduction
    printv<int>(v1);
}
