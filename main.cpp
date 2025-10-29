#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "headers/jogador.h"
#include "headers/inimigo.h"
#include "headers/mechanics.h"
#include "headers/menu.h"
using namespace std;

int main() {
    Jogador Player;
    Inimigo Enemy;

    MenuPrincipal();
    while (true) {
        int option;
        switch (option)
        {
        case 1:
            break;
        }
    }

    while (true) {
        string confirm;
        Player.GetNome(Player);
        cout << "Seu nome é" << Player.Nome << ". Confirma?\n"; // toupper() posteriormente
        cout << "Digite SIM ou NÃO: "; 
        cin >> confirm;
        if (confirm == "SIM") {
            break;
        }
    }

    Combate(Player, Enemy);
}