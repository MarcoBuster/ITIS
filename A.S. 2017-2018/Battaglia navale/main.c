/*
 *  Implementare il gioco della battaglia navale in C.
 *  Generata una griglia con delle navi di lunghezza minima 1 e massima 4
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
const int MIN_SHIP_LENGTH = 1;
const int SHIPS_NUMBER = 5;

void popolateTable(int table[TABLE_SIZE][TABLE_SIZE]);
void printTable(int table[TABLE_SIZE][TABLE_SIZE]);
int getRandomNumber(int low, int high);
void generateRandomTable(int table[TABLE_SIZE][TABLE_SIZE]);
int sendMissle(int table[TABLE_SIZE][TABLE_SIZE], int x, int y);


int main() {
    int table[TABLE_SIZE][TABLE_SIZE];
    srand((unsigned int) time(0));

    popolateTable(table);
    generateRandomTable(table);
    printTable(table);

    int x, y;
    int result;
    int water=0, near=0, hit=0, fired=0, attemps=0;
    do {
        printf("Inserisci le coordinate [coordinata X]: ");
        scanf("%d", &x);
        printf("Inserisci le coordinate [coordinata Y]: ");
        scanf("%d", &y);

        result = sendMissle(table, x, y);
        printf("\t");
        switch (result) {
            case -1:
                printf("[ERRORE: Nave già colpita]");
                break;
            case 0:
                water++;
                printf("[ACQUA]");
                break;
            case 1:
                near++;
                printf("[FUOCO]");
                break;
            case 2:
                hit++;
                printf("[COLPITO]");
                break;
            case 3:
                fired++;
                printf("[AFFONDATO] - Affondate: %d/%d", fired, SHIPS_NUMBER);
                break;
            default:
                printf("[ERRORE]");
                break;
        }
        printTable(table);
        attemps++;
    } while (fired < SHIPS_NUMBER);

    printf("\n\n-- Gioco terminato --");
    printf("\n[Statistiche]");
    printf("\nAcqua: %d\nFuoco: %d\nColpito: %d\nAffondato: %d\nMosse totali: %d",
           water, near, hit, fired, attemps);
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
    printf("\n");
    for (i=0; i<TABLE_SIZE; i++) {
        if (i == 0) {
            printf("\t");
            for (k=0; k<TABLE_SIZE; k++)
                printf("%d ", k);
            printf("\n\t");
            for (k=0; k<TABLE_SIZE; k++)
                printf("--");
            printf("\n");
        }
        printf("%d | ", i);
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
                // table[rx][ry] = success+1;
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
        for (i = 0; i < rl && !exit; i++) {
            table[rx][ry] = success+1;
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
        if (exit)
            failed++;
        else
            success++;
    } while (success < SHIPS_NUMBER && failed < TABLE_SIZE*TABLE_SIZE);  // infinite-loop check
    if (failed >= TABLE_SIZE*TABLE_SIZE) {
        printf("Failed.");
    }
}


int sendMissle(int table[TABLE_SIZE][TABLE_SIZE], int x, int y) {
    if (table[x][y] < 0)
        return -1;  // already hit

    else if (table[x][y] > 0) {
        table[x][y] = -table[x][y];  // hit

        int i, k;
        for (i=0; i<TABLE_SIZE; i++)
            for (k=0; k<TABLE_SIZE; k++)
                if (table[i][k] == abs(table[x][y]))
                    return 2;  // ship hit

        return 3;  // ship fired
    }

    else if (table[x+1][y] > 0 || table[x][y+1] > 0 ||
            table[x-1][y] > 0 || table[x][y-1] > 0)
        return 1;  // a ship is near

    return 0;  // no ship near
}
