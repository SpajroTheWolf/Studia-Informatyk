#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int main() {
	int liczby[MAX_SIZE];
	int ilosc_liczb;
	int najwieksza;

	printf("Podaj ilość liczb (1-%d): ", MAX_SIZE);
	if (scanf("%d", &ilosc_liczb) != 1 || ilosc_liczb < 1 || ilosc_liczb > MAX_SIZE) {
		printf("Nieprawidlowa ilość liczb.\n");
		return 1;
	}

	for (int i = 0; i < ilosc_liczb; i++) {
		printf("Podaj liczbe %d: ", i + 1);
		if (scanf("%d", &liczby[i]) != 1) {
			printf("Nieprawidlowa wartość.\n");
			return 1;
		}
	}

	najwieksza = liczby[0];
	for (int i = 1; i < ilosc_liczb; i++) {
		if (liczby[i] > najwieksza) {
			najwieksza = liczby[i];
		}
	}

	printf("Największa liczba: %d\n", najwieksza);
	getchar();
	fflush(stdin);
	getchar();
	return 0;
}