/*
 *  Data una stringa, aggiungere la lettera successiva nell'alfabeto (italiano) dopo ogni vocale
 *  Esempio:
 *  Ciao mondo -> Cilabop mopndop
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <string.h>

const char VOCALI[5*2] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
const char LETTERE[5*2] = {'B', 'b', 'F', 'f', 'L', 'l', 'P', 'p', 'V', 'v'};

int main() {
    char input[100], output[100];
    int i, j=0, k;

    printf("Aggiungitore di lettere successive dopo vocali");
    printf("\nInserisci una stringa: ");
    gets(input);

    for (i=0; i<strlen(input); i++) {
        output[j] = input[i];
        j++;
        for (k=0; k<5*2; k++) {
            if (input[i] == VOCALI[k]) {
                output[j] = LETTERE[k];
                j++;
            }
        }
    }

    puts(output);
    return 0;
}