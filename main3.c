//
// Created by omar on 17.10.26.
//
#include <stdio.h>
#include <string.h>
typedef int Integer;
typedef struct Car Car;
typedef struct Calculator Calc;
typedef union Data Data;

struct Person {
    char *name;
    int age;
};

struct Car {
    char *name ;
    char engine [50];
    char fuel_type [10];
};

int add (int a,int b) {
    return a+b;
}

int sub (int a, int b) {
    return a- b;
}
int mul (int a, int b) {
    return a * b;
}
void calcualte (int a ,int b, int (*op)(int ,int)) {
    printf("result =%d\n",op(a,b));
}

struct Calculator {
    int a ;
    int b;
    int (*operation) (int ,int );
};

// Union
union Data {
    int i;
    float f;
    char str [20];
};

typedef struct {
    int type;
    union  {
        int i;
        float f;
        char str [20];
    }value;
}Variant;

// Minimization of padding
typedef  struct  {
    char a ;
    int b ;
    char c;
} Bad;

typedef struct {
    int a;
    char b;
    char c;
} Good;
int main(int argc, char *argv[]) {
    printf("Hello world");
    int x = 100;
    printf("%d\n",x);
    Integer y = 200;
    printf("%d\n",y);

    struct Person person = { "John Doe", 25};
    printf("name  =%s and age =%d\n",person.name,person.age);

    // Now I want to replace  struct Person by Just Person
    Car myCar = {"BMW","BMW C100","D"};
    printf("%s  %s %s \n",myCar.name,myCar.engine,myCar.fuel_type);
    // Function Pointer

    int (*fp) (int ,int )= add;
    int result =fp(2,4);
    printf("result  = %d \n ", result);

    calcualte(2,3,add);
    calcualte(2,3,sub);
    calcualte(2,3,mul);


    Calc calculator = {6,3,mul};
    printf("%d\n",calculator.operation(calculator.a,calculator.b));


    // union
    Data d1;
    d1.f=3.14;
    printf("%f\n",d1.f);

    Data d2 ;

    strcpy(d2.str,"test");
    printf("%s\n",d2.str);

    Variant v;
    v.type=0; // for int =0, float =1, str =2
    v.value.i=3;
    printf("variant type = %d and variant type.i =%d \n", v.type,v.value.i);


    Variant v1 ;
    v1.type=1; // float
    v1.value.f=3.14f;
    printf("variant type = %d and variant type.f =%.2f \n", v.type,v.value.f);

    Bad bad; // size = 12 

    printf("Size of Bad =%lu \n",sizeof(bad));

    // you can minimize the Padding by changing the order of the attributes

    Good good; // size = 8
    printf("Size of Bad =%lu \n",sizeof(good));


    return 0;
}
