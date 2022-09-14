// Training3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <list>

void Templates();
void STLContainers_Vector();
void STLContainers_List();

int main()
{
    printf("\n");
    Templates();

    printf("\n");
    STLContainers_Vector();

    printf("\n");
    STLContainers_List();
}

template<typename T>
constexpr T pi = T(3.1415926535897932385L);

template<typename T>
void printl(std::list<T>& l) {
    if (l.empty()) return;
    for (T& i : l) std::cout << i << " ";
    std::cout << std::endl;
}

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

void message(const char* s) { std::cout << s << std::endl; }
void message(const char* s, const int n) { std::cout << s << ": " << n << std::endl; }

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

void STLContainers_Vector() {
    std::vector<int> v1 = { 1,2,3,4,5 };
    std::cout << "Elemet at 5 " << v1[5] << std::endl;
    v1.insert(v1.begin() + 5, 42);
    std::cout << "Elemet at 5 " << v1.at(5) << std::endl;
    v1.erase(v1.begin() + 5);
    v1.push_back(47);
    v1.pop_back();  // removed element at end of vector
    v1.empty();

    std::vector<int> vx = { 1,2,3 };
    while (!vx.empty())
        vx.pop_back();
    std::cout << "Is VX Empty: " << vx.empty() << std::endl;
    vx.insert(vx.begin(), { 1,2,3,4,5 });
    std::cout << "Is VX Empty: " << vx.empty() << std::endl;
    vx.clear();
    std::cout << "Is VX Empty: " << vx.empty() << std::endl;

    // From C-array
    constexpr size_t size = 10;
    int ia[size] = { 1,2,3,4,5,6,7,8,9,10 };
    std::cout << "Vector from C-array" << std::endl;
    std::vector<int> v2(ia, ia + size);
    std::cout << "Is v2 Empty: " << v2.empty() << std::endl;

    // Filled with strings
    std::cout << "Vector filled with string" << std::endl;
    std::vector<std::string> v3(5, "string");   // Reapeat string 5 times

    // Copy Constructor
    std::vector<std::string> v4(v3);

    // Move Constructor
    std::vector<std::string> v5(std::move(v4));
}

void STLContainers_List() {

}