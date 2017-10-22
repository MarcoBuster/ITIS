/*
 *  Dati tre numeri, stabilire quale è il maggiore
 *  Input: tre numeri naturali
 *  Output: esito del controllo
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Calcolo del numero maggiore" << endl;

    cout << "Inserisci il primo numero: ";
    cin >> a;
    cout << "Inserisci il secondo numero: ";
    cin >> b;
    cout << "Inserisci il terzo numero: ";
    cin >> c;

    if (a > b && a > c) {
        cout << a << " è il numero più grande";
    }
    else if (b > a && b > c) {
        cout << b << " è il numero più grande";
    }
    else {
        cout << c << " è il numero più grande";
    }
    return 0;
}