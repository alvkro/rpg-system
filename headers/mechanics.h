#include <iostream>
#include <string>
#include <vector>
#include "menu.h"
#include "inimigo.h"
#include "jogador.h"
#include "itens.h"
using namespace std;

// Colocar uma biblioteca para randomizar os ataques que nem no Dota (seria uma adição legal...)

bool Combate(Jogador& player, Inimigo& enemy) {
    while (player.Vida != 0 || enemy.Vida != 0 ) {
        int action;
        MenuAcao(player, enemy);
        cin >> action;
        switch (action)
        {
        case 1:
            player.AtaqueInimigo(enemy);
            break;
        case 2:
            player.SelectItem();
        case 3:
            break;
        }
        enemy.InimigoAtaque(player);
    }
    if (player.Vida == 0) {
        cout << "Você perdeu... :(";
    }
    else {
        cout << "Você ganhou!! :)";
    }
}

//void BancoDeItens() {
//    vector <Item> Items;
//
//    Item espada_curta = {"Espada Curta", 10, TipoDeItem::Espada};
//    Item pocao_pequena = {"Pocao Pequena", 20, TipoDeItem::Pocao};
//    Item escudo_madeira = {"Escudo de Madeira", 5, TipoDeItem::Escudo};
//    Item adaga_ferro = {"Adaga de Ferro", 8, TipoDeItem::Espada};
//    // Adicionar mais items?
//
//    Items.push_back(espada_curta);
//    Items.push_back(pocao_pequena);
//    Items.push_back(escudo_madeira);
//    Items.push_back(adaga_ferro);
//}