/*
 *  (c) Marco Aceti, 2019. Some rights reserved.
 *  See LICENSE file for more details.
 *  THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND.
 */

class Main {

    public static void main(String[] args) {
        Progetto progetto = new Progetto();

	TecnicoInformatico marco = new TecnicoInformatico(1, "Marco", "Rossi", 2003, Tecnico.INTERNO);
	System.out.println(marco + "\tcosto/ora: " + marco.getPaga_oraria());
	progetto.addDipendente(marco);
	TecnicoInformatico michele = new TecnicoInformatico(2, "Michele", "Bianchi", 2010, Tecnico.ESTERNO);
	System.out.println(michele + "\tcosto/ora: " + michele.getPaga_oraria());
	progetto.addDipendente(michele);

	TecnicoElettronico lucia = new TecnicoElettronico(3, "Lucia", "Franchi", 2008, Tecnico.INTERNO);
	lucia.setPaga_oraria(65);
	System.out.println(lucia + "\tcosto/ora: " + lucia.getPaga_oraria());
	progetto.addDipendente(lucia);

        Funzionario maria = new Funzionario(6, "Maria", "Bianchi", 2016);
	System.out.println(maria + "\tcosto/ora: " + maria.getPaga_oraria());
        progetto.addDipendente(maria);
        Funzionario francesco = new Funzionario(5, "Francesco", "Rossi", 2005);
	System.out.println(francesco + "\tcosto/ora: " + francesco.getPaga_oraria());
        progetto.addDipendente(francesco);

	Dirigente mauro = new Dirigente(7, "Mauro", "Bianchi", 2018);
	mauro.setPaga_oraria(110);
	System.out.println(mauro + "\tcosto/ora: " + mauro.getPaga_oraria());
	progetto.addDipendente(mauro);

        System.out.println("Costo totale del personale: " + progetto.calcolaPaga());
    }
}
