#ifndef _STUDENT_
#define _STUDENT_




struct student {
    char name[30];
    int Matrikelnummer, Jahr;
    char Studiengang[30];
};


struct student peter_anlegen();
struct student lukas_anlegen();
struct student student_anlegen();

#endif // _STUDENT_