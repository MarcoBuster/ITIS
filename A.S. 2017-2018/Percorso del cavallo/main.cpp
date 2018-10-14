#include <iostream>
#include <zconf.h>

using namespace std;

void stampaScacchiera(int scacchiera[8][8]) {
    int i, k;

    cout << endl << "-- Scacchiera --";
    for (i=0; i<8; i++) {
        cout << endl << "--------------------------" << endl;
        for (k=0; k<8; k++) {
            if (k == 0)
                cout << "|";
            if (scacchiera[i][k] == 0)
                cout << " o ";
            else if (scacchiera[i][k] == 1)
                cout << " X ";
            else if (scacchiera[i][k] == 2)
                cout << "[C]";
        }
        cout << "|";
    }
    cout << endl << "--------------------------";
}

bool muovi(int scacchiera[8][8], int i=-1) {
    int k;
    int x=0, y=0;
    int guessed_x, guessed_y;
    bool specific=true;

    // Cerca per il cavallo nella scacchiera
    for (i=0; i<8; i++) {
        for (k=0; k<8; k++) {
            if (scacchiera[i][k] == 2) {
                x = i;
                y = k;
            }
        }
    }

    if (i == -1) {
        i = 0;
        specific=false;
    }
    do {
        switch (i) {
            case 0:
                guessed_x = x + 2;
                guessed_y = y + 1;
                break;
            case 1:
                guessed_x = x + 1;
                guessed_y = y + 2;
                break;
            case 2:
                guessed_x = x - 2;
                guessed_y = y - 1;
                break;
            case 3:
                guessed_x = x - 1;
                guessed_y = y - 2;
                break;
            case 4:
                guessed_x = x + 2;
                guessed_y = y - 1;
                break;
            case 5:
                guessed_x = x - 2;
                guessed_y = y + 1;
                break;
            default:
                cout << endl << "[Incaglio] [Dio cane] [Stacco tutto]" << endl;
                return false;
        }
        if (!specific) {
            i++;
        }
    }
    while (guessed_x > 7 || guessed_y > 7 || guessed_x < 0 || guessed_y < 0 || scacchiera[guessed_x][guessed_y] != 0);

    scacchiera[x][y] = 1;
    scacchiera[guessed_x][guessed_y] = 2;
    return true;
}

int main() {
    int scacchiera[8][8];
    // API scacchiera: 0 = vuoto; 1 = già passato; 2 = cavallo
    int x, y;
    int i, k;
    bool success=true;

    cout << "-- Calcolatore del percorso del cavallo --" << endl;
    cout << "Inserisci la coordinata X della posizione di partenza del cavallo (dio cane): ";
    cin >> x;
    cout << "Inserisci la coordinata Y della posizione di partenza del cavallo (dio porco): ";
    cin >> y;

    for (i=0; i<8; i++) {
        for (k=0; k<8; k++) {
            scacchiera[i][k] = 0;
        }
    }
    scacchiera[x-1][y-1] = 2;

    i = 0;
    while (success) {
        stampaScacchiera(scacchiera);
        sleep(0);
        success = muovi(scacchiera, i);
    }
    return 0;
}