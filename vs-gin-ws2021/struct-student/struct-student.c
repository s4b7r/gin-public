/*
#include<stdio.h>

int wert() {
    int zahl = 1;
    return zahl;
}

void main() {
    int x;
    x = wert();
    printf("%d", x);
    system("pause");
}
*/

//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "student.h"

void datenausgabe(struct student);


int main() {

    
    struct student student1;
    student1 = peter_anlegen();
    
    struct student student2;
    student2 = lukas_anlegen();

    struct student student3;
    student3 = student_anlegen();
    
    datenausgabe(student1);
    datenausgabe(student2);
    datenausgabe(student3);

    system("pause");
    return 0;
}

void datenausgabe(struct student student)
{
    printf("student %s mit der Matrikelnummer %d hat sich %d in %s eingeschreiben.\n",
        student.name,
        student.Matrikelnummer,
        student.Jahr,
        student.Studiengang);
}

//