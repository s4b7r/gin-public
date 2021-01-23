#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"

struct student peter_anlegen() {
    struct student student;
    strcpy(student.name, "Peter");
    student.Matrikelnummer = 1234567;
    student.Jahr = 2020;
    strcpy(student.Studiengang, "Maschinenbau");
    return student;
}

struct student lukas_anlegen() {
    struct student student;
    strcpy(student.name, "Lukas");
    student.Matrikelnummer = 1238975;
    student.Jahr = 2019;
    strcpy(student.Studiengang, "BWL");
    return student;
}

struct student student_anlegen() {
    struct student student;
    scanf("%s", student.name);
    scanf("%d", &(student.Matrikelnummer));
    student.Jahr = 2019;
    strcpy(student.Studiengang, "BWL");
    return student;
}