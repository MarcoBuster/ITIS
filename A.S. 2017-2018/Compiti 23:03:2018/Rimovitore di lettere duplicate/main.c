/*
 *  Data una stringa, eliminare tutte le lettere ripetute in essa.
 *  Esempio:
 *  ATTENZIONE AL TRAFFICO -> ATENZIO LRFC
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input[100], output[100];
    char visti[100];
    int i, k, m=0, n=0;
    bool trovato;

    printf("Rimovitore di lettere duplicate");
    printf("\nInserisci stringa: ");
    gets(input);

    for (i=0; i<strlen(input); i++) {
        for (k=0, trovato=false; k<n && !trovato; k++) {
            if (input[i] == visti[k]) {
                trovato = true;
            }
        }
        if (!trovato) {
            output[m] = input[i];
            visti[n] = input[i];
            m++, n++;
        }
    }

    puts(output);
    return 0;
}