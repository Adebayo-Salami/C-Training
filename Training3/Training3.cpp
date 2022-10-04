// Training3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
#include <list>
#include <tuple>
#include <array>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <iterator>
#include <forward_list>
#include <algorithm>
#include "rational.h"
#include <locale>
#include "title-case.h"
#include <functional>
#include <random>
#include "numword.h"

using namespace std;

void Templates();
void STLContainers_Vector();
void STLContainers_List();
void STLContainers_Pair();
void STLContainers_Tuple();
void STLContainers_Array();
void STLContainers_Deque();
void STLContainers_Queue();
void STLContainers_Stack();
void STLContainers_Sets();
void STLContainers_Maps();
void STLIterators_AccessingIterators();
void STLIterators_InputIterators();
void STLIterators_OutputIterators();
void STLIterators_ForwardIterators();
void STLIterators_BiDerectionalIterators();
void STLIterators_RandomAccesIterators();
void Transformations_Transform();
void Transformations_Transform2();
void Transformations_LambdaTransform();
void Transformations_StringsTransform();
void Transformations_BinaryTransform();
void Transformations_TypesTransform();
void STLFunctions_Functors();
void STLFunctions_Arithmetic();
void STLFunctions_Relational();
void STLFunctions_Logical();
void STLAlgorithm_Algorithm();
void STLAlgorithm_Testing();
void STLAlgorithm_SearchingCounting();
void STLAlgorithm_ReplacingRemoving();
void STLAlgorithm_ModifyingAlgo();
void STLAlgorithm_Partitions();
void STLAlgorithm_Sorting();
void STLAlgorithm_MergingSequence();
void STLAlgorithm_BinarySearches();
void STLAlgorithm_ModifyingAlgoRandomize();

int main()
{
#pragma region Hidden Calls

    printf("\n");
    Templates();

    printf("\n");
    STLContainers_Vector();

    printf("\n");
    STLContainers_List();

    printf("\n");
    STLContainers_Pair();

    printf("\n");
    STLContainers_Tuple();

    printf("\n");
    STLContainers_Array();

    printf("\n");
    STLContainers_Deque();

    printf("\n");
    STLContainers_Queue();

    printf("\n");
    STLContainers_Stack();

    printf("\n");
    STLContainers_Maps();

    printf("\n");
    STLIterators_AccessingIterators();

    printf("\n");
    STLIterators_InputIterators();

    printf("\n");
    STLIterators_OutputIterators();

    printf("\n");
    STLIterators_ForwardIterators();

    printf("\n");
    STLIterators_BiDerectionalIterators();

    printf("\n");
    STLIterators_RandomAccesIterators();

    printf("\n");
    Transformations_Transform();

    printf("\n");
    Transformations_Transform2();

    printf("\n");
    Transformations_LambdaTransform();

    printf("\n");
    Transformations_StringsTransform();

    printf("\n");
    Transformations_BinaryTransform();

    printf("\n");
    Transformations_TypesTransform();

    printf("\n");
    STLFunctions_Functors();

    printf("\n");
    STLFunctions_Arithmetic();

    printf("\n");
    STLFunctions_Relational();

    printf("\n");
    STLFunctions_Logical();

#pragma endregion

    printf("\n");
    STLAlgorithm_Algorithm();

    printf("\n");
    STLAlgorithm_Testing();

    printf("\n");
    STLAlgorithm_SearchingCounting();

    printf("\n");
    STLAlgorithm_ReplacingRemoving();

    printf("\n");
    STLAlgorithm_ModifyingAlgo();

    printf("\n");
    STLAlgorithm_Partitions();

    printf("\n");
    STLAlgorithm_Sorting();

    printf("\n");
    STLAlgorithm_MergingSequence();

    printf("\n");
    STLAlgorithm_BinarySearches();

    printf("\n");
    STLAlgorithm_ModifyingAlgoRandomize();
}

#pragma region  Hide Codes

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
    for (const T & i : v)
        std::cout << i << " ";
    std::cout << std::endl;
}

// print the elements of the tuple
template<typename T>
void print3tuple(T t) {
    auto tsz = tuple_size<decltype(t)>::value;
    if (tsz != 3) return;
    cout << get<0>(t) << " : " << get<1>(t) << " : " << get<2>(t) << endl;
}

