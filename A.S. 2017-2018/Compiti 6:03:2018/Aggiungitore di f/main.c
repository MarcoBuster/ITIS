#include <stdio.h>
#include <string.h>

const char VOCALI[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};

int main() {
    char input[50], output[100];
    int i, k, j=0;

    printf("Aggiungitore di f dopo vocali");
    printf("\nInserisci stringa: ");
    gets(input);

    for (i=0, k=0; i<strlen(input); i++, k++) {
        output[k] = input[i];
        printf("\nit1; i=%d; k=%d; j=%d; input[i]=%c; output[k]=%c", i, k, j, input[i], output[k]);

        for (j=0; j<10; j++) {
            if (input[i] == VOCALI[j]) {
                k++;
                if (j % 2 == 0) {
                    output[k] = 'F';
                }
                else {
                    output[k] = 'f';
                }
            }
            printf("\nit2; i=%d; k=%d; j=%d; input[i]=%c; output[k]=%c", i, k, j, input[i], output[k]);
        }
    }

    puts(output);
    return 0;
}