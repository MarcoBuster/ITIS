/*
 *  Data la dimensione del lato, disegnare un
 *  triangolo rettangolo isoscele con dei numeri in progressione
 *  Input: lato x
 *  Output: triangolo rettangolo isoscele disegnato con lato x
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

int main() {
    int x;
    int i, h, n=0;
    printf("Inserisci le dimensioni del lato del triangolo rettangolo isoscele: ");
    scanf("%d", &x);

    for (i=0; i < x; i++) {
        for (h=0; h < x; h++) {
            if (h <= i) {
                n++;
                printf("%d ", n);
            }
        }
        printf("\n");
    }
    return 0;
}