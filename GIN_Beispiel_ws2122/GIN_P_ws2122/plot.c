// Gruppe A Aufgaben

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



float abstand(float *x1, float *x2, float *spalten_im_fenster)
{
	return (*x2 - *x1) / *spalten_im_fenster;
}

void plotstring(char plotstring[], double yWerte[], int* x1, int* x2, float* Abstand, int* spalten_im_fenster, int* zeilen_im_fenster)
{	
	int spalten, zeilen;
	spalten = *spalten_im_fenster;
	zeilen = *zeilen_im_fenster;

	/* Struktur fuer einen Plot-Punkt: (1) */
	static struct plotPunkt
	{
		unsigned char fnktNr : 2; /* Nummer der Funktion, zu */
		/* der der Punkt gehoert */
		unsigned char xAchse : 1; /* Punkt gehoert zur X-Achse */
		unsigned char yAchse : 1; /* Punkt gehoert zur Y-Achse */
		unsigned char mehrfachGesetzt : 1;
		/* Falls mehr als eine Funktion auf den Punkt trifft */
	} ausgabeArray[100][200]; /* (2) */
	/* D. h. 17 Zeilen x 53 Spalten */
	
	
	int i;
	int j;
	/*for (i = 0; i < spalten; i++)
		ausgabeArray[zeilen / 2][zeilen].xAchse = 1;
	for (j = 0; j < zeilen; j++)
		ausgabeArray[spalten / 2][spalten].yAchse = 1;
		*/
	/* Achsen in ausgabeArray eintragen: (4) */
	for (i = 0; i < spalten; i++)
		ausgabeArray[zeilen - 1][i].xAchse = 1;
	for (j = 0; j < zeilen; j++)
		ausgabeArray[j][0].yAchse = 1;



	float x, y;
	for (i = 0; i < spalten; i++) {
		x = *x1 + *Abstand * i;
		y = yWerte[i];
		//y = 0 -> j = zeilen-1
		// y = 0.5 -> j = zeilen / 2
		// y = 0.25 -> j = zeilen - 3 * zeilen / 4
		// y = 0.75 -> j = zeilen - zeilen / 4
		//y = 1 -> j = 0
		//j = i/70*28;
		j = (float)zeilen - y * (float)zeilen;
		ausgabeArray[j][i].mehrfachGesetzt = 1;

	}

		
	int aktuelle_position = 0;
	for (j = 0; j < zeilen; j++)
	{
		for (i = 0; i < spalten; i++)
		{
			if (ausgabeArray[j][i].mehrfachGesetzt) plotstring[aktuelle_position] = '*';
			else if (ausgabeArray[j][i].fnktNr == 1) plotstring[aktuelle_position] = 's';
			else if (ausgabeArray[j][i].xAchse) plotstring[aktuelle_position] = '-';
			else if (ausgabeArray[j][i].yAchse) plotstring[aktuelle_position] = '|';
			else plotstring[aktuelle_position] = ' ';
			aktuelle_position++;
		}
		plotstring[aktuelle_position] = '\n';
		aktuelle_position++;
	}
	plotstring[aktuelle_position] = '\0';

}
/*
int main()
{
	float x1, x2, spalten_im_fenster, spalte_abstand;
	scanf("%f", &x1);
	scanf("%f", &x2);
	scanf("%f", &spalten_im_fenster);

	spalte_abstand = abstand(&x1, &x2, &spalten_im_fenster);
	plotstring(&x1, &x2, &spalten_im_fenster, &spalte_abstand);

	printf("Die Spalte ist %f breit.", spalte_abstand);

	return 0;
}
*/