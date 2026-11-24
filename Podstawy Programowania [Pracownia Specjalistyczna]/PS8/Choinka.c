#include <stdio.h>


int main(void) {
    int poziomy;
    printf("Podaj ilość poziomów choinki: ");
    scanf("%d", &poziomy);

    for (int i = 1; i <= poziomy; i++) {
        for (int j = 1; j <= poziomy - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
