#include <stdio.h>
#include <stdlib.h>
// Highest level of programming in the C language
struct Rectangle {
    int length;
    int width ;
};
void init(struct Rectangle* r ,int l,int w) {
    r->length=l;
    r->width=w;
}
int area (struct Rectangle r) {
    return r.length*r.width;
}
void changeLength(struct  Rectangle* r,int l) {
    r -> length= l;
}
void changeWidth(struct  Rectangle* r,int w) {
    r -> width= w;
}
void printRectangle(struct  Rectangle r) {
    printf("length = %d and width = %d\n", r.length,r.width);
}
// call by value will have in the method itself its own copy
// call by address will modify the struct variable itself

int main () {
    struct  Rectangle r ;

    init(&r,10,5);
    printRectangle(r);
    changeLength(&r,20);
    printRectangle(r);
    changeWidth(&r,2);
    printRectangle(r);
    printf("-----------\n");
    printf("please enter the length:\n");
    int length ,width;
    scanf("%d",&length);
    printf("please enter the width:\n");
    scanf("%d",&width);
    init(&r,length,width);
    printRectangle(r);

}
