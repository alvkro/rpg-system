#include <iostream>
#include <string>
#include <vector>
#include "structs.h"
using namespace std;

void showJogador(const Jogador& player) {
    printf("Nome: %s", player.Nome);
    printf("Vida: %iHP", player.Vida);
}

void showInimigo(const Inimigo& enemy) {
    printf("Inimigo: %s", enemy.Nome);
    printf("Vida: %iHP", enemy.Vida);
}

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
    if (jogador.Inventario.empty()) {
        cout << "Inventário vazio!\n";
        return {"", 0}; // Item sentinela!
    }

    int Escolha;
    for (int i = 0; i < jogador.Inventario.size(); i++) {
        cout << i + 1 << ". " << jogador.Inventario[i + 1].Nome << " (Poder: " << jogador.Inventario[i].Poder << ")\n";
    }
    printf("Selecione um item do seu inventário: \n");
    // Escolha = 
    /*if (Escolha < jogador.Inventario.size()) {
        return 
    }*/
}