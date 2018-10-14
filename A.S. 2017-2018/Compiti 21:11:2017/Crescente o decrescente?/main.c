/*
 *  Data una serie di numeri x1, ..., xn, stabilire se la serie è crescente,
 *  decrescente o né crescente e né decrescente
 *  Input: x1, ..., xn
 *  Output: risultato del controllo
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, precedente=-1;
    bool crescente=true, decrescente=true;
    printf("Crescente o decrescente?\n");

    do {
        printf("Inserisci numero: ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }
        if (precedente == -1) {
            precedente = n;
            continue;
        }
        if (precedente < n && crescente) {
            crescente = true;
            decrescente = false;
        }
        if (precedente > n && decrescente) {
            crescente = false;
            decrescente = true;
        }
        if ((precedente < n && !crescente) || (precedente > n && !decrescente)) {
            crescente = false;
            decrescente = false;
        }
        precedente = n;
     } while (n >= 0);

    if (crescente) printf("I numeri inseriti sono in ordine crescente");
    else if (decrescente) printf("I numeri inseriti sono in ordine decrescente");
    else printf("I numeri inseriti non sono né in ordine crescente né in ordine decrescente");
    return 0;
}