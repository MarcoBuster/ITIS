/*
 *  Dato un numero, stabilire se è pari o dispari
 *  Input: numero naturale
 *  Output: esito del controllo
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Pari o dispari?" << endl;

    cout << "Inserisci il numero: ";
    cin >> x;

    if (x % 2 == 0) {
        cout << "Il numero " << x << " è pari";
    }
    else {
        cout << "Il numero " << x << " è dispari";
    }
    return 0;
}