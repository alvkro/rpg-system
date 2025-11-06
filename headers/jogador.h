#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "itens.h"
#include "mechanics.h"

class Inimigo;
using namespace std;

class Jogador { // Futuramente, fazer um sistema de classes (mago, guerreiro, paladino...)
    public:
    string Nome;
    int Vida = 100;
    int Ataque = 10; // O ataque pode ir de acordo com nivel de ataque do inimigo

    // Funções (assinaturas):

    char GetNomeJogador(Jogador& player);
    void GetAtaqueInimigo(Jogador& player, Inimigo& enemy);
    void GetJogadorInfo(const Jogador& player);
    char SetItens(); // Membro privado!
    void SelectItem();
    void UseItem(Jogador& player);
    
    private:
    vector <Item> Inventario;
    vector <Item> AtualItem;
};