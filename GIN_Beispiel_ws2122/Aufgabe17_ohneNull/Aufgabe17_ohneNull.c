#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
a)	OKAY den Benutzer zahlen eingeben lässt, solange dieser keine Null eingibt, und
b)	OKAY alle eingegebenen Zahlen multipliziert und
c)	OKAY das Endergebnis ausgibt.
*/

int main(int argc, char **argv) {
	char eingabe[10];
	int eingabe_int;
	int irgendwas = 1;
	while (0 == 0) {
		printf("Bitte Zahl eingeben: ");
		scanf("%s", eingabe);
		if (!strcmp(eingabe, "x")) {
			break;
		}
		eingabe_int = atoi(eingabe);
		if (eingabe_int != 0)
		{
			irgendwas = eingabe_int * irgendwas;

		}
	}
	printf("irgendwas = %d\n", irgendwas);


	system("pause");
	return 0;
}
