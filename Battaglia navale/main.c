/*
 *  Implementare il gioco della battaglia navale in C.
 *  Generata una griglia con delle navi di lunghezza minima 2 e massima 4
 *  e date le coordinate del lancio, stabilire se il missile ha fatto
 *  l'acqua, ha fatto fuoco, ha colpito la nave o l'ha affondata completamente.
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

const int TABLE_SIZE = 10;
const int MAX_SHIP_LENGTH = 4;
const int MIN_SHIP_LENGTH = 2;

void popolateTable(int table[TABLE_SIZE][TABLE_SIZE]);
void printTable(int table[TABLE_SIZE][TABLE_SIZE]);
int getRandomNumber(int low, int high);
void generateRandomTable(int table[TABLE_SIZE][TABLE_SIZE]);


int main() {
    int table[TABLE_SIZE][TABLE_SIZE];
    srand((unsigned int) time(0));

    popolateTable(table);
    generateRandomTable(table);
    printTable(table);
    return 0;
}


void popolateTable(int table[TABLE_SIZE][TABLE_SIZE]) {
    int i, k;
    for (i=0; i<TABLE_SIZE; i++) {
        for (k=0; k<TABLE_SIZE; k++) {
            table[i][k] = 0;
        }
    }
}

void printTable(int table[TABLE_SIZE][TABLE_SIZE]) {
    int i, k;
    printf("\n\n -- BATTAGLIA NAVALE %dx%d --\n", TABLE_SIZE, TABLE_SIZE);
    for (i=0; i<TABLE_SIZE; i++) {
        for (k=0; k<TABLE_SIZE; k++) {
            printf("%d ", table[i][k]);
        }
        printf("\n");
    }

}

int getRandomNumber(int low, int high) {
    return (int) (low + ((float) rand() / RAND_MAX) * (high - low));
}

void generateRandomTable(int table[TABLE_SIZE][TABLE_SIZE]) {
    int i;
    int rx, ry, rl, rd;  // randomx, randomy, randomlength, randomdirection
    int diff;
    int failed=0, success=0;
    bool exit;

    do {
        exit = false;
        rx = getRandomNumber(0, TABLE_SIZE);
        ry = getRandomNumber(0, TABLE_SIZE);
        rl = getRandomNumber(MIN_SHIP_LENGTH, MAX_SHIP_LENGTH+1);
        rd = getRandomNumber(0, 4);

        switch (rd) {
            case 0:
                diff = rx + rl;
                break;
            case 1:
                diff = rx - rl;
                break;
            case 2:
                diff = ry + rl;
                break;
            case 3:
                diff = ry - rl;
                break;
            default:
                diff = -1;
                break;
        }

        if (diff > TABLE_SIZE || diff < 0)
            exit = true;

        for (i = 0; i < rl && !exit; i++) {
            if (table[rx][ry] != 0)
                exit = true;
            else {
                table[rx][ry] = 1;
                switch (rd) {
                    case 0:
                        rx++;
                        break;
                    case 1:
                        rx--;
                        break;
                    case 2:
                        ry++;
                        break;
                    case 3:
                        ry--;
                        break;
                    default: ;
                }
            }
        }
        if (exit)
            failed++;
        else
            success++;
    } while (success < TABLE_SIZE && failed < TABLE_SIZE*TABLE_SIZE);  // infinite-loop check
}
