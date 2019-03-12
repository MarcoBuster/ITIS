/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

class Tecnico extends Dipendente {
	public static final int INTERNO=0, ESTERNO=1;
	protected int tipo;

	protected Tecnico(int codice, String nome, String cognome, int anno_assunzione, int tipo) {
		super(codice, nome, cognome, anno_assunzione);
		this.tipo = tipo;
		this.paga_oraria = 0;

		if (this.tipo == INTERNO) {
			int diff = 2019 - anno_assunzione;
			this.paga_oraria += diff;
		}
	}
}
