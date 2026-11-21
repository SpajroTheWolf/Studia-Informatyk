#include <stdio.h>

int main(void)
{
    double a;
    double b;

    printf("Podaj pierwsza liczbe: ");
    if (scanf("%lf", &a) != 1) {
        fprintf(stderr, "Niepoprawna pierwsza liczba.\n");
        return 1;
    }

    printf("Podaj druga liczbe: ");
    if (scanf("%lf", &b) != 1) {
        fprintf(stderr, "Niepoprawna druga liczba.\n");
        return 1;
    }

    if (a > b) {
        printf("Wieksza liczba to: %g\n", a);
    } else if (b > a) {
        printf("Wieksza liczba to: %g\n", b);
    } else {
        printf("Liczby sa rowne.\n");
    }

    return 0;
}
