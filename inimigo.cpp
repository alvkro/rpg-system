#include <iostream>
#include <vector>
#include <string>
#include "headers/menu.h"
#include "headers/itens.h"
#include "headers/inimigo.h"
#include "headers/jogador.h"

using namespace std;

    // Funções:

    void Inimigo::GetInimigoAtaque(Jogador& player, Inimigo& enemy) {
        cout << enemy.Nome << " atacou " << player.Nome << "!\n";
        player.Vida -= enemy.Ataque;
    }

    void Inimigo::GetInimigoInfo(const Inimigo& enemy) {
        cout << "Nome: " << enemy.Nome << endl;
        cout << "Vida: " << enemy.Vida << "hp\n"; 
    }
