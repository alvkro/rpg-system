#include <iostream>
#include <vector>
#include <string>
#include "itens.h"
using namespace std;


class Inimigo {
    public:
    string Nome;
    int Vida = 200;
    int Ataque = 10;

    // Funções:

    int InimigoAtaque(Jogador& player) {
        cout << Nome << " atacou " << player.Nome << "!\n";
        return player.Vida -= Ataque;
    }

    void showInimigo(const Inimigo& enemy) {
        cout << "Nome: " << enemy.Nome << endl;
        cout << "Vida: " << enemy.Vida << "hp\n"; 
    }
};