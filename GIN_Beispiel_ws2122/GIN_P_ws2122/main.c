#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include "calculation.h"
#include "plot.h"
#include <stdlib.h>

int main(int argc, char** argv)
{
	int x1, x2;
	printf("Grenzen festlegen:");
	printf("\nUnterer Grenzwert? ");
	scanf("%d", &x1);
	printf("\nOberer Grenzwert? ");
	scanf("%d", &x2);
	int Spalten;
	printf("\nSpalten im Fenster? ");
	scanf("%d", &Spalten);
	int Zeilen;
	printf("\nZeilen im Fenster ");
	scanf("%d", &Zeilen);

	float Abstand;
	float x1f, x2f, Spalten_f;
	x1f = x1;
	x2f = x2;
	Spalten_f = Spalten;
	Abstand = abstand(&x1f, &x2f, &Spalten_f);

	double yWerte[500];
	gerade(x1, x2, Abstand, yWerte);

	char plotdata[5000];
	plotstring(plotdata, yWerte, &x1, &x2, &Abstand, &Spalten, &Zeilen);


	printf("%s", plotdata);

	system("pause");

	return 0;
}