// print the pair
template<typename T1, typename T2>
void printpair(pair<T1, T2>& p) {
    cout << p.first << " : " << p.second << endl;
}

// print the elements of the array
template<typename T, size_t N>
void printa(array<T, N>& a) {
    for (T& i : a) cout << i << " ";
    cout << endl;
}

// report deque info
template <typename T>
void reportdeq(T& d) {
    size_t sz = d.size();
    cout << "size: " << sz;
    if (sz) cout << " front: " << d.front() << " back: " << d.back();
    cout << endl;
}

// print deque
template <typename T>
void printdeq(T& d) {
    if (d.empty()) return;
    for (auto v : d) cout << v << " ";
    cout << endl;
}

template <typename T>
void report_queue(T& q) {
    size_t sz = q.size();
    cout << "size: " << sz;
    if (sz) cout << " front: " << q.front() << " back: " << q.back();
    cout << endl;
}

template <typename T>
void report_stack(T& stk) {
    cout << "size: " << stk.size() << " top: " << stk.top() << endl;
}

// print the elements of the set
template<typename T>
void print_set(T& s) {
    if (s.empty()) return;
    for (auto x : s) cout << x << " ";
    cout << endl;
}

// print a pair
template <typename T1, typename T2>
void print_pair(pair<T1, T2>& p) {
    cout << p.first << ": " << p.second << endl;
}

// print the elements of the map
template<typename T>
void print_map(T& m) {
    if (m.empty()) return;
    for (auto x : m) print_pair(x);
    cout << endl;
}

void message(const char* s) { std::cout << s << std::endl; }
void message(const char* s, const int n) { std::cout << s << ": " << n << std::endl; }

template<typename T>
void message(const char* s, const T& v) { cout << s << ": " << v << endl; }

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
    std::vector<int> v1 = { 1,2,3,4,5,6,7,8 };
    std::cout << "Elemet at 5 " << v1[5] << std::endl;
    v1.insert(v1.begin() + 5, 42);
    std::cout << "Elemet at 5 " << v1.at(5) << std::endl;
    v1.erase(v1.begin() + 5);
    v1.push_back(47);
    v1.pop_back();  // removed element at end of vector
    //v1.empty();

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
    list<int> l1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printl(l1);
    message("size", (int)l1.size());
    message("front", l1.front());
    message("back", l1.back());

    message("push back 47");
    l1.push_back(47);
    printl(l1);

    // need an iterator to insert and erase
    message("insert:");
    list<int>::iterator it1 = l1.begin();
    while ((*++it1 != 5) && (it1 != l1.end()));
    if (it1 != l1.end()) {
        message("insert 112 before 5");
        l1.insert(it1, 112);
    }
    printl(l1);

    // find element value 7
    while ((*++it1 != 7) && (it1 != l1.end()));
    if (it1 != l1.end()) {
        message("erase 7");
        l1.erase(it1);
    }
    printl(l1);

    // remove element value 8
    l1.remove(8);
    message("remove 8");
    printl(l1);

    message("erase 112 to 9");
    auto it2 = it1 = l1.begin();
    while ((*++it1 != 112) && (it1 != l1.end()));
    while ((*++it2 != 9) && (it2 != l1.end()));
    if (it1 != l1.end() && it2 != l1.end()) {
        l1.erase(it1, it2);
        printl(l1);
    }

    cout << endl;
}

void STLContainers_Tuple() {
    // initializer list
    message("initializer list");
    tuple<int, string, int> t1 = { 47, "forty-seven", 1 };
    print3tuple(t1);

    // default constructor
    message("default constructor");
    tuple<int, string, int> t2(72, "seventy-two", 2);
    print3tuple(t2);

    // make_tuple
    message("make_tuple");
    auto t3 = make_tuple(7, "seven", 3);
    print3tuple(t3);

    // comparison operators
    message("t1 == t2", t1 == t2);
    message("t1 < t2", t1 < t2);
    message("t1 < t3", t1 < t3);
    message("t1 > t2", t1 > t2);
    message("t2 > t3", t2 > t3);
}

