/*
 *  Convertitore da decimale a binario
 *  Input: numero in base 10
 *  Output: scomposizione in base 2
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */


#include <stdio.h>

int main() {
    int n;
    int i=0, resto;
    printf("Convertitore da decimale a binario\n");

    printf("Inserisci numero: ");
    scanf("%d", &n);

    do {
        resto = n % 2;
        n /= 2;
        printf("%d (di 2^%d)\n", resto, i);
        i++;
    } while (n >= 1);
    return 0;
}