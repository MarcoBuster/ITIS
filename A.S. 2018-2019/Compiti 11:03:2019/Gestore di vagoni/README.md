# Compito per l'11/03/2019
> Esercizio 38 pagina A258


Si intendono gestire mediante un programma Java i vagoni che compongono un treno. 
Per ogni vagone si hanno alcuni attributi fondamentali:
* codice;
* peso a vuoto;
* azienda costruttore;
* anno di costruzione.

Per i vagoni passeggeri si devono inoltre memorizzare:
* classe;
* numero di posti disponibili;
* numero di posti occupati.

mentre per i vagoni merci si devono memorizzare:
* volume di carico;
* peso massimo di carico;
* peso effettivo di carico.

Per la composizione di un treno è fondamentale la gestione
del peso dei vagoni, che nel caso dei carri merci è di immediata
determinazione, mentre per le carrozze passeggeri deve essere
stimato considerando un peso medio per occupante di 65kg
(valore che potrebbe essere necessario modificare).

Dopo aver disegnato il diagramma UML delle classi
della soluzione proposta e averlo implementat in linguaggio Java,
codificare una classe Java _Treno_ con uno o più metodi per 
l'aggiunta di vagoni: la classe dovrà prevedere un metodo che
restituisca il peso complessivo del treno esclusa/e la/e motrice/i. 
