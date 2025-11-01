#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "mechanics.h"
#include "itens.h"

class Jogador;
using namespace std;

class Inimigo {
    public:
    string Nome = "Thanos";
    int Vida = 200;
    int Ataque = 10;

    // Funções:

    void GetInimigoAtaque(Jogador& player, Inimigo& enemy);
    void GetInimigoInfo(const Inimigo& enemy);
};

