/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class Dirigente extends Dipendente {
    public Dirigente(int codice, String nome, String cognome, int anno_assunzione) {
        super(codice, nome, cognome, anno_assunzione);
        paga_oraria = 100;
    }
}
