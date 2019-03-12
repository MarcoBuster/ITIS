/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class VagoneMerci extends Vagone {
    private int volume_carico;
    private int peso_massimo;
    private int peso_carico;

    public VagoneMerci(int codice, int peso_vuoto, String azienda, int anno, int volume_carico, int peso_massimo, int peso_carico) {
        super(codice, peso_vuoto, azienda, anno);
        setVolume_carico(volume_carico);
        setPeso_massimo(peso_massimo);
        setPeso_carico(peso_carico);
        setPeso(getPeso_vuoto() + peso_carico);
    }

    public int getVolume_carico() {
        return volume_carico;
    }

    public int getPeso_massimo() {
        return peso_massimo;
    }

    public int getPeso_carico() {
        return peso_carico;
    }

    public void setVolume_carico(int volume_carico) {
        this.volume_carico = volume_carico;
    }

    public void setPeso_massimo(int peso_massimo) {
        this.peso_massimo = peso_massimo;
    }

    public void setPeso_carico(int peso_carico) {
        this.peso_carico = peso_carico;
    }
}
