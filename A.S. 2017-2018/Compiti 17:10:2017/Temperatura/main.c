/*
 *  Data la temperatura in input, stampare "caldo", "freddo", "molto freddo", ecc...
 *  Input: temperatura
 *  Output: valore umano della temperatura
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

int main() {
    int t;
    printf("Rilevatore di temperatura\n");

    printf("Inserisci la temperatura: ");
    scanf("%d", &t);

    if (t >= 30) {
        printf("Fa molto caldo");
    }
    else if (t >= 20 && t < 30) {
        printf("Fa caldo");
    }
    else if (t >= 10 && t < 20) {
        printf("Temperatura ideale");
    }
    else if (t < 10) {
        printf("Fa freddo");
    }
    return 0;
}