#include <stdio.h>

const int SIZE = 5;

int main() {
    int v1[SIZE] = {3, 5, 7, 11, 17};
    int v2[SIZE] = {4, 6, 8, 9, 15};
    int v3[SIZE*2];
    int i1 = 0, i2 = 0;
    int i;

    for (i=0; i<SIZE*2; i++) {
        if (v1[i1] < v2[i2]) {
            v3[i] = v1[i1];
            i1++;
        }
        else {
            v3[i] = v2[i2];
            i2++;
        }

        printf("\ni=%d; i1=%d, i2=%d", i, i1, i2);

        // Perché l'ultimo non viene mai inserito
        if (i1 > SIZE) v3[SIZE*2-1] = v2[SIZE-1];
        else if (i2 > SIZE) v3[SIZE*2-1] = v1[SIZE-1];
    }

    printf("Array ordinati: ");
    for (i=0; i<SIZE*2; i++) {
        printf("\nv3[%d]: %d", i, v3[i]);
    }
    return 0;
}