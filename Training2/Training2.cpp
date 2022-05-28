#include <cstdio>
#include <cstdint>
#include <new>
#include <typeinfo>
#include "rational.h"
#include <iostream>

void TestVSWithExercise();
void StatementsAndExpressions();
void Pointers();
void References();
void PrimitiveArrays();
void PrimitiveStrings();
void Structures();
void CountElementChallenge();
void CountElementChallengeSolution();
void IntegerSizes();
void FixedSizeIntegers();
void FloatingPointTypes();
void CharactersAndString();
void CharactersEscapeSequence();
void ReferencesPrac();
void BitFields();
void Enumerations();
void UnionsPrac();
void TypesWithTypeDef();
void DynamicMemoryOperations();
void TypeIdSizeOfTyeCast();
void PrimeNumbersChallenge(int max = 100);
void PrimeNumbersSolution();
void NonRecursiveFactorialQ(unsigned long int n);
void RationalCode();
void TemplateFunctions();
void StandardFileIO();
void BinaryFileIO();
void UnFormattedIO();
void FormattedIO();

int main()
{ 
    /*
        The term "unsigned" in computer programming indicates a variable that can hold only positive numbers. 
        The term "signed" in computer code indicates that a variable can hold negative and positive values. 
        The property can be applied to most of the numeric data types including int, char, short and long.
    */
    puts("Hello World!");

    //printf("\n");
    //TestVSWithExercise();

    //printf("\n");
    //StatementsAndExpressions();

    //printf("\n");
    //Pointers();

    //printf("\n");
    //References();

    //printf("\n"); 
    //PrimitiveArrays();

    //printf("\n");
    //PrimitiveStrings();

    //printf("\n");
    //Structures();

    //printf("\n");
    //CountElementChallenge();

    //printf("\n");
    //CountElementChallengeSolution();

    //printf("\n");
    //IntegerSizes();

    //printf("\n");
    //FixedSizeIntegers();

    //printf("\n");
    //FloatingPointTypes();

    //printf("\n");
    //CharactersAndString();

   /* printf("\n");
    CharactersEscapeSequence();

    printf("\n");
    ReferencesPrac();

    printf("\n");
    BitFields();

    printf("\n");
    Enumerations();

    printf("\n");
    UnionsPrac();

    printf("\n");
    TypesWithTypeDef();

    printf("\n");
    DynamicMemoryOperations();

    printf("\n");
    TypeIdSizeOfTyeCast();

    printf("\n");
    PrimeNumbersChallenge(100);

    printf("\n");
    PrimeNumbersSolution();

    printf("\n");
    NonRecursiveFactorialQ(5);

    printf("\n");
    RationalCode();*/

    //printf("\n");
    //TemplateFunctions();

    //printf("\n");
    //StandardFileIO();

    //printf("\n");
    //void BinaryFileIO();

    printf("\n");
    UnFormattedIO();

    printf("\n");
    FormattedIO();

    return 0;
}


void TestVSWithExercise() {
    int ia[] = { 1,2,3,4,5 };
    for (auto i : ia) {
        printf("i is %d\n", i);
    }
    printf("MSC version is %d\n", _MSC_VER);
}

void StatementsAndExpressions() {
    int x;
    x = 42;

    printf("x is %d\n", x);
    printf("x is %d\n", x = 73);
}

void Pointers() {
    int x;
    x = 1;
    int y = x;  //Copying the content of x into y

    int* integerPointer;
    integerPointer = &x;    //Copys the addres of x
    y = *integerPointer;    //Dereferences the pointer and gets the content

    int x1 = 7;
    int y1 = 42;
    int* ip = &x1;

    printf("The value of x is %d\n", x1);
    printf("The value of y is %d\n", y1);
    printf("The value of *ip is %d\n", *ip);

    x1 = 73;

    printf("The value of *ip is %d\n", *ip);

    ip = &y1;
    printf("The value of *ip is %d\n", *ip);
}

void References() {
    int x = 42;
    int* ip = &x;
    int& y = x;     //Note: Always use  const identifier when creating a reference

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    y = 73;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    int z = 7;
    ip = &z;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);

    *ip = 103;
    y = 142;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n", z);
}
 
