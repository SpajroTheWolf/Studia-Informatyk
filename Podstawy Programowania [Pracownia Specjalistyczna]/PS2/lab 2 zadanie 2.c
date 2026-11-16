#include <stdio.h>

int main() {
    int podana_liczba;

    printf("Podaj liczbe dla tabliczki mnozenia: ");
    scanf("%d", &podana_liczba);

    if (podana_liczba < 1 || podana_liczba > 10) {
        printf("Liczba musi byc z zakresu od 1 do 10.\n");
        return 1;
    }

    printf("Tabliczka mnozenia dla liczby %d:\n", podana_liczba);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", podana_liczba, i, podana_liczba * i);
    }

    return 0;
}