void STLContainers_Pair() {
    // initializer list
    message("initializer list");
    pair<int, string> p1 = { 47, "forty-seven" };
    printpair(p1);

    // default constructor
    message("default constructor");
    pair<int, string> p2(72, "seventy-two");
    printpair(p2);

    // from make_pair
    message("make_pair");
    pair<int, string> p3;
    p3 = make_pair(7, "seven");
    printpair(p3);

    // comparison operators
    message("p1 == p2", p1 == p2);
    message("p1 < p2", p1 < p2);
    message("p1 < p3", p1 < p3);
    message("p1 > p2", p1 > p2);
    message("p2 > p3", p2 > p3);
}

void STLContainers_Array() {
    // initializer list
    message("initializer list");
    array<int, 5> a1 = { 1, 2, 3, 4, 5 };
    printa(a1);

    // default constructor
    message("default constructor");
    array<string, 5> a2;
    a2 = { "one", "two", "three" };
    printa(a2);

    // check the size
    message("size of a1", (int)a1.size());
    message("size of a2", (int)a2.size());

    // access elements
    message("a1 element 3 is", a1[3]);
    message("a2 element 2 is", a2[2]);
    message("a1 element 3 is", a1.at(3));
    message("a2 element 2 is", a2.at(2));

    // direct access data
    int* ip1 = a1.data();
    for (size_t i = 0; i < a1.size(); ++i) {
        cout << "element " << i << " is " << *ip1++ << endl;
    }

    string* ip2 = a2.data();
    for (size_t i = 0; i < a2.size(); ++i) {
        cout << "element " << i << " is " << *ip2++ << endl;
    }
}

void STLContainers_Deque() {
    message("create deque");
    deque<string> d1 = { "one", "two", "three" };

    message("push back values");
    d1.push_back("four");
    d1.push_back("five");

    reportdeq(d1);
    printdeq(d1);

    message("pop from front");
    d1.pop_front();
    printdeq(d1);

    message("pop from back");
    d1.pop_back();
    printdeq(d1);

    message("push front");
    d1.push_front("newfront");
    printdeq(d1);

    message("push back");
    d1.push_back("newback");
    printdeq(d1);
}

