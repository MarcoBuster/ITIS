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
    // Parte dichiarativa: dichiaro le variabili x, y, z e temp
    int x, y, z;
    int temp;  // Variabile di appoggio

    // Input: chiedo le variabili x, y e z
    printf("Riordinatore di tre numeri\n");

    printf("Inserisci il primo numero: ");
    scanf("%d", &x);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &y);

    printf("Inserisci il terzo numero: ");
    scanf("%d", &z);

    /*
     * Parte esecutiva
     * Scambio x, y, z in modo che alla fine abbia come risultato:
     * x < y < z
     *
     * Notare che non sono if-elseif-else ma if-if-if,
     * in questo modo le regole possono essere applicate più volte
     * (come nel caso x < y > z con x > z)
     */
    if (x < y && y > z) {  // Nel caso che x < y > z; scambio y <-> z
        temp = z;
        z = y;
        y = temp;
    }

    if (x > y && y < z) {  // Nel caso che x > y < z; scambio x <-> y
        temp = x;
        x = y;
        y = temp;
    }

    if (x > y && y > z) {  // Nel caso che x > y > z; scambio x <-> z
        temp = x;
        x = z;
        z = temp;
    }

    // Stampo i risultati sia in ordine crescente che in ordine decrescente
    printf("Numeri riordinati in ordine crescente: %d %d %d", x, y, z);
    printf("Numeri riordinati in ordine decrescente: %d %d %d", z, y, x);
    return 0;
}
