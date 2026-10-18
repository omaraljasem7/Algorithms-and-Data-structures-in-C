#include <stdio.h>
#include "mathutils.h"
#include "person.h"

int main(void) {
    printf("Hello, World!\n");
    // printf("add = %d\n",add(3,5));
    Person* person = createPerson("Omar",25);
    printPerson(person);
    freePerson(person);


    // if you you want to the run the file  -> in CMakeLists.txt
    // add_executable(projectname  main.c person.c)
    // if you want to run only the math functions from mathutils.h
    // add_executable(projectname main.c mathutils.c)
    // for person.c  -> add_executable (projectname main.c person.c)
    return 0;
}
