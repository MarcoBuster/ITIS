#include <stdio.h>

/*
 *  Riordina tre numeri naturali
 *  Input: tre numeri naturali
 *  Output: i tre numeri inseriti ordinati in ordine crescente e decrescente
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

int main() {
    int x, y, z;

    printf("Riordinatore di tre numeri\n");

    printf("Inserisci il primo numero: ");
    scanf("%d", &x);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &y);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &z);

    if (z < x) {
        x = x + z;
        z = x - z;
        x = x - z;
    }
    if (x > y) {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    if (y > z) {
        y = y + z;
        z = y - z;
        y = y - z;
    }

    printf("\n\nNumeri riordinati in ordine crescente: %d %d %d", x, y, z);
    printf("\nNumeri riordinati in ordine decrescente: %d %d %d", z, y, x);
    return 0;
}