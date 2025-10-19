#include <iostream>
#include <string>
#include <vector>
#include "menu.h"
#include "structs.h"
using namespace std;

// Colocar uma biblioteca para randomizar os ataques (seria uma adição legal...)

void BancoDeItens() {
    vector <Item> Items;

    Item espada_curta = {"Espada Curta", 10, TipoDeItem::Espada};
    Item pocao_pequena = {"Pocao Pequena", 20, TipoDeItem::Pocao};
    Item escudo_madeira = {"Escudo de Madeira", 5, TipoDeItem::Escudo};
    Item adaga_ferro = {"Adaga de Ferro", 8, TipoDeItem::Espada};
    // Adicionar mais items?

    Items.push_back(espada_curta);
    Items.push_back(pocao_pequena);
    Items.push_back(escudo_madeira);
    Items.push_back(adaga_ferro);
}