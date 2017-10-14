/*
 *  Dato in input l’altezza in metri e il peso in Kg,
 *  calcolare l’indice di massa corporea (IMC=peso/altezza*altezza),
 *  e mostrare a video il suo valore.
 *  Se l'IMC è maggiore di 35 allora visualizzare "Sei in sovrappeso",
 *  altrimenti se è minore di 25 visualizzare "Sei in sottopeso",
 *  altrimenti visualizzare "Sei normale".
 *
 *  Input: altezza e peso
 *  Output: indice di massa corporea
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int main() {
    float altezza, peso;
    double imc;
    cout << "Calcolatore dell'indice di massa corporea (IMC)" << endl;

    cout << "Inserisci la tua altezza (in metri): ";
    cin >> altezza;
    cout << "Inserisci il tuo peso: ";
    cin >> peso;

    imc = (peso / (altezza * altezza));
    cout << "Indice di massa corporea (IMC) calcolato: " << imc;

    if (imc > 35) {
        cout << endl << "Sei in sovrappeso!";
    }
    else if (imc < 25) {
        cout << endl << "Sei in sottopeso!";
    }
    else {
        cout << endl << "Sei normale.";
    }
    return 0;
}