void STLContainers_Queue() {
    // queue from list
    message("initialize queue from list");
    list<int> l1 = { 1, 2, 3, 4, 5 };
    queue<int, list<int>> q1(l1);    // constructor copies to new list
    report_queue(q1);

    message("pop all from q1");
    while (!q1.empty()) {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
    report_queue(q1);

    // default queue (deque)
    queue<string> q2;
    message("push strings onto q2");
    for (string s : {"one", "two", "three", "four", "five"}) {
        q2.push(s);
    }
    report_queue(q2);

    message("pop all from q2");
    while (!q2.empty()) {
        cout << q2.front() << " ";
        q2.pop();
    }
    cout << endl;
    report_queue(q2);
}

void STLContainers_Stack() {
    // vector
    message("stk1");
    vector<int> v1 = { 1, 2, 3, 4, 5 };
    stack<int, vector<int>> stk1(v1);
    report_stack(stk1);
    message("stk1 push 42");
    stk1.push(42);
    report_stack(stk1);
    message("stk1 pop");
    stk1.pop();
    report_stack(stk1);

    message("stk2 default stack (deque)");
    stack<string> stk2;
    for (string s : {"one", "two", "three", "four", "five"}) {
        stk2.push(s);
    }
    report_stack(stk2);
    message("stk2 push forty-two");
    stk2.push("forty-two");
    report_stack(stk2);
    message("stk2 pop");
    stk2.pop();
    report_stack(stk2);
}

void STLContainers_Sets() {
    message("construct set set1");
    set<string> set1 = { "one", "two", "three", "four", "five" };
    multiset<string> multiset1 = { "one", "two", "three", "four", "five" }; //multiset allows duplicate
    message("size of set", set1.size());
    message("ordered set is alphabetical");
    print_set(set1);

    message("insert element six");
    set1.insert("six");
    print_set(set1);

    message("find and erase element six");
    set<string>::iterator it = set1.find("six");
    if (it != set1.end()) {
        message("erasing", *it);
        set1.erase(it);
    }
    else {
        cout << "not found" << endl;
    }
    print_set(set1);

    message("inserting duplicate element five");
    set1.insert("five");
    auto r = set1.insert("five");   // returns a pair (first being an iterator to the new or duplicate element, second being the status bool r.second
    print_set(set1);
    cout << endl;


    message("construct unordered set set1");
    unordered_set<string> set2 = { "one", "two", "three", "four", "five" }; // Seaching is faster returns hash to represent value
    unordered_multiset<string> multisetset2 = { "one", "two", "three", "four", "five" };    // Allows duplicate
    message("size of set", set2.size());
    message("unordered set has no defined order");
    print_set(set2);

    message("insert element six");
    set2.insert("six");
    print_set(set2);

    message("find and erase element six");
    auto it2 = set2.find("six");
    if (it2 != set2.end()) {
        message("erasing", *it2);
        set2.erase(it2);
    }
    else {
        cout << "not found" << endl;
    }
    print_set(set2);

    message("inserting duplicate element five");
    set2.insert("five");
    print_set(set2);
    cout << endl;
}

void STLContainers_Maps() {
    message("map of strings from initializer list");
    map<string, string> mapstr = { { "George", "Father" }, { "Ellen", "Mother" },
        { "Ruth", "Daughter" }, { "Spike", "Neighbor's Son" } };
    multimap<string, string> multimapstr = { { "George", "Father" }, { "Ellen", "Mother" },
        { "Ruth", "Daughter" }, { "Spike", "Neighbor's Son" } };    // multimap allow duplicates so doesnt have at and [] helper methods

    message("size", mapstr.size());
    message("get some values");
    message("George", mapstr["George"]);
    message("Ellen", mapstr.at("Ellen"));
    message("Spike", mapstr.find("Spike")->second);
    message("print_map:");
    print_map(mapstr);

    message("insert an element");
    mapstr.insert({ "Luke", "Neighbor" });
    message("size", mapstr.size());
    print_map(mapstr);

    cout << "insert a duplicate:" << endl;
    auto rp = mapstr.insert({ "Luke", "Neighbor" });
    if (rp.second) {
        message("insert succeeded");
        print_pair(*rp.first);
    }
    else {
        message("insert failed");
    }
    message("size", mapstr.size());
    print_map(mapstr);

    message("find and erase Spike");
    auto it = mapstr.find("Spike");
    if (it != mapstr.end()) {
        message("found");
        print_pair(*it);
        mapstr.erase(it);
        message("erased");
    }
    else {
        message("not found");
    }
    message("size", mapstr.size());
    print_map(mapstr);
}

void STLIterators_AccessingIterators() {
    vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int>::iterator it1;   // iterator object

    vector<int>::iterator ibegin = vi1.begin();
    vector<int>::iterator iend = vi1.end();

    for (it1 = ibegin; it1 < iend; ++it1) {
        cout << *it1 << " ";
    }
    cout << endl;
}

void STLIterators_InputIterators() {
    double d1 = 0, d2 = 0;

    cout << "Two numeric values: " << flush;
    cin.clear();
    istream_iterator<double> eos;         // default constructor is end-of-stream
    istream_iterator<double> iit(cin);    // stdin iterator

    if (iit == eos) {
        message("no values");
        return;
    }
    else {
        d1 = *iit++;
    }

    if (iit == eos) {
        message("no second value");
        return;
    }
    else {
        d2 = *iit;
    }

    cin.clear();
    cout << d1 << " * " << d2 << " = " << d1 * d2 << endl;
}

void STLIterators_OutputIterators() {
    ostream_iterator<int> output(cout, " ");

    for (int i : { 3, 197, 42 }) {
        *output++ = i;
    }
    cout << endl;
}

void STLIterators_ForwardIterators() {
    forward_list<int> fl1 = { 1, 2, 3, 4, 5 };
    forward_list<int>::iterator it1;     // forward iterator

    for (it1 = fl1.begin(); it1 != fl1.end(); ++it1) {
        cout << *it1 << " ";
    }
    cout << endl;
}

void STLIterators_BiDerectionalIterators() {
    set<int> set1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    set<int>::iterator it1;   // iterator object

    // iterate forward
    for (it1 = set1.begin(); it1 != set1.end(); ++it1) {
        cout << *it1 << " ";
    }
    cout << endl;

    // iterate backward
    for (it1 = set1.end(); it1 != set1.begin();) {
        cout << *--it1 << " ";
    }
    cout << endl;

    // range-based for loop
    for (int i : set1) {
        cout << i << " ";
    }
    cout << endl;
}

void STLIterators_RandomAccesIterators() {
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int>::iterator it1;   // iterator object

    // iterate forward
    for (it1 = v1.begin(); it1 != v1.end(); ++it1) {
        cout << *it1 << " ";
    }
    cout << endl;

    // iterate backward
    for (it1 = v1.end(); it1 != v1.begin();) {
        cout << *--it1 << " ";
    }
    cout << endl;

    // range-based for loop
    for (int i : v1) {
        cout << i << " ";
    }
    cout << endl;

    it1 = v1.begin() + 5;
    message("element begin + 5", *it1);
    message("element [5]", v1[5]);

    it1 = v1.end() - 3;
    message("element end - 3", *it1);
}

template <typename T>
class accum {
    T _acc = 0;
    accum() {}
public:
    accum(T n) : _acc(n) {}
    T operator() (T y) { _acc += y; return _acc; }
};

template <typename T>
void disp_v(vector<T>& v) {
    if (!v.size()) return;
    for (T e : v) { cout << e << " "; }
    cout << endl;
}

void Transformations_Transform() {
    accum<int> x(7);
    cout << x(7) << endl;

    vector<int> v1 = { 1, 2, 3, 4, 5 };
    disp_v(v1);

    vector<int> v2(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), x);

    disp_v(v2);
}

