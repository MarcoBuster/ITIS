/*
 *  Scrivere un programma che dato in input un numero ne calcoli la radice quadrata.
 *  Input: un numero naturale
 *  Output: la radice quadrata del numero
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    cout << "Calcolo radice quadrata" << endl;

    cout << "Inserisci il numero: ";
    cin >> x;

    cout << "La radice quadrata calcolata è: " << sqrt(x);
    return 0;
}