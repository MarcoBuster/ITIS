/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class ImpiegatoStraordinari extends Impiegato {
    private int ore_staordinario;
    private static int retribuzione_oraria;

    public ImpiegatoStraordinari(String nominativo, String sesso, String data_nascita, int livello, int stipendio,
                                 int ore_straordinario) {
        super(nominativo, sesso, data_nascita, livello, stipendio);
        this.ore_staordinario = ore_straordinario;
    }

    @Override
    public int getStipendio() {
        return this.stipendio + (ore_staordinario * retribuzione_oraria);
    }

    public int getOre_staordinario() {
        return ore_staordinario;
    }

    public void setOre_staordinario(int ore_staordinario) {
        this.ore_staordinario = ore_staordinario;
    }

    public static int getRetribuzione_oraria() {
        return retribuzione_oraria;
    }

    public static void setRetribuzione_oraria(int retribuzione_oraria) {
        ImpiegatoStraordinari.retribuzione_oraria = retribuzione_oraria;
    }

    public boolean equals(ImpiegatoStraordinari obj) {
        return this.getNominativo().equals(obj.getNominativo()) && this.getSesso().equals(obj.getSesso()) &&
                this.getData_nascita().equals(obj.getData_nascita()) && this.getLivello() == obj.getLivello() &&
                this.getStipendio() == obj.getStipendio() && this.getOre_staordinario() == obj.getOre_staordinario();
    }
}
