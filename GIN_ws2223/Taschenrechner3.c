// Taschenrechner.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#define _CRT_SECURE_NO_WARNINGS // erlaubt scanf() statt scanf_s()
#include <stdio.h>

int ganzzahl_eingeben() {
	int zahl;
	printf("Ganzzahl eingeben: ");
	scanf("%d", &zahl);
	return zahl;
}

int zeichen_eingeben() {
	char zeichen;
	printf("Operation eingeben: ");
	scanf(" %c", &zeichen);
	return zeichen;
}

void rechnen(int zahl1, int zahl2, char operation) {
	int ergebnis;
	if (operation == '+')
		//if (a == 1)
	{
		ergebnis = zahl1 + zahl2;
		printf("Ergebnis ist: %d", ergebnis);
	}
	else if (operation == '-')
		//else if (a == 2)
	{
		ergebnis = zahl1 - zahl2;
		printf("Ergebnis ist: %d", ergebnis);
	}
}

int main(void)
{
	int x;
	int y;
	char a;

	x = ganzzahl_eingeben();
	y = ganzzahl_eingeben();
	a = zeichen_eingeben();

	rechnen(x, y, a);

}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
