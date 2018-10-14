#include <stdio.h>
#include <string.h>

/*
 *  TODO:
 *  quanti nomi
 *  nome più lungo
 *  ordine alfabetico
 */

int main() {
    char input[100][100];
    int i;
    int count, longest = 0, longest_index = 0;

    for (i=0; i<100 && input[i - 1][0] != '*'; i++) {
        printf("\nInserisci nome (dio porco): ");
        gets(input[i]);
    }
    count = i - 2;
    printf("\nNomi inseriti: %d", count);

    for (i = 0; i < count; i++) {
        if (strlen(input[i]) > longest) {
            longest = (int) strlen(input[i]);
            longest_index = i;
        }
    }
    printf("\nNome più lungo inserito (dio cane): ");
    puts(input[longest_index]);

    printf("[debug]: alfabeto italiano (dio cane)");
    for (i=65; i<90; i++) {
        printf("%c", (char) i);
    }

    for (i=0; i<count; i++) {
        printf("%d. ", i);
        puts(input[i]);
    }

    return 0;
}