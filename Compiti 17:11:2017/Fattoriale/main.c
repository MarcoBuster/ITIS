/*
 *  Dato un numero x calcolare il fattoriale x! senza usare la funzione apposita
 *  Esempio: fattoriale di 5:
 *  5! = 1 * 2 * 3 * 4 * 5 = 120
 *  Input: x
 *  Output: x!
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <stdio.h>

int main() {
    int x;
    double fattoriale;
    int i;
    printf("Calcolatore fattoriale\n");

    printf("Inserisci x: ");
    scanf("%d", &x);

    /* Parte esecutiva - ciclo for
     * for (fattoriale=1, i=1, ..., ...)
     *      ~~~~~~~~~~~~~~~~~
     *  All'inizio imposto fattoriale=1 e i=1,
     *  perchè moltiplicando per 0 si ottiene sempre zero.
     *  Utilizzando "," nella sintassi del for si possono eseguire
     *  più operazioni nello stessa parte di sintassi.
     *
     * for (..., i<=x, ...)
     *           ~~~~
     *  Alla fine di ogni iterazione
     *  controllo che i sia minore-uguale (partendo da 1 uso minore-uguale e non minore) a x,
     *  se la condizione è vera continua il ciclo altrimenti esce.
     *  In questo modo il ciclo viene eseguito x volte.
     *
     * for (..., ..., i++)
     *                ~~~
     *  Alla fine di ogni iterazione
     *  se la condizione precedente è quindi vera,
     *  aumento di 1 (i++ è come fare i = i + 1) la variabile i
     *  in modo di continuare il ciclo
     *
     * fattoriale *= i;
     * ~~~~~~~~~~~~~~~
     *  Moltiplico fattoriale (variabile che alla fine contenerà il risultato)
     *  per i (la variabile che viene incrementata di 1 alla fine di ogni iterazione),
     *  formando il risultato.
     *  Nota: fattoriale *= i è come fare fattoriale = fattoriale * i
    */

    for (fattoriale=1, i=1; i<=x; i++) {
        printf("i=%d x=%d fattoriale=%f\n", i, x, fattoriale);
        fattoriale *= i;
    }
    printf("Fattoriale di %d calcolato: %f", x, fattoriale);
    return 0;
}