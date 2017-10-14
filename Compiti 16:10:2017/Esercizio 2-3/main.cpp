/*
 *  Trasformare il programma dell esercizio precedente in modo che
 *  utilizzi le costanti A e B invece delle variabili a e b.
 *  Input: il valore di x
 *  Output: il valore di y
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int const A = 18;
int const B = 7;

int main() {
    int x;
    int y;

    cout << "Inserisci il valore di x: ";
    cin >> x;

    y = A * x + B;
    cout << "Il risultato è y=" << y;
    return 0;
}