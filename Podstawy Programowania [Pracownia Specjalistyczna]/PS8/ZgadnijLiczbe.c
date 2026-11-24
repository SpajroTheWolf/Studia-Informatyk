#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int max_ilosc_probow = 7;
    int liczba, zgaduj, proby = 0;
    srand(time(NULL));
    liczba = rand() % 100 + 1;

    printf("Zgadnij liczbę od 1 do 100: ");
    do {
        scanf("%d", &zgaduj);
        proby++;
        if (zgaduj < liczba) {
            printf(">> Za mało! Spróbuj ponownie: ");
        } else if (zgaduj > liczba) {
            printf(">> Za dużo! Spróbuj ponownie: ");
        } else {
            printf(">> Gratulacje! Zgadłeś liczbę %d w %d próbach.\n", liczba, proby);
        }
    } while (zgaduj != liczba && proby < max_ilosc_probow);

    if (proby >= max_ilosc_probow) {
        printf(">> Przekroczyłeś maksymalną liczbę prób. Liczba do zgadnięcia to %d.\n", liczba);
    }

    return 0;
}
