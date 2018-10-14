#include <iostream>

using namespace std;

const string MAP[3] = {"•", "X", "O"};

void printTris(int tris[3][3], int player, bool winner=false) {
    int id = 1;
    if (!winner) cout << "\t[Turno di " << MAP[player] << "]" << endl;
    if (winner) {
        if (player == 3) cout << "\t  [Parità]" << endl;
        else cout << "\t[" << MAP[player] << " ha vinto]" << endl;
    }
    for (int i=0; i<3; i++) {
        cout << "-------------------" << endl << "| ";
        for (int k=0; k<3; k++) {
            string cur=MAP[tris[i][k]];
            cout << " " << cur << " " << " | ";
            if (k == 2) cout << endl;
        }
        cout << "| ";
        for (int k=0; k<3; k++) {
            cout << " " << id << " " << " | ";
            if (k == 2) cout << endl;
            id++;
        }
    }
    cout << "-------------------" << endl;
}

void resetGame(int tris[3][3]) {
    for (int i=0; i<3; i++) {
        for (int k=0; k<3; k++) {
            tris[i][k] = 0;
        }
    }
}

bool isEmpty(int tris[3][3], int n) {
    n--;
    int k = n % 3;
    int i = (n - k) / 3;
    return tris[i][k] == 0;
}

void update(int tris[3][3], int player, int n) {
    n--;
    int k = n % 3;
    int i = (n - k) / 3;
    tris[i][k] = player;
}

bool isTrisFull(int tris[3][3]) {
    for (int i=0; i<3; i++) {
        for (int k=0; k<3; k++) {
            if (tris[i][k] == 0) return false;
        }
    }
    return true;
}

int isGameFinished(int tris[3][3], int player) {
    for (int i=0; i<3; i++) {
        for (int k=0; k<3; k++) {
            if (i == 1 && tris[i][k] == player && tris[i-1][k] == player && tris[i+1][k] == player) {
                return player;
            }
            if (k == 1 && tris[i][k] == player && tris[i][k-1] == player && tris[i][k+1] == player) {
                return player;
            }
            if (i == 1 && k == 1 && tris[i][k] == player &&
                    ((tris[i+1][k+1] == player && tris[i-1][k-1] == player) ||
                            (tris[i-1][k+1] == player && tris[i+1][k-1]))) {
                return player;
            }
        }
    }
    if (isTrisFull(tris)) return 3;
    return false;
}

int main() {
    int tris[3][3];
    int player = 1, tmp_player;
    int cell;
    int game_status = 0;

    cout << "-- Tris by Marco Aceti --";
    resetGame(tris);

    while (game_status == 0) {
        cout << endl << endl;
        printTris(tris, player);
        cout << "E' il turno del giocatore " << MAP[player] << " [inserisci il numero della cella o -1 per uscire]: ";
        cin >> cell;
        if (cell == -1) {
            break;
        }
        if (!isEmpty(tris, cell)) {
            cout << "La selezione non è valida. Riprovare." << endl << endl;
            continue;
        }
        update(tris, player, cell);

        game_status = isGameFinished(tris, player);
        if (game_status > 0) {
            cout << endl << endl;
            printTris(tris, game_status, true);
            if (game_status <= 2) cout << "Il giocatore " << MAP[player] << " ha vinto. Complimenti!" << endl;
            if (game_status == 3) cout << "Nessun giocatore ha vinto, parità!" << endl;
            string choice;
            cout << "Vuoi giocare ancora [S/N]? ";
            cin >> choice;
            if (choice == "S" || choice == "s") {
                resetGame(tris);
                game_status = 0;
            }
        }

        tmp_player = player;
        if (tmp_player == 1) player = 2;
        if (tmp_player == 2) player = 1;
    }
    cout << endl << endl << "Grazie per aver giocato. Arrivederci!";
    return 0;
}