void PrimitiveArrays() {
    int ia[5];

    ia[0] = 1;
    *ia = 4;

    int* ip = ia;

    *ip = 2;
    ++ip;   //Increments the pointer to the second element of the array
    *ip = 3;
    *(++ip) = 4;    //Increments a pointer and ue at the same time;

    int arrayV[] = { 1,2,3,4,5 };

    int x = arrayV[2];
    printf("x is %d\n", x);
    arrayV[2] = 47;

    for (int i : arrayV) {
        printf("%d ", i);
    }
    puts("");

}

void PrimitiveStrings() {
    //char s[] = "String";  //String is an array of characters
    char s[] = { 'S', 't', 'r', 'i', 'n', 'g', 0 };
    printf("s is %s\n", s);
    for (int i = 0; s[i] != 0; ++i) {
        printf("char is %c\n", s[i]);
    }
}

struct S {
    int i;
    double d;
    const char* s;
};
void Structures() {
    S s1 = { 3, 47.9, "string one" };

    printf("s1: %d, %f, %s\n", s1.i, s1.d, s1.s);
}

void CountElementChallenge() {
    const char string[] = "This is a null-terminated string.";

    int count = 0;

    for (char c : string) {
        if (c == ' ') continue;
    /*    printf("c : %c\n", c);*/
        if (c == 0) break;
        count++;
    }

    printf("The number of charactrers is: %d\n", count);
}

void CountElementChallengeSolution() {
    const char string[] = "This is a null-terminated string.";

    int count = 0;

    for (count = 0; string[count]; ++count)
        ;
    printf("The number of fhcaracters is: %d\n", count);

    count = 0;

    while (string[count]) {
        ++count;
    }
    printf("The number of charactrers is: %d\n", count);

    count = 0;

    for (int x : string) {
        if (x == 0) break;
        ++count;
    }
    printf("The number of charactrers is: %d\n", count);
}

void IntegerSizes() {
    char c = 0;
    short int si = 0;
    int i = 0;
    long int li = 0;
    long long int lli = 0;

    printf("sizeof char is %zd bits\n", sizeof(c) * 8);
    printf("sizeof short int is %zd bits\n", sizeof(si) * 8);
    printf("sizeof int is %zd bits\n", sizeof(i) * 8); 
    printf("sizeof long int is %zd bits\n", sizeof(li) * 8);
    printf("sizeof long long int is %zd bits\n", sizeof(lli) * 8);
}

void FixedSizeIntegers() {
    printf("sizeof int8_t is %ld bits \n", sizeof(int8_t) * 8);
    printf("sizeof int16_t is %ld bits \n", sizeof(int16_t) * 8);
    printf("sizeof int32_t is %ld bits \n", sizeof(int32_t) * 8);
    printf("sizeof int64_t is %ld bits \n", sizeof(int64_t) * 8);

    printf("sizeof uint8_t is %ld bits \n", sizeof(uint8_t) * 8);
    printf("sizeof uint16_t is %ld bits \n", sizeof(uint16_t) * 8);
    printf("sizeof uint32_t is %ld bits \n", sizeof(uint32_t) * 8);
    printf("sizeof uint64_t is %ld bits \n", sizeof(uint64_t) * 8);
}

const size_t byte = 8;
void FloatingPointTypes() {
    float f;
    double df;
    long double ldf;

    printf("size of float f is %zd bits\n", sizeof(f) * byte);
    printf("size of double df is %zd bits\n", sizeof(df) * byte);
    printf("size of long double ldf is %zd bits\n", sizeof(ldf) * byte);

    f = 500.000;
    f = 5e2;
    printf("f is %f\n", f);

    //Floats are good on scale but not precision
    df = .1 + .1 + .1;
    printf("f is %1.20lf\n", df);
    if (df == 0.3) {
        puts("true");
    }
    else {
        puts("false");
    }
}

void CharactersAndString() {
    //char cstring[] = "String";
    const char* const cstring = "String" " another string";

    puts(cstring);

    for (int i = 0; cstring[i]; i++) {
        printf("%d: %c\n", i, cstring[i]);
    }
}

void CharactersEscapeSequence() {
    puts("Hello, \n \t World! \' \" \\ \x40 \u03bc");
}

