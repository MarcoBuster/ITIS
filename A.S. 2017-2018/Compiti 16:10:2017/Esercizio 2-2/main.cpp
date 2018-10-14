/*
 *  Trasformare il programma dell esercizio precedente in modo che il valore di x
 *  venga richiesto all'utente in fase di esecuzione.
 *  Input: il valore di x
 *  Output: il valore di y
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int main() {
    int x, a = 18, b = 7;
    int y;

    cout << "Inserisci il valore di x: ";
    cin >> x;

    y = a * x + b;
    cout << "Il risultato è y=" << y;
    return 0;
}