#include <stdio.h>

/*
 *  Maggiore fra due numeri naturali
 *  Input: i due numeri naturali
 *  Output: x è più alto di y
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

int main() {
    // Parte dichiarativa, dichiaro le variabili x e y
    int x, y;

    // Input: chiedo le variabili x e y
    printf("Calcolo del numero maggiore fra due numeri\n");

    printf("Inserisci il primo numero: ");
    scanf("%d", &x);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &y);

    // Parte esecutiva
    if (x > y) {
        printf("%d è più alto di %d", x, y);
    }
    else if (x == y) {
        printf("%d è uguale a %d", x, y);
    }
    else {
        printf("%d è più alto di %d", y, x);
    }
    return 0;
}