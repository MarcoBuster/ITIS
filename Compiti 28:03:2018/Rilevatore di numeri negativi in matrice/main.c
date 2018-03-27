/*
 *  Data e popolata una matrice di interi 10x10,
 *  stampare in quali righe e colonne sono presenti solo valori negativi
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrice[10][10];
    int i, k;
    bool negativo;

    printf("Rilevatore di numeri negativi in matrice 10x10\n");
    for (i=0; i<10; i++) {
        for (k=0; k<10; k++) {
            printf("[%d/%d] Inserisci numero: ", i, k);
            scanf("%d", &matrice[i][k]);
        }
    }

    for (i=0; i<10; i++) {
        for (k=0, negativo=true; k<10; k++) {
            if (matrice[i][k] > 0 && negativo) {
                negativo = false;
            }
        }
        if (negativo) {
            printf("Nella riga %d tutti i valori sono negativi!", i);
        }
    }
    for (i=0; i<10; i++) {
        for (k=0, negativo=true; k<10; k++) {
            if (matrice[k][i] > 0 && negativo) {
                negativo = false;
            }
        }
        if (negativo) {
            printf("Nella colonna %d tutti i valori sono negativi!", i);
        }
    }
    return 0;
}