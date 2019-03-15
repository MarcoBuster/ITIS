/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class Impiegato {
    private String nominativo;
    private String sesso;
    private String data_nascita;
    private int livello;
    protected int stipendio;

    public Impiegato(String nominativo, String sesso, String data_nascita, int livello, int stipendio) {
        this.setNominativo(nominativo);
        this.setSesso(sesso);
        this.setData_nascita(data_nascita);
        this.setLivello(livello);
        this.setStipendio(stipendio);
    }

    public String getNominativo() {
        return nominativo;
    }

    public void setNominativo(String nominativo) {
        this.nominativo = nominativo;
    }

    public String getSesso() {
        return sesso;
    }

    public void setSesso(String sesso) {
        this.sesso = sesso;
    }

    public void setData_nascita(String data_nascita) {
        this.data_nascita = data_nascita;
    }

    public String getData_nascita() {
        return data_nascita;
    }

    public int getLivello() {
        return livello;
    }

    public void setLivello(int livello) {
        this.livello = livello;
    }

    public int getStipendio() {
        return stipendio;
    }

    public void setStipendio(int stipendio) {
        this.stipendio = stipendio;
    }

    public String toString() {
        return this.getNominativo();
    }

    public boolean equals(Impiegato obj) {
        return this.getNominativo().equals(obj.getNominativo()) && this.getSesso().equals(obj.getSesso()) &&
                this.getData_nascita().equals(obj.getData_nascita()) && this.getLivello() == obj.getLivello() &&
                this.getStipendio() == obj.getStipendio();
    }
}