void Qualifiers() {
    //CV Qualifiers    Storage Duration
    //const            static
    //mutable          register
    //volatile         extern

    //Static variables are stored globally and belongs to no object or class
}

void ReferencesPrac() {
    int i = 5;
    int& ir = i;
    ir = 10;

    printf("i is %d\n", i);
}
 
struct Prefs {
    bool likesMusic : 1;
    bool hasHair : 1;
    bool hasInternet : 1;
    bool hasDinosaur : 1;
    unsigned int numberOfChildren : 4;
};
void BitFields() {
    Prefs homer;
    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasInternet = true;
    homer.hasDinosaur = false;
    homer.numberOfChildren = 3;

    printf("sizeof homer: %zd bits\n", sizeof(homer) * 8);
    printf("sizeof int: %zd bits\n", sizeof(int) * 8);

    if (homer.likesMusic) printf("homer likes music\n");
    if (homer.hasHair) printf("homer has hair\n");
    if (homer.hasInternet) printf("homer has net\n");
    if (homer.hasDinosaur) printf("homer has a dino\n");
    printf("homer has %d children\n", homer.numberOfChildren);
}

enum card_suit : uint8_t { SPD, HRT, DIA, CLB };
enum card_rank : uint8_t { ACE = 1, DEUCE = 2, JACK = 11, QUEEN, KING };

const char* aceString = "Ace";
const char* jckString = "Jack";
const char* queString = "Queen";
const char* kngString = "King";
const char* deuString = "Deuce";
const char* spdString = "Spades";
const char* hrtString = "Hearts";
const char* diaString = "Diamonds";
const char* clbString = "Clubs";

struct card {
    uint8_t rank;
    uint8_t suit;
};
card deck[52] = {
    { ACE, SPD }, { DEUCE, SPD }, { 3, SPD }, { 4, SPD }, { 5, SPD }, { 6, SPD }, { 7, SPD },
    { 8, SPD }, { 9, SPD }, { 10, SPD }, { JACK, SPD }, { QUEEN, SPD }, { KING, SPD },
    { 1, HRT }, { 2, HRT }, { 3, HRT }, { 4, HRT }, { 5, HRT }, { 6, HRT }, { 7, HRT },
    { 8, HRT }, { 9, HRT }, { 10, HRT }, { 11, HRT }, { 12, HRT }, { 13, HRT },
    { 1, DIA }, { 2, DIA }, { 3, DIA }, { 4, DIA }, { 5, DIA }, { 6, DIA }, { 7, DIA },
    { 8, DIA }, { 9, DIA }, { 10, DIA }, { 11, DIA }, { 12, DIA }, { 13, DIA },
    { 1, CLB }, { 2, CLB }, { 3, CLB }, { 4, CLB }, { 5, CLB }, { 6, CLB }, { 7, CLB },
    { 8, CLB }, { 9, CLB }, { 10, CLB }, { 11, CLB }, { 12, CLB }, { 13, CLB }
};
void print_card(const card& c) {
    if (c.rank >= 3 && c.rank <= 10) {
        printf("%d of ", c.rank);
    }
    else {
        switch (c.rank) {
        case ACE:
            printf("%s of ", aceString);
            break;
        case JACK:
            printf("%s of ", jckString);
            break;
        case QUEEN:
            printf("%s of ", queString);
            break;
        case KING:
            printf("%s of ", kngString);
            break;
        case DEUCE:
            printf("%s of ", deuString);
            break;
        }
    }
    switch (c.suit) {
    case SPD:
        puts(spdString);
        break;
    case HRT:
        puts(hrtString);
        break;
    case DIA:
        puts(diaString);
        break;
    case CLB:
        puts(clbString);
        break;
    }
}
void Enumerations() {
    long int count = sizeof(deck) / sizeof(card);
    printf("count: %ld cards\n", count);
    for (card c : deck) {
        print_card(c);
    }
}

