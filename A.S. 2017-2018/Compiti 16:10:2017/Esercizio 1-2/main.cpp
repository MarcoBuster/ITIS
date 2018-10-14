/*
 *  Scrivere un programma che dato il lato, trovi il perimetro e l’area di un quadrato
 *  Input: lato
 *  Output: perimetro ed area
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int main() {
    int l;
    cout << "Calcolo perimetro ed area di un quadrato" << endl;

    cout << "Inserisci il lato: ";
    cin >> l;
    cout << "Il perimetro è: " << l * 4 << endl;
    cout << "L'area è: " << l * l;
    return 0;
}