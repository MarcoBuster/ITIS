/*
 *  Scrivere un programma che dati in input i cateti di un triangolo calcoli l’ipotenusa.
 *  Input: i due cateti
 *  Output: l'ipotenusa
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int cat1, cat2;
    cout << "Calcolo ipotenusa" << endl;

    cout << "Inserisci il primo cateto: ";
    cin >> cat1;
    cout << "Inserisci il secondo cateto: ";
    cin >> cat2;

    cout << "Ipotenusa calcolata: " << sqrt((pow(cat1, 2) + pow(cat2, 2)));
    return 0;
}