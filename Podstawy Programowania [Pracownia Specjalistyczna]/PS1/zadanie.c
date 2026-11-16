#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     int a;
     int b;
     int wynik_1;
     int wynik_2;
     int wynik_3;
     int wynik_4;
     int wynik_5;

    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    wynik_1 = pow(a+b, 2);
    wynik_2 = pow(a-b, 2);
    wynik_3 = pow(a, 2) - pow(b, 2);
    wynik_4 = pow(a, 3) - pow(b, 3);
    wynik_5 = pow(a, 3) + pow(b, 3);
    printf("Wynik (a+b)^2: %d \n", wynik_1);
    printf("Wynik (a-b)^2: %d \n", wynik_2);
    printf("Wynik a^2 - b^2: %d \n", wynik_3);
    printf("Wynik a^3 - b^3: %d \n", wynik_4);
    printf("Wynik a^3 + b^3: %d \n", wynik_5);

    return 0;
}
