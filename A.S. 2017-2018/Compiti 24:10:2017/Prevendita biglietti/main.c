/*
 *  Calcolare la provvigione e il prezzo finale del biglietto
 *  Input: prezzo del biglietto
 *  Output: provvigione (15%) e prezzo finale
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

int main() {
    float prezzo;
    float provvigione, prezzo_finale;
    printf("Prevendita biglietti\n");

    printf("Inserisci il prezzo del biglietto: ");
    scanf("%f", &prezzo);

    provvigione = (prezzo / 100) * 15;
    prezzo_finale = prezzo + provvigione;

    printf("Provvigione: %g€\nPrezzo finale: %g€", provvigione, prezzo_finale);
    return 0;
}