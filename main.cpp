#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "headers/jogador.h"
#include "headers/inimigo.h"
#include "headers/mechanics.h"
#include "headers/menu.h"
#include "headers/itens.h"
using namespace std;

int main() {
    Jogador Player;
    vector <Jogador> Inventario;
    Inimigo Enemy;

    // MENU PRINCIPAL

    MenuPrincipal();
    while (true) {
        int option;
        cin >> option;
        cleanConsole();
        switch (option)
        {
        case 1:
            break;
        }
        break;
    }

    // PERSONALIZAÇÃO DO JOGADOR

    while (true) {
        if ((Player.GetNomeJogador(Player)) == 'S') {
            cleanConsole();
            break;
        }
        else if (Player.GetNomeJogador(Player) == 'N') {
            cleanConsole();
            Player.GetNomeJogador(Player);
        }
        break;
    }

    while (true) {
        if (Player.SetItens() == 'S') {
            cleanConsole();
            break;
        }
        else if (Player.SetItens() == 'N') {
            cleanConsole();
            Player.SetItens();
        }
        break;
    }

    // COMBATE
        
    Combate(Player, Enemy);
    if (Combate(Player, Enemy) == true) {
        cleanConsole();
        cout << Player.Nome << " GANHOU!\n";
    }
    else {
        cleanConsole();
        cout << Enemy.Nome << " GANHOU!\n";
    }
}   
