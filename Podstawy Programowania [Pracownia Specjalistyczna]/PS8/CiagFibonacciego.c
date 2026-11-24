#include <stdio.h>

int main(void) {
    int n, t1 = 0, t2 = 1, nastepny;

    printf("Podaj liczbę wyrazów ciągu Fibonacciego: ");
    scanf("%d", &n);

    printf("Ciąg Fibonacciego: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nastepny = t1 + t2;
        t1 = t2;
        t2 = nastepny;
    }
    printf("\n");
    return 0;
}
