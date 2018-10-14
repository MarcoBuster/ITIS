/*
 *  Scrivere una funzione che dato un array di interi ed un intero, lo cerchi nell'array.
 *  Se trovato, la funzione deve ritornare l'indice dell'elemento, altrimenti -1.
 *  Input: array[size], valore da cercare
 *  Output: indice del valore da cercare o -1 se non trovato
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

const int ARRAY_SIZE = 5;

int searchInArray(int array[ARRAY_SIZE], int value);

int main() {
    int input[ARRAY_SIZE], x;
    int i;
    int result;

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("Inserisci valore [%d/%d]: ", i, ARRAY_SIZE-1);
        scanf("%d", &input[i]);
    }
    printf("Inserisci il valore da cercare: ");
    scanf("%d", &x);
    result = searchInArray(input, x);
    if (result >= 0)
        printf("Indice del valore trovato: %d", result);
    else
        printf("Valore non trovato!");
    return 0;
}

int searchInArray(int array[ARRAY_SIZE], int value) {
    int i;
    for (i=0; i<ARRAY_SIZE; i++)
        if (array[i] == value)
            return i;
    return -1;
}
