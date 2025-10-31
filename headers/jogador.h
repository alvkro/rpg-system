#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "itens.h"


class Inimigo;
using namespace std;

class Jogador { // Futuramente, fazer um sistema de classes (mago, guerreiro, paladino...)
    public:
    string Nome;
    int Vida = 100;
    int Ataque = 10;


    // Funções (assinaturas):

    char GetNomeJogador(Jogador& player);
    // Item SelectItem();
    void GetAtaqueInimigo(Jogador& player, Inimigo& enemy);
    void GetJogadorInfo(const Jogador& player);
    // const vector<Item>& getInventario() const;

    private:
    vector <Item> Inventario;
};