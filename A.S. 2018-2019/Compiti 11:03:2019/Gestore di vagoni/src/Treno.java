/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class Treno {
    private Vagone[] vagoni;
    private int index=0;

    public Treno() {
        vagoni = new Vagone[64];
    }

    public void addVagone(Vagone vagone) {
        vagoni[index] = vagone;
        index++;
    }

    public int calcolaPeso() {
        int somma = 0;
        for (int i=1; i<index; i++) {
            // Da 1 perché salto la matrice
            somma += vagoni[i].getPeso();
        }
        return somma;
    }
}
