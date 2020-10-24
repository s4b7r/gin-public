#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char **argv) {
    int zahlen[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Eingabe %d: ", i);
        scanf("%d", &zahlen[i]);
    }
    
    for (i = 0; i < 5; i++) {
        printf("Doppelt: %d\n", zahlen[i] * 2);
    }
}
