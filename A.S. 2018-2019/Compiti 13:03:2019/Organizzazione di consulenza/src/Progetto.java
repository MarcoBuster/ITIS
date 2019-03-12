/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class Progetto {
    private Dipendente[] dipendenti;
    private int index = 0;

    Progetto() {
	this.dipendenti = new Dipendente[100];
    }

    void addDipendente(Dipendente dipendente) {
        this.dipendenti[this.index] = dipendente;
        index++;
    }

    Dipendente getDipendente(int index) {
        return this.dipendenti[index];
    }

    int calcolaPaga() {
        int risultato = 0;
	for (int k = 0; k < index; k++)
	       risultato += this.dipendenti[k].getPaga_oraria();
        return risultato;
    }
}
