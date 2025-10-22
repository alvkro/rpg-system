#ifndef INIMIGO_H
#define INIMIGO_H
#include <iostream>
#include <vector>
#include <string>
#include "headers/itens.h"
#include "headers/jogador.h"

using namespace std;


class Inimigo {
    public:
    string Nome;
    int Vida = 200;
    int Ataque = 10;

    // Funções:

    void InimigoAtaque(Jogador& player) {
        cout << Nome << " atacou " << player.Nome << "!\n";
        player.Vida -= Ataque;
    }

    void showInimigo(const Inimigo& enemy) {
        cout << "Nome: " << enemy.Nome << endl;
        cout << "Vida: " << enemy.Vida << "hp\n"; 
    }
};

#endif