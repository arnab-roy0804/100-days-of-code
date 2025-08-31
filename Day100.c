#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    FAIL,
    PASS
} GradeStatus;

typedef struct {
    int id;
    char name[50];
    float score;
    GradeStatus status;
} Student;

int main() {
    Student *s = (Student *)malloc(sizeof(Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    s->id = 101;
    strcpy(s->name, "Arnab");
    s->score = 85.0;
    s->status = (s->score >= 40.0) ? PASS : FAIL;

    printf("Student Details:\n");
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Score: %.2f\n", s->score);
    printf("Status: %s\n", (s->status == PASS) ? "PASS" : "FAIL");

    free(s);
    return 0;
}


