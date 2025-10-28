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

    void DataPlayer(Jogador& player);
    // Item SelectItem();
    void AtaqueInimigo(Jogador& player, Inimigo& enemy);
    void showJogador(const Jogador& player);
    // const vector<Item>& getInventario() const;

    private:
    vector <Item> Inventario;
};