ostream& operator << (ostream& o, const Rational& r) {
    return o << string(r);
}

void Transformations_Transform2() {
    accum<Rational> x(Rational(3, 5));
    cout << x(7) << endl;

    vector<Rational> v1 = { 1, 2, 3, 4, 5 };
    disp_v(v1);

    vector<Rational> v2(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), x);

    disp_v(v2);
}

size_t strsz(string & s) {
    return s.size();
}

void Transformations_LambdaTransform() {
    int accum = 14;
    //auto x = [accum](int d) mutable -> int { return accum += d; };

    vector<int> v1 = { 1, 2, 3, 4, 5 };
    disp_v(v1);

    vector<int> v2(v1.size());
    //transform(v1.begin(), v1.end(), v2.begin(), x);
    transform(v1.begin(), v1.end(), v2.begin(), [accum](int d) mutable -> int 
        { 
            return accum += d; 
        }
    );

    disp_v(v2);

    vector<string> v1_str = { "one", "two", "three", "four", "five"};
    disp_v(v1_str);

    vector<size_t> v2_str(v1_str.size());
    /*transform(v1_str.begin(), v1_str.end(), v2_str.begin(), [](string & s) -> size_t
        {
            return s.size();
        }
    );*/
    transform(v1_str.begin(), v1_str.end(), v2_str.begin(), strsz);

    disp_v(v2);
}

void Transformations_StringsTransform() {
    string s1 = "this is a string";
    cout << s1 << endl;

    string s2(s1.size(), '.');
    //transform(s1.begin(), s1.end(), s2.begin(), ::toupper);
    //transform(s1.begin(), s1.end(), s2.begin(), title_case());
    title_case t;
    transform(s1.begin(), s1.end(), s2.begin(), t);

    cout << s2 << endl;
}

template <typename T>
class embiggen {
    T _accum = 1;
public:
    T operator() (const T& n1, const T& n2) { return _accum = n1 * n2 * _accum; }
};

void Transformations_BinaryTransform() {
    vector<long> v1 = { 1, 2, 3, 4 ,5 };
    vector<long> v2 = { 5, 10, 15, 20, 25 };
    vector<long> v3(v1.size(), 0);
    //embiggen<long> fbig;
    multiplies<long> fbig;

    disp_v(v1);
    disp_v(v2);
    disp_v(v3);
    cout << endl;

    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fbig);
    disp_v(v1);
    disp_v(v2);
    disp_v(v3);
}

