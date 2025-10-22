#ifndef JOGADOR_H
#define JOGADOR_H
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
    Item SelectItem();
    void AtaqueInimigo(Inimigo& enemy);
    void showJogador(const Jogador& player);

    private:
    vector <Item> Inventario;
};

#endif