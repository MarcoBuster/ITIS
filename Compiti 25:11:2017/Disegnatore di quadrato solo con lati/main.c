/*
 *  Data la dimensione del lato, disegnare un quadrato a schermo
 *  mettendo dove sui lati i caratteri "*"
 *  Input: lato x
 *  Output: quadrato disegnato con lato x
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

int main() {
    int x;
    int i, h;
    printf("Inserisci le dimensioni del lato del quadrato: ");
    scanf("%d", &x);

    for (i=0; i < x; i++) {
        for (h=0; h < x; h++) {
            if ((h == 0 || h == (x - 1)) || (i == 0 || i == (x - 1))) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}