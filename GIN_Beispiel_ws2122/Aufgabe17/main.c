#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
a)	OKAY den Benutzer zahlen eingeben lässt, solange dieser keine Null eingibt, und
b)	OKAY alle eingegebenen Zahlen multipliziert und
c)	OKAY das Endergebnis ausgibt.
*/

int main(int argc, char **argv) {
	int eingabe = 1;
	int irgendwas = 1;
	while (eingabe != 0) {
		printf("Bitte Zahl eingeben: ");
		scanf("%d", &eingabe);
		if ( eingabe != 0)
		{
			irgendwas = eingabe * irgendwas;

		}
	}
	printf("irgendwas = %d\n", irgendwas);


	system("pause");
	return 0;
}
