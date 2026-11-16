#include <stdio.h>

int main()
{
    int A[3][3];
    int B[3][3];
    int wynik[3][3] = {0};

    FILE *fin = fopen("wejscie.txt", "r");
    if (fin == NULL) {
        fprintf(stderr, "Nie mozna otworzyc pliku wejsciowego.\n");
        return 1;
    }

    for (int wiersz = 0; wiersz < 3; wiersz++) {
        for (int kolumna = 0; kolumna < 3; kolumna++) {
            if (fscanf(fin, "%d", &A[wiersz][kolumna]) != 1) {
                fprintf(stderr, "Nieprawidlowe dane macierzy A.\n");
                fclose(fin);
                return 1;
            }
        }
    }

    for (int wiersz = 0; wiersz < 3; wiersz++) {
        for (int kolumna = 0; kolumna < 3; kolumna++) {
            if (fscanf(fin, "%d", &B[wiersz][kolumna]) != 1) {
                fprintf(stderr, "Nieprawidlowe dane macierzy B.\n");
                fclose(fin);
                return 1;
            }
        }
    }
    if (fclose(fin) != 0) {
        fprintf(stderr, "Blad zamykania pliku wejsciowego.\n");
        return 1;
    }

    for (int wiersz = 0; wiersz < 3; wiersz++) {
        for (int kolumna = 0; kolumna < 3; kolumna++) {
            for (int indeks = 0; indeks < 3; indeks++) {
                wynik[wiersz][kolumna] +=
                    A[wiersz][indeks] * B[indeks][kolumna];
            }
        }
    }

    FILE *fout = fopen("wynik.txt", "w");
    if (fout == NULL) {
        fprintf(stderr, "Nie mozna utworzyc pliku wynikowego.\n");
        return 1;
    }

    for (int wiersz = 0; wiersz < 3; wiersz++) {
        for (int kolumna = 0; kolumna < 3; kolumna++) {
            if (fprintf(fout, "%d ", wynik[wiersz][kolumna]) < 0) {
                fprintf(stderr, "Blad zapisu do pliku wynikowego.\n");
                fclose(fout);
                return 1;
            }
        }
        if (fprintf(fout, "\n") < 0) {
            fprintf(stderr, "Blad zapisu do pliku wynikowego.\n");
            fclose(fout);
            return 1;
        }
    }

    if (fclose(fout) != 0) {
        fprintf(stderr, "Blad zamykania pliku wynikowego.\n");
        return 1;
    }

    return 0;
}
