#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "headers/itens.h"
#include "headers/inimigo.h"
#include "headers/jogador.h"

using namespace std;

    // Funções:

    void Inimigo::InimigoAtaque(Jogador& player, Inimigo& enemy) {
        cout << enemy.Nome << " atacou " << player.Nome << "!\n";
        player.Vida -= enemy.Ataque;
    }

    void Inimigo::showInimigo(const Inimigo& enemy) {
        cout << "Nome: " << enemy.Nome << endl;
        cout << "Vida: " << enemy.Vida << "hp\n"; 
    }
