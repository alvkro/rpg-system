#pragma once
#include <string>
#include <vector>
using namespace std;

enum TipoDeItem {
    Espada,
    Escudo,
    Pocao,
};

struct Item {
    string Nome;
    int pontos_de_acao;
    TipoDeItem tipo;

    vector <Item> SetItens(vector <Item>& Inventario);
};

const vector <Item> BancoDeItems {
    {"Espada de Ferro", 100, Espada},
    {"Escudo de Ferro", 30, Escudo},
    {"Poção de Vida", 20, Pocao},
    {"Poção de Veneno", 10, Pocao}
};