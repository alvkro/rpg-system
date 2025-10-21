#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "jogador.h"
#include "inimigo.h"
#include "mechanics.h"
#include "menu.h"
using namespace std;

int main() {
    Jogador Player;
    Inimigo Enemy;

    while (true) {
        string confirm;
        Player.DataPlayer(Player);
        cout << "Seu nome é" << Player.Nome << ". Confirma?"; // toupper() posteriormente
        cin >> confirm;
        if (confirm == "SIM") {
            break;
        }
    }

    while (true) {
        int option;
        MenuPrincipal();
        switch (option)
        {
        case 1:
            break;
        }
    }
    Combate(Player, Enemy);
}