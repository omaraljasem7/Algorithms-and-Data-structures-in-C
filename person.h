#ifndef  PERSON_H
#define PERSON_H
typedef struct {
    char name [50];
    int age;
} Person;
// 3 methods
Person* createPerson(char * name , int age);
void printPerson (Person* p);
void freePerson(Person *p );
#endif
