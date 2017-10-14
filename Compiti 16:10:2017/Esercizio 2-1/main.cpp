/*
 *  Codificare un programma che calcoli la seguente espressione:
 *  y=xa+b, dove x è uguale a 5, a è uguale a 18 e b è uguale a 7;
 *  x,a e b devono essere dichiarate come variabili intere.
 *  Output: risultato (y=97)
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>

using namespace std;

int main() {
    int x = 5, a = 18, b = 7;
    int y;

    y = a * x + b;
    cout << "Il risultato è y=" << y;
    return 0;
}