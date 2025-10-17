#include <iostream>
#include <string>
#include <vector>
#include "structs.h"
using namespace std;

// Colocar uma biblioteca para randomizar os ataques (seria uma adição legal...)

void CreateItem(Item& item) { // Tem que achar uma maneira de salvar esses items
    while (true) {
        printf("Digite o nome do seu item: ");
        cin >> item.Nome;

        printf("Digite o nível de poder do seu item: ");
        cin >> item.Poder;

        if (item.Nome == "0" || item.Poder == 0) {
            break;
        }
    }
}

Item SelectItem(const Jogador& jogador) {
    int Escolha;
    if (jogador.Inventario.empty()) {
        cout << "Inventário vazio!\n";
        return {"", 0}; 
    }
    else {
        for (int i = 0; i < jogador.Inventario.size(); i++) {
            cout << i + 1 << ". " << jogador.Inventario[i].Nome << " (Poder: " << jogador.Inventario[i].Poder << ")\n";
        }
        while(true) {
            cout << "Escolha um item:";
            cin >> Escolha;
            if(Escolha >= 1 && Escolha <= jogador.Inventario.size()) {
                break;
            }
            else {
                cout << "Item Inválido! Tente novamente\n";
            }
        }
    }
    return jogador.Inventario[Escolha - 1];
}

int AtaqueInimigo(Inimigo& enemy, Jogador& player) {
    cout << player.Nome << " atacou " << enemy.Nome << "!\n";
    return enemy.Vida -= player.Ataque;
}

int InimigoAtaque(Inimigo& enemy, Jogador& player) {
    cout << enemy.Nome << " atacou " << player.Nome << "!\n";
    return player.Vida -= enemy.Ataque;
}

vector <Item> BancoDeItens() {
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