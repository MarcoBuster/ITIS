/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class Main {

    public static void main(String[] args) {
        Treno treno = new Treno();
        VagonePasseggeri vag1 = new VagonePasseggeri(1, 100, "Trenord", 1956, 1, 80, 45);
        VagonePasseggeri vag2 = new VagonePasseggeri(2, 50, "Trenord", 1945, 2, 50, 30);
        VagoneMerci vag3 = new VagoneMerci(3, 40, "Trenitalia", 1993,3, 520, 500);
        VagoneMerci vag4 = new VagoneMerci(4, 50, "Trenitalia", 1995, 10, 480, 400);

        treno.addVagone(vag1);
        treno.addVagone(vag2);
        treno.addVagone(vag3);
        treno.addVagone(vag4);
        System.out.println("Peso totale: " + treno.calcolaPeso());
    }
}
