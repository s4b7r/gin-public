// Taschenrechner.cpp : Diese Datei enth�lt die Funktion "main". Hier beginnt und endet die Ausf�hrung des Programms.
//

#define _CRT_SECURE_NO_WARNINGS // erlaubt scanf() statt scanf_s()
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;
	//int a;
	char a;


	printf("Gib eine Zahl ein");
	scanf_s("%d", &x);
	printf("Gib eine Zahl ein");
	scanf_s("%d", &y);

	printf("Gib ein Zeichen ein (+ / -)");
	//scanf("%d", &a);
	scanf(" %c", &a);
	// Die exakten Details warum es genau so (mit Leerzeichen for %c) funktioniert,
	// sind ohne weitere technische Details sehr schwierig nachzuvollziehen
	// und sprengen unseren Rahmen. 
	// Folgende Zeile kann auch etwas helfen, um ein wenig damit herumzuspielen.
	printf("%c %d\n", a, a);
	// Im Rahmen unserer Veranstaltung ist es empfehlenswert auf die Eingabe von Texten möglichst zu verzichten
	// oder "mal mit den Leerzeichen vor- oder nachgestellt herumzuspielen".

	//a = '+'; // um zu testen einfach mal die tats�chliche Eingabe (scanf) weglassen und die Eingabe fest eingeben

	/*
	// Was "sieht" der Compiler in if("a==+") :
	char b[5] = "a==+";
	for (int i = 0; i < 5; i++)printf("%d\t", (int)(b[i]));
	*/

	if (a == '+')
	//if (a == 1)
	{
		z = x + y;
		printf("Ergebnis ist; %d", z);
	}
	else if (a == '-')
	//else if (a == 2)
	{
		z = x - y;
		printf("Ergebnis ist; %d", z);
	}
}

// Programm ausf�hren: STRG+F5 oder Men�eintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Men� "Debuggen starten"

// Tipps f�r den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzuf�gen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzuf�gen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzuf�gen", um dem Projekt vorhandene Codedateien hinzuzuf�gen.
//   6. Um dieses Projekt sp�ter erneut zu �ffnen, wechseln Sie zu "Datei" > "�ffnen" > "Projekt", und w�hlen Sie die SLN-Datei aus.
