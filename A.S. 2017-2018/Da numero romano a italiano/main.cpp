#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

using namespace std;

const string CIFRE[20] = {
	"zero",
	"uno",
	"due",
	"tre",
	"quattro",
	"cinque",
	"sei",
	"sette",
	"otto",
	"nove",
	"dieci",
	"undici",
	"dodici",
	"tredici",
	"quattordici",
	"quindici",
	"sedici",
	"diciassette",
	"diciotto",
	"diciannove",
};

const string DECINE[10] = {
	"",  // 0
	"dieci",  // 10
	"venti",   // 20
	"trenta",  // 30
	"quaranta",  // 40
	"cinquanta",  // 50
	"sessanta",
	"settanta",
	"ottanta",
	"novanta",
};

bool controlla_numero(int numero) {
    return numero >= 0 && numero <= 999999;
}

string converti_0_19(int numero) {
	return CIFRE[numero];
}

string converti_20_99(int numero) {
	int n_unita = numero % 10;
	int n_decina = (numero - n_unita) / 10;

    string unita = "";
    if (n_unita != 0) unita = converti_0_19(n_unita);
	string decina = DECINE[n_decina];

	if (n_unita == 1 || n_unita == 8) {
		decina.resize(decina.size() - 1);
	}
	return decina + unita;
}

string converti_0_99(int numero) {
	if (numero <= 19) {
		return converti_0_19(numero);
	}
	else {
		return converti_20_99(numero);
	}
}

string converti_100_999(int numero) {
	int n_unita = numero % 10;
	int n_decina = ((numero - n_unita) % 100) / 10;
	int n_centinaia = (numero - n_unita - n_decina) / 100;
	int n_senza_centinaia = n_decina * 10 + n_unita;

	string unita_decina;
	unita_decina = converti_0_99(n_senza_centinaia);

	string risultato;
	if (n_centinaia == 1) {
		risultato = "cento";
	}
	else {
		risultato = converti_0_19(n_centinaia) + "cento";
	}
	if (n_senza_centinaia != 0) {
		risultato += unita_decina;
	}
	return risultato;
}

string converti_0_999(int numero) {
	if (numero <= 99) {
		return converti_0_99(numero);
	}
	else {
		return converti_100_999(numero);
	}
}


string converti_1000_999999(int numero) {
	int n_unita = numero % 10;
	int n_decina = ((numero - n_unita) % 100) / 10;
	int n_centinaia = ((numero - n_unita - n_decina) / 100) % 10;
	int n_migliaia = (numero - (n_unita + n_decina * 10 + n_centinaia * 100)) / 1000;
	int n_senza_migliaia = n_unita + n_decina * 10 + n_centinaia * 100;

	if (n_migliaia == 1 && n_senza_migliaia == 0) {
		return "mille";
	}
	else if (n_migliaia == 1) {
		return "mille" + converti_0_999(n_senza_migliaia);
	}
	else if (n_senza_migliaia == 0) {
		return converti_0_999(n_migliaia) + "mila";
	}
	else {
		return converti_0_999(n_migliaia) + "mila" + converti_0_999(n_senza_migliaia);
	}
}


string converti_da_arabo_a_italiano(int numero) {
	if (numero <= 19) {
		return converti_0_19(numero);
	}
	else if (numero >= 20 && numero <= 99) {
		return converti_20_99(numero);
	}
	else if (numero >= 100 && numero <= 999) {
		return converti_100_999(numero);
	}
	else if (numero >= 1000 && numero <= 999999) {
		return converti_1000_999999(numero);
	}
	else {
		return "";
	}
}


int converti_da_romano_a_arabo(string numero) {
	int i;
	string cur_char;
	int I=0, X=0, C=0, M=0;
	int V=0, L=0, D=0;
    int size = (int) numero.size() - 1;
	int valori[size];
	for (i=0; i <= size; i++)  {  // Converte le lettere in un array di valori
		cur_char = numero[i];
		if (cur_char == "I") {valori[i] = 1; I++;}
		else if (cur_char == "V") {valori[i] = 5; V++;}
		else if (cur_char == "X") {valori[i] = 10; X++;}
		else if (cur_char == "L") {valori[i] = 50; L++;}
		else if (cur_char == "C") {valori[i] = 100; C++;}
		else if (cur_char == "D") {valori[i] = 500; D++;}
		else if (cur_char == "M") {valori[i] = 1000; M++;}
        else return -1;  // Invalid char, -1 = invalid char error
        // cout << numero[i] << ": " << valori[i] << endl;
	}

	if (I > 3 || X > 3 || C > 3 || M > 4 || V > 1 || L > 1 || D > 1) {
		return -2;  // Invalid char count, -2 = invalid char count error
	}

    // cout << endl << endl;

    int risultato=0;
	for (i=0; i <= size; i++) {
        // cout << i << ": " << valori[i];
        if (valori[i] == valori[i+1] || valori[i] > valori[i+1]) {
            // cout << "; attuale == succ; quindi += attuale";
            risultato += valori[i];
            // cout << " (+" << valori[i] << ") " << endl;
        }
        else if (valori[i] < valori[i+1]) {  // valore attuale minore di quello successivo
            // cout << "; attuale < succ; quindi += succ - attuale";
            risultato += valori[i+1] - valori[i];
            // cout << " (+" << valori[i+1] - valori[i] << ") " << endl;
            i++;  // la successiva già contata
        }
    }
	return risultato;
}


int main() {
	// MAX = 999999
	int arabo;
	string romano;
	cout << "Inserisci numero romano: ";
	cin >> romano;

    // cout << endl << "<debug>" << endl;
	arabo = converti_da_romano_a_arabo(romano);
    if (!controlla_numero(arabo)) {
        cout << "Numero inserito non valido";
    }
    else {
        // cout << "</debug>";
        cout << "ARABO: " << arabo << endl << "ITALIANO: " << converti_da_arabo_a_italiano(arabo);
    }
}