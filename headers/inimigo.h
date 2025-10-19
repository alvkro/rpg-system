#include <iostream>
#include <vector>
#include <string>
#include "jogador.h"
#include "itens.h"
using namespace std;


class Inimigo {
    public:
    string Nome;
    int Vida;
    int Ataque;

    // Funções:

    int InimigoAtaque(Jogador& player) {
        cout << Nome << " atacou " << player.Nome << "!\n";
        return player.Vida -= Ataque;
    }
};