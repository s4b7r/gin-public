#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned char number)
{
    if (number >> 1) {
        print_binary(number >> 1);
    }
    putc((number & 1) ? '1' : '0', stdout);
}

int main()
{
    char i;
    char buffer[33];
    printf("Enter a number: ");
    scanf("%s", buffer);
    i = atoi(buffer);
    printf("%d\n", i);
    print_binary(i);
    return 0;
}
