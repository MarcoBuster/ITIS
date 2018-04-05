/*
 *  Data una matrice di dimensioni n*n,
 *  stampare tutti gli elementi seguendo il percorso di una spirale (da in alto a sinistra)
 *  Input:
 *  n = 3
 *  matrice[n][n] = [ 1 2 3 ]
 *                  [ 4 5 6 ]
 *                  [ 7 8 9 ]
 *  Output: 1 2 3 6 9 8 7 4 5
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, k, j;
    int size;
    int direction, step, max_step;
    bool changed;

    printf("Inserisci dimensione della matrice: ");
    scanf("%d", &size);
    int matrix[size][size];
    for (i=0; i<size; i++) {
        for (k=0; k<size; k++) {
            printf("Inserisci numero [%d:%d]: ", i, k);
            scanf("%d", &matrix[i][k]);
        }
    }

    for (j=0, i=0, k=0, direction=0, step=0, max_step=size-1,
                 changed=false; j<size*size; j++) {
        printf("\n[i=%d, k=%d; %d/%d]: %d", i, k, j, size*size, matrix[i][k]);

        if (direction % 4 == 0)
            k++;
        if (direction % 4 == 1)
            i++;
        if (direction % 4 == 2)
            k--;
        if (direction % 4 == 3)
            i--;
        step++;

        if (step == max_step)
            step=-1, direction++, changed=false;
        if ((direction+1) % 2 == 0 && !changed)
            max_step--, changed=true;
    }
    printf("\n");
    return 0;
}