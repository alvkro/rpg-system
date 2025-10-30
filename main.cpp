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
        cin >> option;
        switch (option)
        {
        case 1:
            break;
        }

        Player.GetNomeJogador(Player);
        
        Combate(Player, Enemy);
        if(Combate(Player, Enemy) == true) {
            cout << Player.Nome << " GANHOU!\n";
            break;
        }
        else {
            cout << Enemy.Nome << " GANHOU!\n";
            break;
        }
    }   
}