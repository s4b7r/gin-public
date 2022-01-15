
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265
#define AE (unsigned char)142 
#define ae (unsigned char)132
#define OE (unsigned char)153
#define oe (unsigned char)148
#define UE (unsigned char)154
#define ue (unsigned char)129
#define ss (unsigned char)225

void cosinus_funktion(double x[], double y[], int breitefenster)

{

	double a1;
	int i = 0;
	printf("Bitte geben Sie die zahl f%cr a ein:", ue);
	scanf_s("%lf", &a1);

	for (i = 0; i < breitefenster; i++)
	{


		y[i] = cos((x[i] + a1) * PI / 180)/2+.5;
		//printf("Ausgabe Array %d.: %f\n", i + 1, y[i]);
	}


}
/*
double main()
{

	double g[120];
	double V[120];
	int breite_fenster = 120;

	cosinus_funktion(g, V, breite_fenster);
	system("pause");
}
*/
