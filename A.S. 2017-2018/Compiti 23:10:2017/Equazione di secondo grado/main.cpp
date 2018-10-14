/*
 *  Risolvere un'equazione di secondo grado (ax^2 + bx + c = 0)
 *  Input: a, b, c
 *  Output: x1, x2
 *
 *  (c) Marco Aceti, 2017. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    double delta;
    double x1, x2;
    cout << "Risolutore di equazioni di secondo grado" << endl;

    cout << "Inserisci a: ";
    cin >> a;
    cout << "Inserisci b: ";
    cin >> b;
    cout << "Inserisci c: ";
    cin >> c;

    delta = b ^ 2 - (4 * a * c);

    if (delta < 0) {
        cout << "Equazione impossibile";
        return 0;
    }

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    cout << "Valore di x1: " << x1 << endl;
    cout << "Valore di x2: " << x2;
    return 0;
}