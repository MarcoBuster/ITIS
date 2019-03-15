/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class Docente {
    private String nominativo;
    private String sesso;
    private String data_nascita;
    private int ore_docenza;
    private int stipendio;

    public Docente(String nominativo, String sesso, String data_nascita, int ore_docenza, int stipendio) {
        this.setNominativo(nominativo);
        this.setSesso(sesso);
        this.setData_nascita(data_nascita);
        this.setOre_docenza(ore_docenza);
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

    public int getOre_docenza() {
        return ore_docenza;
    }

    public void setOre_docenza(int ore_docenza) {
        this.ore_docenza = ore_docenza;
    }

    public int getStipendio() {
        return stipendio;
    }

    public void setStipendio(int stipendio) {
        this.stipendio = stipendio;
    }

    @Override
    public String toString() {
        return this.getNominativo();
    }

    public boolean equals(Docente obj) {
        return this.getNominativo().equals(obj.getNominativo()) && this.getSesso().equals(obj.getSesso()) &&
                this.getData_nascita().equals(obj.getData_nascita()) && this.getOre_docenza() == obj.getOre_docenza() &&
                this.getStipendio() == obj.getStipendio();
    }
}
