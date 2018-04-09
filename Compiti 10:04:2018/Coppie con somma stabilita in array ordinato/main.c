/*
 *  Dato un array ordinato e un numero somma,
 *  controllare quali coppie cui somma è uguale al numero somma inserito.
 *  Esempio:
 *  [1, 2, 4, 9], somma=8. Nessuna corrispondenza trovata
 *  [1, 2, 4, 4], somma=8. Coppia 4 e 4 trovata.
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

const int ARRAY_SIZE = 4;

int main() {
    int input[ARRAY_SIZE], somma;
    int i;
    int high, low;

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("Inserisci valore [%d/%d]: ", i+1, ARRAY_SIZE);
        scanf("%d", &input[i]);
    }

    printf("Inserisci somma da cercare: ");
    scanf("%d", &somma);

    for (i=0, high=ARRAY_SIZE-1, low=0; i<ARRAY_SIZE && high != low; i++) {
        if (input[low] + input[high] == somma)
            printf("\nCoppia %d e %d", input[low], input[high]), high--;
        if (input[low] + input[high] > somma)
            high--;
        if (input[low] + input[high] < somma)
            low++;
    }
    return 0;
}