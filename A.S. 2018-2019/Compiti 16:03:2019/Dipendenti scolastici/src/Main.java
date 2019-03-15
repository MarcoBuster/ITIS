/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

public class Main {

    public static void main(String[] args) {
        ImpiegatoStraordinari.setRetribuzione_oraria(15);

        Docente mario = new Docente("Mario Rossi", "M", "26/01/83", 20, 1020);
        Docente luisa = new Docente("Luisa Permeroni", "F", "10/10/77", 50, 2050);
        Impiegato fernardo = new Impiegato("Fernardo Loredani", "M", "04/05/67", 2, 1500);
        ImpiegatoStraordinari mariella = new ImpiegatoStraordinari("Mariella Bianchi", "F", "22/08/84", 5, 2500, 10);

        System.out.println("Lo stipendio di Mario: " + mario.getStipendio());
        System.out.println("Mario è uguale a Luisa? " + mario.equals(luisa));
        System.out.println("Impiegato " + fernardo.toString());
        System.out.println("Lo stipendio di Mariella: " + mariella.getStipendio());
    }
}
