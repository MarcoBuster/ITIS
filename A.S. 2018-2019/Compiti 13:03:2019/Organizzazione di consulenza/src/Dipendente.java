/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class Dipendente {
    private int codice;
    private String nome, cognome;
    private int anno_assunzione;
    protected int paga_oraria;

    Dipendente(int codice, String nome, String cognome, int anno_assunzione) {
        setCodice(codice);
        setNome(nome);
        setCognome(cognome);
        setAnno_assunzione(anno_assunzione);
    }

    Dipendente(Dipendente dipendente) {
        setCodice(dipendente.getCodice());
        setNome(dipendente.getNome());
        setCognome(dipendente.getCognome());
        setAnno_assunzione(dipendente.getAnno_assunzione());
    }

    public int getCodice() {
        return codice;
    }

    public void setCodice(int codice) {
        this.codice = codice;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCognome() {
        return cognome;
    }

    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    public int getAnno_assunzione() {
        return anno_assunzione;
    }

    public void setAnno_assunzione(int anno_assunzione) {
        this.anno_assunzione = anno_assunzione;
    }

    public int getPaga_oraria() {
        return paga_oraria;
    }

    public void setPaga_oraria(int paga_oraria) {
	this.paga_oraria = paga_oraria;
    }
}
