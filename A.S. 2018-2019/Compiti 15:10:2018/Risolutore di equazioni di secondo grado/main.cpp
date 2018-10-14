/*
 *  Scrivere tre funzioni che risolvano un'equazione di secondo grado (ax^2 + bx + c = 0),
 *  una con il passaggio dei parametri per valore, una per indirizzo e una per riferimento.
 *
 *  (c) Marco Aceti, 2018. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>
#include <cmath>

using namespace std;

void risolvi_equazione_valore(int a, int b, int c) {
    /*
     *  Risolve l'equazione con il passaggio dei parametri per valore.
     *  Questo significa che il VALORE delle variabili a, b, c passate come parametri
     *  dentro questa funzione sono copiati nelle variabili locali a, b, c.
     *  Ogni modifica delle variabili locali a, b, c non influisce sulle variabili originali a, b, c.
     */
    double delta, x1, x2;
    delta = pow(b, 2) - (4 * a * c);
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else {
        cout << "Equazione impossibile." << endl;
    }
}

void risolvi_equazione_indirizzo(int a, int b, int c, double &x1, double &x2) {
    /*
     *  Risolve l'equazione con il passaggio dei parametri per indirizzo.
     *  Al posto di copiare il valore delle variabili x1 ed x2, viene copiato l'INDIRIZZO di esse.
     *  In questo modo, i cambiamenti in questa funzione delle variabili x1 e x2 vanno a modificare
     *  la cella con l'indirizzo originale.
     */
    double delta;
    delta = pow(b, 2) - (4 * a * c);
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else {
        cout << "Equazione impossibile." << endl;
    }
}

void risolvi_equazione_riferimento(int a, int b, int c, double *x1, double *x2) {
    /*
     *  Risolve l'equazione con il passaggio dei parametri per riferimento
     *  Al posto di passare il valore o l'indirizzo di x1 e x2, viene passato il PUNTATORE di esse.
     *  Il puntatore è una variabile "speciale" che ha come valore l'indirizzo di una cella di memoria
     *  di un'altra variabile. Per accedere o modificare il valore della cella puntata
     *  è necessario metterci davanti un asterisco *.
     */
    double delta;
    delta = pow(b, 2) - (4 * a * c);
    if (delta >= 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else {
        cout << "Equazione impossibile." << endl;
    }
}

int main() {
    int a, b, c;
    double x1, x2;
    cout << "Risolutore di equazioni di secondo grado" << endl;
    cout << "Inserisci a: ";
    cin >> a;
    cout << "Inserisci b: ";
    cin >> b;
    cout << "Inserisci c: ";
    cin >> c;
    // Richiama la funzione con il passaggio per valore.
    risolvi_equazione_valore(a, b, c);

    // Richiama la funzione con il passaggio per indirizzo.
    risolvi_equazione_indirizzo(a, b, c, x1, x2);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    // Richiama la funzione con il passaggio per riferimento.
    // Notare il carattere ampersand (&) davanti a x1 e x2,
    // questo perchè serve un indirizzo per inizializzare un puntatore.
    risolvi_equazione_riferimento(a, b, c, &x1, &x2);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    return 0;
}
