#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE 5

int main(int argc, char **argv) {
    int zahlen[ARRAY_SIZE];
    int i;

    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("Eingabe %d: ", i);
        scanf("%d", &zahlen[i]);
    }

    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("Doppelt: %d\n", zahlen[i] * 2);
    }
}
