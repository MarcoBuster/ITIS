/*
 *  Scrivere un programma che date in input due variabili ne scambi il contenuto e le visualizzi.
 *  Input: due numeri naturali
 *  Output: i due numeri naturali scambiati
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int main() {
    int x, y;
    int temp;
    cout << "Scambio di variabili" << endl;

    cout << "Inserisci la prima variabile: ";
    cin >> x;
    cout << "Inserisci la seconda variabile: ";
    cin >> y;

    temp = x;
    x = y;
    y = temp;

    cout << "-- Scambio effettuato --" << endl;
    cout << "Prima variabile: " << x << endl;
    cout << "Seconda variabile: " << y;
    return 0;
}