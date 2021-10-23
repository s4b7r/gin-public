#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num = 12;
	printf("num %d\n\n", num);

	int *pointer;
	pointer = &num;
	printf("num %d\n", num);
	printf("&num %d\n", &num);
	printf("pointer %d\n", pointer);
	printf("*pointer %d\n\n", *pointer);

	//num = 13;
	*pointer = 13;
	printf("num %d\n", num);
	printf("pointer %d\n", pointer);
	printf("*pointer %d\n\n", *pointer);

	system("pause");
}

