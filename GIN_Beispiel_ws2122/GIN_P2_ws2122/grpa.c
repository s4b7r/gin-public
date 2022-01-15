#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "grpa.h"
#include "plot.h"

void welche_x(int breite_fenster, double x_links, double x_rechts, double x[])
{
	double pixel = 0;
	int n = 1;

	pixel = (x_rechts - x_links) / breite_fenster;


	for (int i = 0; i < breite_fenster - 1; i++)
	{
		x[i] = (n * pixel) + x_links;
		n++;
		//printf("welche_x(): %f %f %f\n", pixel, x[3], x_rechts);
	}
}

void erzeuge_plotstring(int breite_fenster, double x_links, double x_rechts,
	double x[], int hoehe_fenster, double y_unten, double y_oben, double y[], char plotstring[]) {

	float abstand = (x_rechts - x_links) / breite_fenster;
	int xl = x_links;
	int xr = x_rechts;
	
	erzeuge_plotstring_intern(plotstring, y, &xl, &xr,
		&abstand, &breite_fenster, &hoehe_fenster);

}
