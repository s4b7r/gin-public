#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ausgabe() {
    char a[10];
    a[0] = 'a';
    a[1] = 'b';
    a[2] = '\0';
    printf("ausgabe a = %x\n", a);
    printf("%s\n", a);
}

int main(int argc, char **argv) {
    char a[10];
    char b[10];

    scanf("%s %s", a, b);
    //scanf("%s", b);
    printf("main a = %x\n", a);
    printf("%s %s\n", a, b);

    ausgabe();

    //gets(a);
    //printf("%s\n", a);

    system("pause");
    return 0;
}
