#include <stdio.h>
#include <string.h>

typedef enum {
    NOT_IDENTICAL,
    IDENTICAL
} CompareResult;

typedef struct {
    int id;
    char name[50];
    float score;
} Student;

CompareResult compareStudents(Student s1, Student s2) {
    if (s1.id == s2.id &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.score == s2.score) {
        return IDENTICAL;
    }
    return NOT_IDENTICAL;
}

int main() {
    Student a = {1, "Arnab", 95.5};
    Student b = {1, "Arnab", 95.5};
    Student c = {2, "Ravi", 88.0};

    if (compareStudents(a, b) == IDENTICAL) {
        printf("Structs a and b are IDENTICAL\n");
    } else {
        printf("Structs a and b are NOT IDENTICAL\n");
    }

    if (compareStudents(a, c) == IDENTICAL) {
        printf("Structs a and c are IDENTICAL\n");
    } else {
        printf("Structs a and c are NOT IDENTICAL\n");
    }

    return 0;
}
