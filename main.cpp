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
    vector <Jogador> Inventario;
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
        break;
    }

    while(true){
        if ((Player.GetNomeJogador(Player)) == 'S') {
            break;
        }
        else if (Player.GetNomeJogador(Player) == 'N') {
            Player.GetNomeJogador(Player);
        }
    }
        
        Combate(Player, Enemy);
        if(Combate(Player, Enemy) == true) {
            cout << "oioi";
            cout << Player.Nome << " GANHOU!\n";
        }
        else {
            cout << Enemy.Nome << " GANHOU!\n";
        }
}   
