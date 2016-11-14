/*
clang -Wall
*/

#include <stdio.h>

//   // This is a mistake similar to "Making Embedded Systems", Chapter 2, p.26
//   struct {
//       int a;
//       int b;
//   } StructObj;                   //--NB: StructObj is a variable of type struct{int a; int b;};
//   static struct StructObj s1;

struct Struct {                 //--NB: standard definition of C struct, to use: struct Struct s1;
    int a;
    int b;
};

static struct Struct s2;

typedef struct {                //--NB: typedef struct
    int a;
    int b;
} StructType;                   // StructType is a type here, cf. typedef int Int_t

static StructType s3;           //--NB: no keyword 'struct' in this declaration

int main() {
    printf("Hello C!\n");

    s2.a = 1;
    s2.b = 2;
    printf("s2.a + s2.b = %d\n", s2.a+s2.b);

    s3.a = 1;
    s3.b = 2;
    printf("s3.a + s3.b = %d\n", s3.a+s3.b);

    return 0;
}
