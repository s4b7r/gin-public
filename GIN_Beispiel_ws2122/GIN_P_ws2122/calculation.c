#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "calculation.h"


double gerade(int x1, int x2, float Abstand, double yWerte[]) //untere und obere Grenze Wertebereich
															  //Abstand zwischen zwei Werten
{
	printf("Gerade der Form y=mx+b");

	double m;
	printf("\nWie lautet 'm'? ");
	scanf("%lf", &m);

	double b;
	printf("\nWie lautet 'b'? ");
	scanf("%lf", &b);

	int i = 0;
	double x;
	for (x = x1; x <= x2; x = x + Abstand)
	{
		yWerte[i] = m * x + b, i++;
	}

}
/*
int main(int argc, char** argv)
{
	int x1, x2;
	double Abstand;
	printf("Grenzen festlegen:");
	printf("\nUnterer Grenzwert? ");
	scanf("%d", &x1);
	printf("\nOberer Grenzwert? ");
	scanf("%d", &x2);
	printf("\nx-Wert Abstand: ");
	scanf("%lf", &Abstand);

	double yWerte[500];
	gerade(x1, x2, Abstand, yWerte);

	int i;
	for (i = 0; i < 500; i++)
	{
		printf("\ny%d: %lf", i, yWerte[i]);
	}


	return 0;
}
*/