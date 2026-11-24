#include <math.h>
#include <stdio.h>

int main(void) {
    int liczba, i, czyjest = 0;

    printf("Podaj liczbę całkowitą: ");
    scanf("%d", &liczba);

    if (liczba <= 1) {
        printf("%d nie jest liczbą pierwszą.\n", liczba);
        return 0;
    }

    for (i = 2; i <= sqrt(liczba); i++) {
        if (liczba % i == 0) {
            czyjest = 1;
            break;
        }
    }

    if (czyjest == 0)
        printf("%d jest liczbą pierwszą.\n", liczba);
    else
        printf("%d nie jest liczbą pierwszą.\n", liczba);

    return 0;
}
