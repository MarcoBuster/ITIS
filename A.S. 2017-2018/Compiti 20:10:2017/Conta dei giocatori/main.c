/*
 *  Dato un numero n di giocatori e il numero della conta in input,
 *  stampare la posizione dove finisce la conta.
 *  Input: numero di giocatori, numero della conta
 *  Output: posizione finale della conta
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

int main() {
    int numero_giocatori, numero_conta;  // Dichiaro le due variabili di input
    int giocatore_finale;  // Dichiaro la variabile di output
    printf("Conta di n giocatori\n");

    printf("Inserisci il numero di giocatori: ");
    scanf("%d", &numero_giocatori);
    printf("Inserisci il numero di conta: ");
    scanf("%d", &numero_conta);

    /*
     * Parte esecutiva
     * Esempio: con 5 giocatori in conta, contando 7 volte esce il numero 2
     *  [1-6] -> [2-7] -> [3] -> [4] -> [5]
     *    1        2       3      4      5
     * Questo perchè 7 % 5 = 2  (ricordiamoci che % è l'operatore che
     *                           restituisce il resto tra la divisione dei due numeri)
     *
     * Contando, invece, 10 volte (sempre con 5 giocatori) esce il numero 5:
     *  [1-6] -> [2-7] -> [3-8] -> [4-9] -> [5-10]
     *    1        2        3        4        5
     * Questo è un caso particolare, il risultato non sarà il resto tra la divisione dei numeri
     * (che in questo caso 5 % 5 = 0, è zero) ma il numero di giocatori, quindi dobbiamo
     * aggiungere che se il resto è 0 allora il risultato è il numero dei giocatori
     */

    giocatore_finale = numero_conta % numero_giocatori;
    if (giocatore_finale == 0) {
        giocatore_finale = numero_giocatori;
    }

    printf("Il giocatore contato è: %d", giocatore_finale);
    return 0;
}