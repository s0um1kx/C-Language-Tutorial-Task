#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

void main() {
    struct student s1 = {1,"a",50};
    struct student s2 = {2,"b",40};

    printf("Info of s1\n");
    printf("%d %s %f\n", s1.rollno, s1.name, s1.marks);
    printf("Info of s2\n");
    printf("%d %s %f", s2.rollno, s2.name, s2.marks);
}