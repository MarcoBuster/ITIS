/*
 *  Scrivere un programma che dati in input due numeri ne visualizzi la somma e la differenza
 *  Input: due numeri naturali
 *  Output: la somma dei due numeri inseriti
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Somma di due numeri" << endl;

    cout << "Inserisci il primo numero: ";
    cin >> x;
    cout << "Inserisci il secondo numero: ";
    cin >> y;

    cout << "La somma dei due numeri è: " << x + y;
    return 0;
}