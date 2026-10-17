#include <string.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct  {
    char name [30];
    int age;
    int *grades;
    int numGrades;
}Student;

Student *  createStudent (char * name,int age) {
    Student * s = (Student* ) malloc (sizeof(Student));
    if (s == NULL) {
        return  NULL;
    }
    strcpy(s-> name,name);
    s->age=age;
    return s;
}
void addGrade(Student * s , int grade) {
    s ->grades= (int*) realloc(s -> grades , (s -> numGrades +1)* sizeof(int));
    s -> grades[s -> numGrades] = grade;
    s -> numGrades++;
}

void printInfo(Student *s) {
    printf("name of student =%s and age=%d \n",s-> name,s -> age);
    printf("Grades: ");
    for (int i=0; i< s -> numGrades;i++) {
        printf("%d\t ", s -> grades[i]);
    }
    printf("\n");
}

void freeStudent(Student * s) {
    free(s->grades);
    free(s);

}


int main(int argc, char *argv[]) {
    Student * s = createStudent("omar",25);
    addGrade(s,10);
    addGrade(s,90);
    printInfo(s);

    addGrade (s,100);
    addGrade(s,60);
    printInfo(s);

    freeStudent(s);
    s=NULL;
    
    return 0;
}