union ipv4 {
    uint32_t i32;
    struct {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octets;
};
void UnionsPrac() {
    union ipv4 addr;
    addr.octets = { 192, 168, 73, 42 };
    printf("addr is %d.%d.%d.%d is %08x\n",
        addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32);
}

typedef unsigned char points_t;
typedef unsigned char rank_t;
struct score {
    points_t p; 
    rank_t r;
};
void TypesWithTypeDef() {
    score s = { 5, 1 };
    printf("score s had %d points and a rank of %d\n", s.p, s.r);
}

void DynamicMemoryOperations() {
    const long int count = 1024;

    printf("allocate space for %lu long int at *ip with new\n", count);

    // allocate array
    long int* ip;
    try {
        ip = new long int[count];

        ip = new (std::nothrow) long int[count];
        if (!ip) {
            fputs("Cannot allocate memory \n", stderr);
            return;
        }
    }
    catch (std::bad_alloc& ba) {
        fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
        return;
    }

    // initialize array
    for (long int i = 0; i < count; i++) {
        ip[i] = i;
    }

    // deallocate array
    delete [] ip;
    puts("space at *ip deleted");
}

void TypeIdSizeOfTyeCast() {
    int x = 5;
    long long int y;
    y = x; //implicit
    y = (int)x; //Explicit
    
    printf("x is %d \n", x);
    printf("y is %lld \n", y);

    int z = 5;
    size_t v = sizeof z;
    size_t tt = sizeof(double);
    printf("sizeof v is %zd \n", v);
    printf("sizeof tt is %zd \n", tt);

    struct A { int x; };
    struct B { int x; };

    A a1;
    A a2;
    B b1;
    B b2;

    if (typeid(a1) == typeid(A))
        puts("Same");
    else
        puts("Different");

    printf("type is %s \n", typeid(B).name());
}

void PrimeNumbersChallenge(int max) {
    if (max < 2) return;

    int count = 0;
    int primeNumbers[25] = {};
    for (int i = 2; i <= max; i++) {
        bool isDivisibleByOthers = false;
        for (int z = (i - 1); z > 1; z--) {
            //auto mod = i % z;
            //printf("%d modulus %d is %d \n", i, z, (i % z));
            if (i % z == 0) {
                isDivisibleByOthers = true;
                break;
            }
        }

        if (!isDivisibleByOthers) {
            primeNumbers[count++] = i;
        }
        if (count == 25) break;
    }

    printf("Prime numbers : %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d \n", 
        primeNumbers[0], primeNumbers[1], primeNumbers[2], primeNumbers[3], primeNumbers[4], primeNumbers[5], primeNumbers[6], primeNumbers[7], 
        primeNumbers[8], primeNumbers[9], primeNumbers[10], primeNumbers[11], primeNumbers[12], primeNumbers[13], primeNumbers[14], primeNumbers[15], 
        primeNumbers[16], primeNumbers[17], primeNumbers[18], primeNumbers[19], primeNumbers[20], primeNumbers[21], primeNumbers[22], primeNumbers[23], primeNumbers[24]);
}

void PrimeNumbersSolution() {
    bool prime_flag = false;    // is it prime?

    // outer loop for prime candidates 2-99
    for (unsigned int candidate = 2; candidate < 100; ++candidate) {

        // test candidate for factors
        prime_flag = true;
        for (unsigned int factor = 2; factor < candidate; ++factor) {
            if (candidate % factor == 0) {
                prime_flag = false;
                break;
            }
        }

        // print it if it's prime
        if (prime_flag) printf("%d ", candidate);
    }

    // end with a newline
    puts("");
}

void NonRecursiveFactorialQ(unsigned long int n) {
    if (n < 2) printf("Factorial of %d is 1. \n", n);

    unsigned long int result = 1;
    for (auto i = 2; i <= n; i++)
        result *= i;
    printf("Factorial of %d is %d. \n", n, result);
}

// useful for std::cout
std::ostream& operator << (std::ostream& o, const Rational& r) {
    return o << r.raw_string();
}

Rational operator + (const Rational& lhs, const Rational& rhs) {
    return Rational(
        (
            lhs.numerator() * rhs.denominator()
            )
        +
        (
            lhs.denominator() * rhs.numerator()
            ),
        lhs.denominator() * rhs.denominator()
    );
}

Rational operator - (const Rational& lhs, const Rational& rhs) {
    Rational a;
    return a.minusOperation(lhs, rhs);
}

void RationalCode() {
    Rational a = 7;        // 7/1
    std::cout << "a is: " << a << std::endl;

    Rational b(25, 15);    // 5/3
    std::cout << "b is: " << b << std::endl;

    Rational c = b;        // copy constructor
    std::cout << "c is: " << c << std::endl;

    Rational d;            // default constructor
    std::cout << "d is: " << d << std::endl;

    d = c;                // assignment operator
    std::cout << "d is: " << d << std::endl;

    Rational& e = d;     // reference
    d = e;                // assignment to self!
    std::cout << "e is: " << e << std::endl;

    std::cout << std::endl;
    std::cout << "d is " << d.string() << std::endl;

    std::cout << std::endl;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;

    std::cout << 14 << " + " << a << " = " << 14 + a << std::endl;

    std::cout << 20 << " + " << a << " = " << 20 + a << std::endl;
    std::cout << 20 << " - " << a << " = " << 20 - a << std::endl;
    //std::cout << 20 << " * " << a << " = " << 20 * a << std::endl;
    //std::cout << 20 << " / " << a << " = " << 20 / a << std::endl;
}

template <typename T>
T maxof(T a, T b) {
    return (a > b ? a : b);
}

template <typename T>
T Factorial(T n) {
    T rc = n;
    while (n > 1)
        rc *= --n;
    return rc;
}

void TemplateFunctions() {
    std::cout << maxof(7, 9) << std::endl;
    std::cout << maxof<std::string>("bbb", "aaa") << std::endl;
}

void StandardFileIO() {
    constexpr int maxstring = 1024; //read buffer size
    constexpr int repeat = 5;
    const char * fn = "testfile.txt";   //file name
    const char* str = "This is a literal c-string. \n";

    //Create/Write the file
    puts("Writing file");
    FILE* fw = fopen(fn, "w");
    for (int i = 0; i < repeat; i++) {
        fputs(str, fw);
    }

    fclose(fw);
    puts("done");

    //Read the file
    puts("reading file");
    char buf[maxstring];
    FILE* fr = fopen(fn, "r");
    while (fgets(buf, maxstring, fr)) {
        fputs(buf, stdout);
    }

    fclose(fr);
    remove(fn);
    puts("done");
}

constexpr size_t maxlen = 127;
struct s1 {
    uint8_t num;
    uint8_t len;
    char s[maxlen + 1];
};
void BinaryFileIO() {
    const char* fn = "test.file";            // file name
    const char* str = "This is a literal C-string.";

    // create/write the file
    puts("writing file");
    FILE* fw = fopen(fn, "wb");

    static s1 buf1;
    for (int i = 0; i < 5; i++) {
        buf1.num = i;
        buf1.len = (uint8_t)strlen(str);
        if (buf1.len > maxlen) buf1.len = maxlen;
        strncpy(buf1.s, str, maxlen);
        buf1.s[buf1.len] = 0; // make sure it's terminated
        fwrite(&buf1, sizeof(s1), 1, fw);
    }

    fclose(fw);
    puts("done.");

    // read the file
    puts("reading file");
    FILE* fr = fopen(fn, "rb");
    static s1 buf2;
    size_t rc;
    while ((rc = fread(&buf2, sizeof(s1), 1, fr))) {
        printf("a: %d, b: %d, s: %s\n", buf2.num, buf2.len, buf2.s);
    }

    fclose(fr);
    remove(fn);

    puts("done.");
}

void UnFormattedIO() {
    const int bufsize = 256;
    static char buf[bufsize];
    fputs("prompt: ", stdout);
    fgets(buf, bufsize, stdin);
    puts("output:");
    fputs(buf, stdout);
    fflush(stdout);
}

void FormattedIO() {
    int i = 5;
    long int li = 1234567890L;
    const char * s = "This is a c string.";
    //%d -> Integer
    //%f -> Float
    //%s -> C-string
    //%c -> Char
    //%p -> Pointer
    //%% -> The % Character
    printf("i is %d, li is %ld, s is %s \n", i, li, s);
    printf("i is %4d, li is %ld, s is %s \n", i, li, s);
    printf("i is %-4d, li is %ld, s is %s \n", i, li, s);
    printf("i is %04d, li is %ld, s is %s \n", i, li, s);
    fprintf(stdout, "pointer is %p, sizeof is %zd\n", s, sizeof(s));
}