template <typename T>
void disp_v(const T& v) {
    if (!v.size()) return;
    bool first = true;
    for (auto e : v) {
        if (first) first = false;
        else cout << ", ";
        cout << e;
    }
    cout << endl;
}

void Transformations_TypesTransform() {
    const vector<uint64_t> nums = { 1, 2, 3, 4, 5, 60, 72, 847, 9001, 10002052 };
    disp_v(nums);

    bw::numword nw;
    vector<string> words(nums.size());
    transform(nums.begin(), nums.end(), words.begin(), nw);
    disp_v(words);
}

template <typename T>
class multiply_by {
    T _mult = 0;
    multiply_by();
public:
    multiply_by(T n) : _mult(n) {}
    void mult(T n) { _mult = n; }
    T mult() const { return _mult; }
    T operator() (T n) const { return _mult * n; }
};

void STLFunctions_Functors() {
    multiply_by<int> x(9);
    cout << "x mult is " << x.mult() << endl;

    cout << "x(5) is " << x(5) << endl;
    cout << "x(25) is " << x(25) << endl;

    x.mult(7);
    cout << "x mult is " << x.mult() << endl;

    cout << "x(5) is " << x(5) << endl;
    cout << "x(25) is " << x(25) << endl;
}

void STLFunctions_Arithmetic() {
    vector<long> v1 = { 26, 52, 79, 114, 183 };
    vector<long> v2 = { 1, 2, 3, 4 ,5 };
    vector<long> v3(v1.size(), 0);
    disp_v(v1);
    disp_v(v2);
    disp_v(v3);
    cout << endl;

    //plus<long> f;
    //minus<long> f;
    //multiplies<long> f;
    //divides<long> f;
    //modulus<long> f;
    negate<long> f_n;
    //transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), f);
    transform(v1.begin(), v1.end(), v3.begin(), f_n);
    disp_v(v3);
}

template <typename T>
void disp_v_b(vector<T>& v) {
    if (!v.size()) return;
    if (typeid(T) == typeid(bool)) {
        for (bool e : v) { cout << (e ? "T" : "F") << " "; }
    }
    else {
        for (T e : v) { cout << e << " "; }
    }
    cout << endl;
}

void STLFunctions_Relational() {
    vector<long> v1 = { 26, 52, 79, 114, 183 };
    vector<long> v2 = { 52, 2, 72, 114 ,5 };
    vector<bool> v3(v1.size());
    disp_v_b(v1);
    disp_v_b(v2);
    cout << endl;

    //greater<long> f;
    //less<long> f;
    //greater_equal<long> f;
    //less_equal<long> f;
    //equal_to<long> f;
    not_equal_to<long> f;
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), f);
    disp_v_b(v3);

    //greater<long> ff;
    less<long> ff;
    sort(v2.begin(), v2.end(), ff);

    disp_v_b(v3);
}

template <typename T>
void disp_v(T& v) {
    if (!v.size()) return;
    for (auto e : v) { cout << e << " "; }
    cout << endl;
}

void STLFunctions_Logical() {
    vector<int> v1 = { 1, 0, 1, 0, 1, 0, 1, 0 };
    vector<int> v2 = { 1, 1, 1, 1, 0, 0, 0, 0 };
    vector<int> v3(v1.size(), 0);
    disp_v(v1);
    disp_v(v2);
    cout << endl;

    //logical_and<int> f;
    //logical_or<int> f;
    logical_not<int> f_n;
    //transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), f);
    transform(v1.begin(), v1.end(), v3.begin(), f_n);
    disp_v(v3);
}

#pragma endregion

void STLAlgorithm_Algorithm() {
    int n = 42;

    // prime numbers < 100, out of order
    vector<int> v1 = { 71, 13, 59, 7, 53, 29, 3, 97, 5, 11, 17, 19, 23, 2, 31, 83, 37, 41, 89, 43, 47, 61, 67, 73, 79 };
    disp_v(v1);

    sort(v1.begin(), v1.end());
    disp_v(v1);
    if (binary_search(v1.begin(), v1.end(), n)) {
        cout << "found " << n << endl;
    }
    else {
        cout << "did not find " << n << endl;
    }
}

