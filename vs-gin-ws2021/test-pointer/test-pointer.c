#include <stdio.h>

void einzahlen(int *konstand, int einzuzahlender_betrag) {
    *konstand += einzuzahlender_betrag;
}

int main(int argc, char **argv) {
    int kontostand = 1000;
    printf("1. %d\n", kontostand);
    einzahlen(&kontostand, 500);
    printf("2. %d\n", kontostand);
    einzahlen(&kontostand, 200);
    printf("3. %d\n", kontostand);
}