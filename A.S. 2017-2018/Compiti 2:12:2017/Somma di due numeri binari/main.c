#include <stdio.h>

int main() {
    int n1=0, n2=0, somma, riporto;
    int max_bit, i=0;
    printf("Somma di due numeri binari");

    printf("\nInserisci numero di bit: ");
    scanf("%d", &max_bit);

    do {
        printf("\nInserisci bit del primo numero (da destra verso sinistra): ");
        scanf("%d", &n1);

        printf("Inserisci bit del secondo numero (da destra verso sinistra): ");
        scanf("%d", &n2);

        if ((n1 == 0 || n1 == 1) && (n2 == 0 || n2 == 1)) {
            i++;
            somma = n1 + n2 + riporto;
            if (somma-- >= 0) {
                riporto = somma--;
            }
            if (riporto) {
                somma = 1;
            }
            printf("%d", somma);
        }
        else {
            printf("\nNumero non valido. Riprova!");
        }
    } while (i < max_bit);
    if (riporto > 0) {
        printf("\nAttenzione! L'operazione è finita in OVERFLOW con riporto di %d.", riporto);
    }
}