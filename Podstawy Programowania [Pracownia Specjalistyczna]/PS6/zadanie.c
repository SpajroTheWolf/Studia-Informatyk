#include <stdio.h>

#define MAX_SIZE 10

int main()
{
    int tablica[MAX_SIZE];
    int *poczatek = tablica;
    int *koniec = tablica + MAX_SIZE - 1;

    printf("Podaj %d liczb calkowitych:\n", MAX_SIZE);
    for (int i = 0; i < MAX_SIZE; ++i) {
        printf("Liczba %d: ", i + 1);
        if (scanf("%d", poczatek + i) != 1) {
            fprintf(stderr, "Blad: wprowadzono nieprawidlowa liczbe.\n");
            return 1;
        }
    }

    printf("Liczby w odwrotnej kolejnosci: ");
    for (int *wskaznik = koniec; wskaznik >= poczatek; --wskaznik) {
        printf("%d", *wskaznik);
        if (wskaznik > poczatek) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}