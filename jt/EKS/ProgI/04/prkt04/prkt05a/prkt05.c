/*
* Jan-Tjorve Sobieski
* Gruppe Dienstag 14:30
* Praktikum Nr. 4
*
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679  

/* Prototypen fuer Aufgaben */
int cubeSurfaceArea(int length);
double circleCircumference(double radius);
void printTri(unsigned int size);
int areCoprime(unsigned int a, unsigned int b);
int ggt(unsigned int a, unsigned int b);
unsigned int binomialCoefficient(unsigned int n, unsigned int k);

/*Aufgaben

/* Aufgabe 1
* berechnet die Oberflaeche eines Wuerfels
* @param length Kantenlaenge des Wuerfels
* @return Oberflaeche
*/

int cubeSurfaceArea(int length) {
	return length * length * length;
}


/* Aufgabe 2
* berechnet den Umfange eines Kreises
* @param radius Radius des Kreises
* @return Umfang des Kreises
*/

double circleCircumference(double radius) {
	return 2 * PI * radius;
}

/* Aufgabe 3
* gibt ein rechtwinkliges Dreieck aus * auf der Konsole aus
* @param size Hoehe des Dreiecks
*/

void printTri(unsigned int size) {
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;

	printf("\n");
	//Sterne malen mit Schleife
	for (i = 0; i < size; i++){
		for (j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
}

/*
* Alternatives Dreieck
*/
//void printTri(unsigned int size) {
//	int i = 0;
//	int j = 0;
//	int x = 0;
//	printf("\n");
//	for (i = 1; i <= size; i++) {
//		printf("*");
//		if (i == size) {
//			for (x = 0; x <= j; x++) {
//				printf("*");
//			}
//			printf("\n");
//			return 0;
//		}
//		for (j = 1; j < i; j++) {
//			printf(" ");
//		}
//
//		printf("*\n");
//		
//		
//	}
//	printf("\n");
//}



/* Aufgabe 4
* Bestimmt ob zwei Zahlen teilerfremd sind
* @param a zu untersuchende Zahl
* @param b zu untersuchende Zahl
* @return 0 falls a und b teilerfremd sind, sonst 1
*/

int areCoprime(unsigned int a, unsigned int b) {
	//Wenn ggt von beiden Zahlen 1 ist, dann sind sie nicht teilerfremd
	if (ggt(a, b) == 1)
		return 1;
	else
		return 0;
}

/* Helper Funktion um GGT zu bestimmen
* bestimmt den ggt einer Zahl
* @param a zu untersuchende Zahl
* @param b zu untersuchende Zahl
* @return rekursiver Funktionsaufruf / nach Rekursion wird der ggt zurueck gegeben
*/

int ggt(unsigned int a, unsigned int b) {
	//Abbruchbedingung
	if (b == 0)
		return a;
	else
		return ggt(b, a%b);    // Magic happens here
}

/* Aufgabe 5
* Berechnet den Binomialkoeffizienten n ueber k 
* WARNUNG! bei grossem n und k steigt Laufzeit stark an!!!!!
* @param n
* @param k
* @return n ueber k
*/

unsigned int binomialCoefficient(unsigned int n, unsigned int k){
	//Abbruchbedingung
	if (n == k || k == 0)
		return 1;
	//rekursiver Aufruf
	return binomialCoefficient(n - 1, k) + binomialCoefficient(n - 1, k - 1);
}


