#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"
// implement the methods from person.h
Person* createPerson(char * name , int age) {
    // create a person variable dynamically
    Person* p = (Person *) malloc(sizeof(Person));
    if (p == NULL) {
        perror("person couldn't be created \n");
        return NULL;
    }

    strcpy(p-> name,name);
    p -> age = age;
    return p;
}
void printPerson (Person* p) {
    printf("Name = %s and age =%d \n",p-> name,p -> age);
}
void freePerson(Person *p ) {
    free(p);
}

