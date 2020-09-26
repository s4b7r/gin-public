#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char **argv) {
    int nice_name;
    scanf("%d", &nice_name); // Adresse /-operator
    printf("Hello World No. %d\n", nice_name);
    return 0;
}

