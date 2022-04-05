#include <cstdio>

void TestVSWithExercise();
void StatementsAndExpressions();
void Pointers();
void References();
void PrimitiveArrays();

int main()
{ 
    puts("Hello World!");

    printf("\n");
    TestVSWithExercise();

    printf("\n");
    StatementsAndExpressions();

    printf("\n");
    Pointers();

    printf("\n");
    References();

    printf("\n");
    PrimitiveArrays();

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
