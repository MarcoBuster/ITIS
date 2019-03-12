# Compito per il 13/03/2019
> Esercizio 39 pagina A259


Di tutti i membri del personale di un'organizzazione di consulenza
sono memorizzati nel sistema informatico della stessa i seguenti dati:
* codice;
* cognome;
* nome;
* anno di assunzione o inizio collaborazione.
 
I membri del personale dell'organizzazione si suddivono in:
* dirigenti;
* funzionari;
* tecnici;

di cui solo i tecnici sono specializzati in una specifica area di competenza
(informatica-telecomunicazioni o elettronica-automazione) e possono essere
sia interni che esterni (il personale dipendente dell'organizzazione
è classificato come "interno", i professionisti collaboratori come "esterni").

Si intende realizzare un programma per la stima del costo complessivo
di partecipazione a un progetto di alcuni membri del personale a partire
dal numero di ore di attività previsto per ciascuno di loro sapendo
che i costi orari sono valutati come segue:
- **tecnico dell'area informatica/telecomunicazioni**: **_40€/ora_** più - _ma solo se interno_ -
**_1€/ora_** per ogni anno trascorso dall'anno di assunzione;
- **tecnico dell'area elettronica/automazione**: **_50€/ora_** più - _ma solo se interno_ -
**_1€/ora_** per ogni anno trascorso dall'anno di assunzione;
- **funzionario junior (meno di 10 anni di esperienza a partire dall'anno di assunzione 
o inizio collaborazione)**: **_70€/ora_**;
- **funzionario senior (più di 10 anni di esperienza a partire dall'anno di assunzione
o inizio collaborazione)**: **_80€/ora_**;
- **dirigente**: **_100€/ora_**;

Ferme restando le regole di calcolo, gli importi orari devono poter essere modificati.
Dopo aver disegnato il diagramma UML delle classi della soluzione proposta e averlo
implementato in linguaggio Java, codificare una classe Java denominata _Progetto_
con uno o più metodi per l'aggiunta di membri del personale al progetto:
la classe dovrà prevedere un metodo che restituisca il costo complessivo relativo
al personale per l'intero progetto.
