/*
 *  Data la posizione del re bianco e della regina nera
 *  sulla scacchiera 8x8 stabilire se il re è in scacco
 *  Input: coordinate x, y del re e della regina
 *  Output: risultato del controllo
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int re_x, re_y;
    int regina_x, regina_y;
    printf("In scacco oppure no?");

    printf("Inserisci coordinata x del re: ");
    scanf("%d", &re_x);
    printf("Inserisci coordinata y del re: ");
    scanf("%d", &re_y);
    printf("Inserisci coordinata x del regina: ");
    scanf("%d", &regina_x);
    printf("Inserisci coordinata y del regina: ");
    scanf("%d", &regina_y);

    if (re_x == regina_x) {  // Verifica se sono allineati verticalmente
        printf("Il re è in scacco!");
    }
    else if (re_y == regina_y) {  // Verifica se sono allineati orizzontalmente
        printf("Il re è in scacco!");
    }
    else if (abs(re_x - regina_x) == abs(re_y - regina_y)) {  // Verifica se sono allineati obliquamente
        printf("Il re è in scacco!");
    }
    return 0;
}