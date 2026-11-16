#include <stdio.h>
#include <math.h>

int kalkulator_obwodu_i_pola() {
    int wybor_ksztaltu;

    printf("Wybrano Kalkulator pola i obwodu.\n");
    printf("Wybierz kształt:\n");
    printf("[1] Prostokąt\n");
    printf("[2] Koło\n");
    scanf("%d", &wybor_ksztaltu);

    if (wybor_ksztaltu == 1) {
        printf("Wybrano Prostokąt.\n");
        double a, b;
            while (a <= 0 || b <= 0) {
                printf("Podaj długość boku a: ");
                scanf("%lf", &a);
                printf("Podaj długość boku b: ");
                scanf("%lf", &b);
                if (a <= 0 || b <= 0) {
                    printf("Nieprawidłowe wymiary prostokąta. Długości boków muszą być dodatnie.\n");
                }
            }

            double pole = a * b;
            double obwod = 2 * (a + b);
            printf("Pole prostokąta: %.2f\n", pole);
            printf("Obwód prostokąta: %.2f\n", obwod);
    } else if (wybor_ksztaltu == 2) {
        printf("Wybrano Koło.\n");
        double r;
        while (r <= 0) {
            printf("Podaj promień koła: ");
            scanf("%lf", &r);
            if (r <= 0) {
                printf("Nieprawidłowy promień. Promień musi być dodatni.\n");
            }
        }
        double pole = M_PI * r * r;
        double obwod = 2 * M_PI * r;
        printf("Pole koła: %.2f\n", pole);
        printf("Obwód koła: %.2f\n", obwod);
    } else {
        printf("Nieprawidłowy wybór kształtu.\n");
    }
}

int sprawdzanie_i_analiza_liczby() {
    printf("Wybrano Sprawdzanie i analiza liczby.\n");
    int liczba;
    printf("Podaj liczbę całkowitą: ");
    scanf("%d", &liczba);
    printf("Analiza liczby %d:\n", liczba);

    printf("Analiza parzystości i nieparzystości:\n");
    if (liczba % 2 == 0) {
        printf("Liczba jest parzysta.\n");
    } else {
        printf("Liczba jest nieparzysta.\n");
    }

    printf("Analiza znaku:\n");
    if (liczba > 0) {
        printf("Liczba jest dodatnia.\n");
    } else if (liczba < 0) {
        printf("Liczba jest ujemna.\n");
    } else {
        printf("Liczba jest równa zero.\n");
    }

    if (liczba > 100 && liczba < 500) {
        printf("Liczba znajduje się w przedziale (100, 500).\n");
    } else {
        printf("Liczba nie znajduje się w przedziale (100, 500).\n");
    }
}

int suma_i_srednia_liczb() {
    printf("Wybrano Suma i średnia liczb.\n");

    int liczba;
    int suma = 0;
    int licznik = 0;
    int licznik_ujemnych = 0;

    while (1) {
        printf("Podaj liczbę (0 kończy wprowadzanie): ");
        scanf("%d", &liczba);

        if (liczba == 0) {
            break;
        }

        suma += liczba;
        licznik++;

        if (liczba < 0) {
            licznik_ujemnych++;
        }
    }

    printf("\nWyniki:\n");
    printf("Suma liczb: %d\n", suma);
    printf("Liczba liczb ujemnych: %d\n", licznik_ujemnych);

    if (licznik > 0) {
        double srednia = (double)suma / licznik;
        printf("Średnia liczb: %.2f\n", srednia);
    } else {
        printf("Nie wprowadzono żadnych liczb.\n");
    }

    return 0;
}

int main() {
    int typ_programu;
    printf("Wybierz typ programu:\n");
    printf("[1] Kalkulator pola i obwodu (Rozszerzony o walidację i wybór kształtu)\n");
    printf("[2] Sprawdzanie i analiza liczby (Rozszerzone o przedział i znak)\n");
    printf("[3] Suma i średnia liczb (Rozszerzone o zliczanie ujemnych i pętlę nieskończoną)\n");
    printf("Wybierz opcję (1-3): ");
    scanf("%d", &typ_programu);
    if (typ_programu == 1) {
        kalkulator_obwodu_i_pola();
    } else if (typ_programu == 2) {
        sprawdzanie_i_analiza_liczby();
    } else if (typ_programu == 3) {
        suma_i_srednia_liczb();
    } else {
        printf("Nieprawidłowa opcja. Wybierz liczbę od 1 do 3.\n");
    }
    return 0;
}