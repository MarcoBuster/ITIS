#include <stdio.h>

/*
 *  Esegui la media artimetica di tutti i numeri inseriti dall'utente
 *  fino a quando il numero inserito è maggiore di zero
 *  Input: numeri inseriti dall'utente
 *  Output: media aritmetica di tutti i numeri inseriti
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

int main() {
    float somma = 0, divisore = 0;
    int numero;
    double media;
    printf("Calcolatore media");

    do {
        printf("Inserisci numero: ");
        scanf("%d", &numero);
        somma = somma + numero;
        divisore = divisore + 1;
    } while (numero > 0);

    media = somma / divisore;
    printf("Media calcolata: %g", media);
    return 0;
}