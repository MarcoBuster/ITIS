# Compiti per il 15/03/2019
> Esercizio 35 pagina A257


Si intende realizzare una gerarchia di classi per rappresentare e gestire i dipendenti di una scuola:
docenti, impiegati e impiegati che effettuano straordinari.
Ogni **docente** è caratterizzato dal nominativo, dal sesso, dalla data di nascita,
dal numero di ore di docenza e dallo stipendio mensile:
queste informazioni devono essere impostate in fase di inizializzazione di un oggetto docente.
Ogni **impiegato** è caratterizzato dal nominative, dal sesso, dalla data di nascita,
dal livello e dallo stipendio mensile: queste informazioni devono essere impostate
in fase di inizializzazione di un oggetto _impiegato_.
Un **impiegato che effettua straordinari** è un impiegato a cui viene attribuito
un certo numero di ore di straordinario mensili e una relativa retribuzione oraria
da impostare in fase di inizializzazione: la retribuzione oraria è sempre la stessa
per tutti gli impiegati che effettuano straordinari e il loro stipendio integra
il pagamento delle ore di straordinario effettuate. 

Definire mediante un diagramma UML le classi che realizzano la gerarchia descritta valutando
l'opportunità di utilizzare una o più classi astratte.
Implementare in linguaggio Java le classi progettate specificando costruttori
e metodi di accesso agli attributi e sovrascrivendo opportunamente i metodi
_toString_ ed _equals_. Codificare una classe _Test_ il cui metodo _main_ 
istanzi oggetti corrispondenti alle varie tipologie di dipendenti e invochi
ciascuno dei metodi definiti almeno una volta.
