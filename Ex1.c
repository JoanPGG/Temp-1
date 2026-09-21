#include <stdio.h>

int main() {

	int dia, mes, any;

	printf("Introdueix el dia del teu aniversari: \n");

	scanf_s("%d", &dia);

	printf("Introdueix el mes del teu aniversari: \n");

	scanf_s("%d", &mes);

	printf("Introdueix el any del teu aniversari: \n");

	scanf_s("%d", &any);

	printf("El resultat es: %d + %d + %d = %d", dia, mes, any, dia+mes+any)

}