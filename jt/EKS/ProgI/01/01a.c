// Aufgabe 3: 40 Punkte
// Entwickeln Sie ein C-Programm, das Angaben in US Pfund (lb) in Kilogramm umwandelt.
// • Bestimmen Sie, welche Daten Ihr Programm verarbeiten muss, welche Berechnungen
// vorgenommen werden müssen und welche C-Datentypen dafür zu wählen
// sind.
// • Entwerfen Sie den Algorithmus und modellieren Sie ihn durch ein Aktivitätsdiagramm.
// • Implementieren und testen Sie das Programm.

#include <stdio.h>

int main(void) {

	char buffer[20];
	int input = 0;


	gets_s(buffer, 20);
	sscanf(buffer, "%lf", &input);
	printf("%lf", input);

	return 0;
}