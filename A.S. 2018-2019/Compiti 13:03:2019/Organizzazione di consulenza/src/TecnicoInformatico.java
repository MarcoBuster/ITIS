/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class TecnicoInformatico extends Tecnico {
    public TecnicoInformatico(int codice, String nome, String cognome, int anno_assunzione, int tipo) {
        super(codice, nome, cognome, anno_assunzione, tipo);
	this.paga_oraria += 40;
    }
}
