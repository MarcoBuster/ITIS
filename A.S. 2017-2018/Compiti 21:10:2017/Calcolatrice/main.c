/*
 *  Creare una calcolatrice interattiva con le quattro operazioni basilari
 *  Input: elemento del menu e fattori dell'operazione
 *  Output: risultato dell'operazione scelta
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <stdbool.h>

int chiedi_primo_fattore() {
    int x;
    printf("Inserisci il primo fattore\n> ");
    scanf("%d", &x);
    return x;
}

int chiedi_secondo_fattore() {
    int y;
    printf("Inserisci il secondo fattore\n> ");
    scanf("%d", &y);
    return y;
}

void stampa_risultato(float result) {
    printf("Risultato: %g", result);
}

int main() {
    int menu;
    float x, y;
    float result;
    bool esci = false;
    printf("-- Calcolatrice --");

    while (!esci) {
        printf("\n\nCosa vuoi fare?\nScegli un elemento dal menu:");
        printf("\n1. Addizione");
        printf("\n2. Sottrazione");
        printf("\n3. Moltiplicazione");
        printf("\n4. Divisione");
        printf("\n5. Esci");
        printf("\n> ");
        scanf("%d", &menu);

        switch (menu) {
            default:
                printf("Opzione non valida, riprovare.");
                printf("\n\nCosa vuoi fare?\nScegli un elemento dal menu:");
                printf("\n1. Addizione");
                printf("\n2. Sottrazione");
                printf("\n3. Moltiplicazione");
                printf("\n4. Divisione");
                printf("\n5. Esci");
                printf("\n> ");
                scanf("%d", &menu);
                break;

            case 1:  // Addizione
                x = chiedi_primo_fattore();
                y = chiedi_secondo_fattore();
                result = x + y;
                stampa_risultato(result);
                break;

            case 2:  // Sottrazione
                x = chiedi_primo_fattore();
                y = chiedi_secondo_fattore();
                result = x - y;
                stampa_risultato(result);
                break;

            case 3:  // Moltiplicazione
                x = chiedi_primo_fattore();
                y = chiedi_secondo_fattore();
                result = x * y;
                stampa_risultato(result);
                break;

            case 4:  // Divisione
                x = chiedi_primo_fattore();
                y = chiedi_secondo_fattore();
                result = x / y;
                stampa_risultato(result);
                break;

            case 5:  // Esci
                esci = true;
                break;
        }
    }

    printf("Sei uscito dal programma, grazie per averlo utilizzato!");
    return 0;
}