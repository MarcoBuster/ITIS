/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class VagonePasseggeri extends Vagone {
    private int classe;
    private int posti_disponibili;
    private int posti_occupati;

    public VagonePasseggeri(int codice, int peso_vuoto, String azienda, int anno, int classe, int posti_disponibili, int posti_occupati) {
        super(codice, peso_vuoto, azienda, anno);
        setClasse(classe);
        setPosti_disponibili(posti_disponibili);
        setPosti_occupati(posti_occupati);
        setPeso(getPeso_vuoto() * (posti_occupati * 75));
    }

    public int getClasse() {
        return classe;
    }

    public int getPosti_disponibili() {
        return posti_disponibili;
    }

    public int getPosti_occupati() {
        return posti_occupati;
    }

    public void setClasse(int classe) {
        this.classe = classe;
    }

    public void setPosti_disponibili(int posti_disponibili) {
        this.posti_disponibili = posti_disponibili;
    }

    public void setPosti_occupati(int posti_occupati) {
        this.posti_occupati = posti_occupati;
    }
}
