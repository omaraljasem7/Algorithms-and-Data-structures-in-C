#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    // name
    // age
    char name [50];
    int age;
} Person;

void printPerson (Person *p) {
    printf("name = %s and age = %d \n",p -> name, p->age);
}
int main(int argc, char *argv[]) {

    // struct on the Heap
    Person *person = (Person *) malloc (sizeof( Person));

    if ( person == NULL) {
        printf("Allocation failed \n");
        return 1;
    }

    person->age=25;
    strcpy(person->name,"Alice");
    printPerson(person);




    // Array of structs

    int count = 3;
    Person *people = malloc(count*sizeof(Person));
    if (people == NULL) {
        return 1;
    }

    people[0].age=25;
    people[1].age=35;
    people[2].age=20;

    strcpy(people[0].name,"Bob");
    strcpy(people[1].name,"Clara");
    strcpy(people[2].name,"Alice");

    for (int i = 0; i < count ; i++) {
        printf("name =%s,age=%d\n",people[i].name,people[i].age);
    }


    free(person);
    person=NULL;
    free (people);
    people=NULL;

    return 0;
}
