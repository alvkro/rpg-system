#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "itens.h"

class Jogador;
using namespace std;


class Inimigo {
    public:
    string Nome;
    int Vida = 200;
    int Ataque = 10;

    // Funções:

    void InimigoAtaque(Jogador& player, Inimigo& enemy);
    void showInimigo(const Inimigo& enemy);
};

