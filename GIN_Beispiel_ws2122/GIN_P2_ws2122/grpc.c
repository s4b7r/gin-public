#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "grpa.h"
#include "grpb.h"

float main()
{
	int breite_fenster;
	double x_links;
	double x_rechts;
	double x[112];

	printf("Bitte geben Sie die Breite des Fensters an: \n");
	scanf_s("%d", &breite_fenster);
	printf("Bitte geben den linken X-Wert an: \n");
	scanf_s("%lf", &x_links);
	printf("Bitte geben den rechten X-Wert an: \n");
	scanf_s("%lf", &x_rechts);


	welche_x(breite_fenster, x_links, x_rechts, x);

	double y[112];

	cosinus_funktion(x, y, breite_fenster);

	int hoehe_fenster;
	double y_unten;
	double y_oben;
	char plotstring[1000];

	printf("Bitte geben Sie die Hoehe des Fensters an: \n");
	scanf_s("%d", &hoehe_fenster);
	printf("Bitte geben den unteren Y-Wert an: \n");
	scanf_s("%lf", &y_unten);
	printf("Bitte geben den oberen Y-Wert an: \n");
	scanf_s("%lf", &y_oben);

	erzeuge_plotstring(breite_fenster, x_links, x_rechts, x, hoehe_fenster, y_unten, y_oben, y, plotstring);

	printf("Ergebnis: %s", plotstring);

	system("pause");
	return 0;
}
