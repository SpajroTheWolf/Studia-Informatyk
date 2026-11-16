#include <stdio.h>

int sumaTablicy(int tablica[], int index, int n)
{
    if (index >= n)
    {
        return 0;
    }

    return tablica[index] + sumaTablicy(tablica, index + 1, n);
}

int main()
{
    int tablica[] = {1, 2, 3, 4, 5};
    int n = 5;
    int suma = sumaTablicy(tablica, 0, n);

    printf("Suma elementow tablicy wynosi: %d\n", suma);

    return 0;
}