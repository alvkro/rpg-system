#include <iostream>
#include <string>
#include <vector>
#include "headers/menu.h"
#include "headers/inimigo.h"
#include "headers/jogador.h"
#include "headers/itens.h"
using namespace std;

// Colocar uma biblioteca para randomizar os ataques que nem no Dota (seria uma adição legal...)

bool Combate(Jogador& player, Inimigo& enemy) {
    while (player.Vida >= 0 && enemy.Vida >= 0 ) {
        int action;
        MenuAcao(player, enemy);
        cin >> action;
        switch (action)
        {
        case 1:
            player.GetAtaqueInimigo(player, enemy);
            cin.get();
            if (enemy.Vida <= 0) {
                return true;
            }
            break;
        //case 2:
        //    player.SelectItem(); // ainda preciso trabalhar nos itens
        //    break;
        case 3:
            break;
        }
        cin.get();
        enemy.GetInimigoAtaque(player, enemy);
        if (player.Vida <= 0) {
                return false;
            }
        }
        if (player.Vida <= 0) {
            return false;
        }
        else if (enemy.Vida <= 0) {
            return true;
        }
        return false;
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