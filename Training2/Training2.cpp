#include <cstdio>
#include <cstdint>

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

    printf("\n");
    CharactersEscapeSequence();

    printf("\n");
    ReferencesPrac();

    printf("\n");
    BitFields();

    printf("\n");
    Enumerations();

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