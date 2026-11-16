#include <stdio.h>

int main() {
	double dochod, podatek;

	printf("Podaj swoj dochod roczny: ");
	scanf("%lf", &dochod);

    if (dochod == 0)
    {
        printf("Dochód nie może być równy 0");
        return 1;
    }
    else if (dochod < 0)
    {
        printf("Dochód nie może być ujemny");
        return 1;
    }

	if (dochod <= 50000) {
		podatek = dochod * 0.10;
	} else if (dochod <= 100000) {
		podatek = dochod * 0.15;
	} else {
		podatek = dochod * 0.20;
	}

	printf("Wysokosc podatku wynosi: %.2lf\n", podatek);

	return 0;
}
