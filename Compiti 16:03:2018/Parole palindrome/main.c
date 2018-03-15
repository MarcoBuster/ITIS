/*
 *  Data una stringa, stabilire se è palindroma o no
 *  Esempio:
 *  Ciao mondo -> non palindroma
 *  itopinonavevanonipoti -> palindroma
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main() {
    char input[100];
    int i;
    bool palindroma = true;

    printf("Rilevatore di frase palindroma");
    printf("\nInserisci frase: ");
    gets(input);
    int len = (int) strlen(input);

    for (i=0; i<len; i++) {
        if (len % 2 == 1 && i == len / 2) {
            continue;
        }
        if (input[i] != input[len-i-1]) {
            palindroma = false;
        }
    }

    if (palindroma) {
        printf("La frase è palindroma");
    }
    else {
        printf("La frase non è palindroma");
    }
    return 0;
}
