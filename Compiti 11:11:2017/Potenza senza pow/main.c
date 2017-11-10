/*
 *  Dato un numero x calcolare la potenza x ^ n senza usare la funzione pow(...)
 *  Input: x, n
 *  Output: x ^ n
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

int main() {
    float x;
    int n;
    double risultato;
    int i;
    printf("Calcolatore di potenza in base n del numero x inserito");

    printf("\nInserisci x: ");
    scanf("%f", &x);
    printf("Inserisci n: ");
    scanf("%d", &n);

    if (n == 0) {
        if (x == 0) {
            printf("Potenza impossibile.");
        }
        else {
            printf("Potenza calcolata: 1");
        }
        return 0;
    }
    for (i=1, risultato=x; i < n; i++) {
        risultato = risultato * x;
    }
    printf("Potenza calcolata: %g", risultato);
    return 0;
}