/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

import java.util.Date;

public class Funzionario extends Dipendente {
    public Funzionario(int codice, String nome, String cognome, int anno_assunzione) {
        super(codice, nome, cognome, anno_assunzione);
        int diff = 2019 - anno_assunzione;
        if (diff < 10) {
            paga_oraria = 70;
        }
        else {
            paga_oraria = 80;
        }
    }
}
