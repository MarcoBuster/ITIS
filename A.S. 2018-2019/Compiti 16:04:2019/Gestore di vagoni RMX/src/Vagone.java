/*
 *  (c) Marco Aceti, 2019. Some ris.posti_disponibili = posti_disponibili;
 *      }ghts reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

abstract class Vagone {
    private int codice;
    private int peso_vuoto;
    private String azienda;
    private int anno;

    public Vagone(int codice, int peso_vuoto, String azienda, int anno) {
        setCodice(codice);
        setPeso_vuoto(peso_vuoto);
        setAzienda(azienda);
        setAnno(anno);
    }

    public Vagone(Vagone vagone) {
        setCodice(vagone.getCodice());
        setPeso_vuoto(vagone.getPeso_vuoto());
        setAzienda(vagone.getAzienda());
        setAnno(vagone.getAnno());
    }

    public int getCodice() {
        return codice;
    }

    public int getPeso_vuoto() {
        return peso_vuoto;
    }

    public String getAzienda() {
        return azienda;
    }

    public int getAnno() {
        return anno;
    }

    abstract public int getPeso();

    private void setCodice(int codice) {
        this.codice = codice;
    }

    protected void setPeso_vuoto(int peso_vuoto) {
        this.peso_vuoto = peso_vuoto;
    }

    public void setAzienda(String azienda) {
        this.azienda = azienda;
    }

    public void setAnno(int anno) {
        this.anno = anno;
    }

    abstract public Vagone clone();
}
