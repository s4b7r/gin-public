#include <stdio.h>

int verdoppeln(int zahl1) {
    zahl1 *= 2;
    printf("In verdoppeln: %d\n", zahl1);
    return zahl1;
}

int main(int argc, char **argv) {
    int zahl2;

    zahl2 = 3;
    zahl2 = verdoppeln(zahl2);
    printf("In main: %d\n", zahl2);
    return 0;
}