template <typename T>
const bool is_prime(const T& num) {
    if (num <= 1) return false;
    bool primeflag = true;
    for (T l = 2; l < num; ++l) {
        if (num % l == 0) {
            primeflag = false;
            break;
        }
    }
    return primeflag;
}

void STLAlgorithm_Testing() {
    // prime numbers < 100
    const vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    disp_v(v1);

    if (all_of(v1.begin(), v1.end(), is_prime<int>)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    const vector<int> v2 = { 1,4,6,8,9,10,12 };
    //if (any_of(v2.begin(), v2.end(), is_prime<int>)) {
    if (none_of(v2.begin(), v2.end(), is_prime<int>)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

template <typename T>
bool is_odd(const T& n) {
    return ((n % 2) == 1);
}

void STLAlgorithm_SearchingCounting() {
    // prime numbers < 100
    const vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    disp_v(v1);

    const vector<int> v2 = { 31, 37, 41, 43, 47 };
    disp_v(v2);

    //auto it = find(v1.begin(), v1.end(), 41);
    //auto it = find_if(v1.begin(), v1.end(), is_odd<int>);
    //auto it = find_if_not(v1.begin(), v1.end(), is_odd<int>);
    auto it = search(v1.begin(), v1.end(), v2.begin(), v2.end());

    if (it != v1.end()) {
        size_t index = it - v1.begin();
        cout << "found at index " << index << ": " << *it << endl;
    }
    else {
        cout << "not found" << endl;
    }

    //auto c = count(v1.begin(), v1.end(), 7);
    auto c = count_if(v1.begin(), v1.end(), is_odd<int>);
    cout << "found " << c << " occurrences" << endl;
}

template <typename T>
bool is_even(const T& n) {
    return ((n % 2) == 0);
}

void STLAlgorithm_ReplacingRemoving() {
    // prime numbers < 100
    vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 11, 41, 43, 47, 53, 59, 11, 61, 67, 71, 73, 79, 83, 89, 97 };
    disp_v(v1);

    //replace(v1.begin(), v1.end(), 47, 99);
    //replace_if(v1.begin(), v1.end(), is_even<int>, 99);
    //auto it = remove(v1.begin(), v1.end(), 11);
    //auto it = remove_if(v1.begin(), v1.end(), is_even<int>);
    auto it = unique(v1.begin(), v1.end());
    if (it == v1.end()) {
        cout << " no elements removed" << endl;
    }
    else {
        auto startIt = v1.begin();
        auto newSize = it - startIt;
        v1.resize(newSize);
    }


    disp_v(v1);
}

void STLAlgorithm_ModifyingAlgo() {
    vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    vector<int> v2(v1.size(), 0);
    disp_v(v1);
    disp_v(v2);

    copy(v1.begin(), v1.end(), v2.begin());
    copy_n(v1.begin(), 15, v2.begin());
    copy_backward(v1.begin(), v1.end(), v2.end());
    reverse_copy(v1.begin(), v1.end(), v2.begin ());
    fill(v1.begin(), v1.end() -10, 100);
    fill_n(v1.begin(), 10, 100);
    generate(v2.begin(), v2.end(), []() -> int { return rand() % 100; });
    random_shuffle(v1.begin(), v1.end());
    random_shuffle(v1.begin(), v1.end(), [](int i) -> int { return rand() % i; });
    disp_v(v1);
    disp_v(v2);
}

void STLAlgorithm_ModifyingAlgoRandomize() {
    // prime numbers < 100
    vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    disp_v(v1);

    random_device rd;
    mt19937 g(rd());

    shuffle(v1.begin(), v1.end(), g);
    disp_v(v1);
}

template <typename T>
bool is_even_tens(T& n) {
    if (n < 10) return false;
    return ((n / 10) % 2) == 0;
}

void STLAlgorithm_Partitions() {
    // prime numbers > 10 & < 100
    vector<int> v1 = { 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    disp_v(v1);

    size_t sz = count_if(v1.begin(), v1.end(), is_even_tens<int>);
    vector<int> v2(sz), v3(v1.size() - sz);

    partition(v1.begin(), v1.end(), is_even_tens<int>);
    stable_partition(v1.begin(), v1.end(), is_even_tens<int>);
    partition_copy(v1.begin(), v1.end(), v2.begin(), v3.begin(), is_even_tens<int>);
    disp_v(v1);
    disp_v(v2);
    disp_v(v3);
}

template <typename T>
bool mycomp(const T& lh, const T& rh) {
    return lh < rh;
    //return lh > rh;
}

void STLAlgorithm_Sorting() {
    // prime numbers < 100
    vector<int> v1 = { 83, 53, 47, 23, 13, 59, 29, 41, 19, 71, 31, 67, 11, 2, 97, 7, 61, 73, 3, 79, 37, 43, 17, 5, 89 };
    vector<double> v2 = { 3.07, 2.49, 3.73, 6.58, 3.3, 2.72, 3.44, 8.78, 9.23, 4.09, 4.4, 1.65, 4.92, 0.42, 4.87, 5.03, 3.27, 7.29, 8.4, 6.12 };
    disp_v(v1);
    disp_v(v2);

    sort(v1.begin(), v1.end());
    sort(v1.begin(), v1.end(), mycomp<int>);
    disp_v(v1);

    StableSort();
}

template <typename T>
bool mycomp(const T& lh, const T& rh) {
    return int(lh) < int(rh);
}

void StableSort() {
    vector<int> v1 = { 83, 53, 47, 23, 13, 59, 29, 41, 19, 71, 31, 67, 11, 2, 97, 7, 61, 73, 3, 79, 37, 43, 17, 5, 89 };
    vector<double> v2 = { 3.07, 2.49, 3.73, 6.58, 3.3, 2.72, 3.44, 8.78, 9.23, 4.09, 4.4, 1.65, 4.92, 0.42, 4.87, 5.03, 3.27, 7.29, 8.4, 6.12 };
    disp_v(v2);

    vector<double> v3;

    v3 = v2;
    sort(v3.begin(), v3.end(), mycomp<double>);
    disp_v(v3);

    v3 = v2;
    stable_sort(v3.begin(), v3.end(), mycomp<double>);
    disp_v(v3);
}

// compare for reverse sort
template <typename T>
bool gtcomp(const T& lh, const T& rh) {
    return lh > rh;
}

void STLAlgorithm_MergingSequence() {
    vector<int> v1 = { 83, 53, 47, 23, 13, 59, 29, 41, 19, 71, 31, 67 };
    vector<int> v2 = { 2, 97, 7, 61, 73, 3, 79, 37, 43, 17, 5, 89, 11 };
    vector<int> v3(v1.size() + v2.size());
    disp_v(v1);
    disp_v(v2);
    cout << endl;

    sort(v1.begin(), v1.end());
    sort(v1.begin(), v1.end(), gtcomp<int>);
    sort(v2.begin(), v2.end());
    sort(v2.begin(), v2.end(), gtcomp<int>);
    disp_v(v1);
    disp_v(v2);
    cout << endl;

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    disp_v(v3);
}

void STLAlgorithm_BinarySearches() {
    int n = 47;

    // prime numbers < 100
    vector<int> v1 = { 83, 53, 47, 23, 13, 59, 29, 41, 19, 71, 31, 67, 11, 2, 97, 7, 61, 73, 3, 79, 37, 43, 17, 5, 89 };
    disp_v(v1);

    sort(v1.begin(), v1.end());
    disp_v(v1);

    cout << "searching for " << n << " ... ";
    if (binary_search(v1.begin(), v1.end(), n)) {
        cout << "found ";
    }
    else {
        cout << "not found";
    }
    cout << endl;

    auto it = lower_bound(v1.begin(), v1.end(), n);
    cout << "Lower bound: " << *it << endl;

    it = upper_bound(v1.begin(), v1.end(), n);
    cout << "Upper bound: " << *it << endl;

    auto pr = equal_range(v1.begin(), v1.end(), n); //pair
    cout << "Lower bound: " << *pr.first << endl;
    cout << "Upper bound: " << *pr.second << endl;
}
