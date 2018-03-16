/*
 *  Date due stringhe, stabilire se la seconda stringa è contenuta nella prima
 *  Esempio:
 *  Ciao mondo; mondo -> La sottostringa "mondo" è contenuta in "Ciao mondo"
 *  Ciao mondo; gatto -> La sottostringa "gatto" non è contenuta in "Ciao mondo"
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input_a[100], input_b[100];
    int len_a, len_b;
    int i, k;
    bool contenuta=false;

    printf("Cercatore di sottostringa in stringa");
    printf("Inserisci stringa: ");
    gets(input_a);
    printf("\nInserisci sottostringa da cercare: ");
    gets(input_b);

    len_a = (int) strlen(input_a);
    len_b = (int) strlen(input_b);

    if (len_b > len_a) {
        printf("Errore, la sottostringa è più lunga della stringa inserita.");
        return 0;
    }

    for (i=0; i<len_a; i++) {
        for (k=0; k<len_b && i+len_b <= len_a; k++) {
            if (k == 0) contenuta = true;
            if (input_b[k] != input_a[i+k] && contenuta) contenuta = false;
        }
        if (contenuta) break;
    }

    if (contenuta) printf("La sottostringa inserita è contenuta nella stringa inserita");
    else printf("La sottostringa inserita non è contenuta nella stringa inserita");
    return 0;
}