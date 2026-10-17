#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// struct Person
// Person has a name and an age
typedef  struct {
    char name [30];
    int age;
} Person;

Person * createPerson (char * name,int age) {
    // if name Null print an Error
    if (name == NULL) {
        fprintf(stderr,"name is NULL\n");
        return NULL;
    }
    Person * person = (Person*) malloc(sizeof(Person));
    if (person == NULL) {
        fprintf(stderr,"Allocation Error\n");
        return NULL;
    }
    strcpy(person -> name,name);
    person -> age=age;
    return person;
}
void printInfo(Person *person) {
    printf("Name = %s and age =%d\n",person -> name,person -> age);

}
int main(int argc, char *argv[]) {

    Person *p =createPerson("Alice",25);
    if (p == NULL) {
        fprintf(stderr,"Failed to create a person \n");
        return 1;
    }
    printInfo(p);

    // other Test
    p = createPerson(NULL,25);
    if (p == NULL) {
        fprintf(stderr,"Failed to create a person \n");
        return 1;
    }

    // free the person

    free (p);
    p=NULL;


    return 0;


}
