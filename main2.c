// 2
#include <stdio.h>
#include <string.h>
// structs , structs with pointers , functions , typedef union

// structs in C like a class in java or python
// struct is user defined data type of different data types
// for example a person has a name , age , height
struct Person {
    char name [50]; // 50 bytes
    int age; // 4 bytes
    float height; // 4 bytes
};

void printPerson (struct  Person person) {

    printf("name = %s , age =%d and height = %.2f\n",person.name,person.age,person.height);
}
int getAge(struct Person person) {
    return  person.age;
}
float getHeight (struct Person person) {
    return person.height;
}
void changeName (struct Person *person ,char *newName ) {
    strcpy(person->name,newName);
}
void changeAge(struct Person * person , int newAge ) {
    person -> age= newAge;
}
void changeHeight(struct Person * person , float height ) {
    person -> height= height;
}

void addYear(struct Person * person) {
    person -> age  = person -> age + 1;
}

struct Student {
    char name [50];
    int grades [5];
    int numGrades ;
};

char* getName (struct Student s) {
    return s.name;
}
int * getGrades (struct Student s) {
    return s.grades;
}
void printArr(int A [], int size) {
    for (int i=0 ; i< size;i++) {
        printf("%d \t",A[i]);
    }
    printf("\n");
}

void changeGrades ( struct Student* s1, int arr [] , int size ) {
    if  (size  != s1 -> numGrades)
        return;
    for (int i=0 ; i< size; i++ ) {
        s1 -> grades[i] = arr[i];
    }

}

void printStudentInfo(struct Student s) {
    printf("Name = %s ", getName(s));
    printf(", Grades: ");
    printArr(s.grades,s.numGrades);

}

void printStudentsName (struct Student * s, int size) {
    for (int i=0; i< size;i++) {
        printf("%s \t",s[i].name);
    }
    printf("\n");

}

// struct with pointer
struct PersonPointer {
    char * name;
    int age;
};

// findOldest person in the Array
struct Person* findOldest (struct  Person p [],int size ) {
    struct  Person * person = &p [0];
    for (int i = 1 ; i< size ; i++) {
        if (p[i].age > person -> age) {
            person = & p[i];
        }
    }
    return person;
}


int main () {
    // declare a variable of type person
    struct  Person person = { "John",26,175};
    printPerson(person);

    struct Person person2  = {"Bob",22,180};
    printPerson(person2);

    changeName(&person2, "John Doe");
    printPerson(person2);
    changeAge(&person2,23);
    printPerson(person2);
    changeHeight(&person2,178);
    printPerson(person2);

    printf("Size of person2 = %d\n",sizeof(person2));
    addYear(&person2);
    printPerson(person2);

    // struct with Arrays

    struct Student s1 = {"Bob",{90,85,70,75,50},5};
    printf("%s\n",getName(s1));
    int * p =getGrades(s1);
    printArr(p,s1.numGrades);

    // change the Grades
    int  newGrades [] = {99,75,85,60,100};
    changeGrades(&s1,newGrades,5);

    printArr(s1.grades,s1.numGrades);


    // Array of structs
    // Array of Students
    struct Student students [3] = {
        {"Omar",{100,90,99},3},
        {"Bob",{100,70,60,50,90},5},
        {"John Doe ",{10},1}
    };

    // print all names of the students
    printStudentsName(students,3);
    printStudentInfo(s1);

    // struct Pointer
    struct PersonPointer person_pointer;
    person_pointer .name = "Omar";
    person_pointer .age = 26;
    printf("name = %s , age =%d \n",person_pointer.name,person_pointer.age);

    // pointer to a struct
    struct PersonPointer * pointer = & person_pointer;
    printf("name = %s , age =%d \n",pointer -> name,pointer -> age);

    // change the value of the age with the pointer

    pointer -> age = 30 ;
    printf ("age = %d and age with the pointer =%d \n ", person_pointer.age, pointer -> age);

    // array of persons

    struct Person people [3] = {
        {"Alice",25},
        {"Bob",32},
        {"Clara",28}
    };

    struct Person * oldest = findOldest(people,3);
    printf("oldest name = %s and age =%d\n",oldest->name,oldest ->age);





    return 0;
}