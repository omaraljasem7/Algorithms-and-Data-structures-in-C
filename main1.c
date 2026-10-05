//
// Created by omar on 05.10.26.
//
// structures in C
#include<stdio.h>

struct Rectangle {
    int length;
    int breadth;
// area function

};

// struct for a complex number a+bi
// a is the real part , b is the imaginary part
struct complex {
    int real;
    int img;

};
struct student {
    int roll ;
    char name [25];
    char dept [25];
    char address [25];
};

// playing cards
// card has a fact , 13 faces , we will define them in terms of code from 1 to 13
// shape , we do 4 shapes Spades , Diamonds, Hearts and Clubs 0 for clubs , 1 spades , 2 for diamonds 3 for hearts
// Colors , 0 for red and 1 for black
struct Card {
    int face;
    int shape;
    int color;
};
int main(int argc, char *argv[]) {
    printf("Hello World!\n");
    struct Rectangle r;
    r.length= 5;
    r.breadth= 10;
    printf("size of rectangle %d\n",sizeof(r));
    printf("length of rectangle %d\n", sizeof(r.length));
    printf("breadth of rectangle %d\n", sizeof(r.breadth));

    // init + decl
    struct Rectangle r2={2,5};
    printf("size of rectangle %d\n",sizeof(r2));
    printf("length of rectangle %d\n", r2.length);
    printf("breadth of rectangle %d\n", r2.breadth);

    // change the values of length and breadth
    r2.length=10;
    r2.breadth=20;
    printf("length of rectangle %d\n", r2.length);
    printf("breadth of rectangle %d\n", r2.breadth);

    struct complex myNumber={2,-1}; // 2+(-1)i = 2-i

    // variable of the student struct
    struct student s ={12345,"omar","CS",'test street 1'};
    printf("%d ", s.roll);
    printf("%s ", s.name);
    printf("%s ", s.dept);
    printf("%s ", s.address);
    printf("\n");

    printf("size of the student structrue %d \n", sizeof(s)); // 4+ 25+25+25 =80
    printf(".......\n");
    // Define a  deck of cards , a deck of 3 cards
    struct Card deck [3] = {{1,1,0},{2,3,0},{10,1,1}};
    for (int i = 0; i<3 ;i++) {
        printf("face= %d , shape=%d ,color=%d \n",deck[i].face,deck[i].color,deck[i].shape);
    }
    struct Card c1;
    c1.face = 13;c1.shape=3;c1.color=1;
    

    return 0;
}
